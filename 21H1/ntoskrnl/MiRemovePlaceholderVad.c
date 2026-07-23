/*
 * XREFs of MiRemovePlaceholderVad @ 0x14054F878
 * Callers:
 *     MiCoalescePlaceholderAllocations @ 0x1408C3E54 (MiCoalescePlaceholderAllocations.c)
 *     MiPreparePlaceholderVadReplacement @ 0x1408D3B60 (MiPreparePlaceholderVadReplacement.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiRemoveVad @ 0x14054FAD0 (MiRemoveVad.c)
 */

__int64 __fastcall MiRemovePlaceholderVad(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rsi
  ULONG_PTR v4; // r15
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  unsigned __int8 v7; // di
  struct _KTHREAD *v8; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v10; // si
  unsigned int v11; // r8d
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _DWORD *v19; // r9
  int v21; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v4 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  SharedVm = MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v7 = v6;
  MiRemoveVad(a1, Process);
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessorsPadding[6], v7);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&Process[1].Affinity.Bitmap[8]);
  v21 = 0;
  v8 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&Process[1].Affinity.Bitmap[8]) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v8->ApcState.Process);
  else
    SessionId = -1;
  --v8->SpecialApcDisable;
  v10 = ++v8->AbAllocationRegionCount;
  v11 = ((char)v8->AbEntrySummary | (char)v8->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v14, v11);
    if ( v13 )
      goto LABEL_13;
    v12 = (__int64)&v8->LockEntries[v14];
    v11 &= ~(1 << v14);
    if ( (*(_BYTE *)(v12 + 26) & 1) != 0
      && (*(_DWORD *)(v12 + 32) & 1) == 0
      && (*(_QWORD *)(v12 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v12 + 40) == SessionId )
    {
      *(_BYTE *)(v12 + 26) &= ~1u;
      if ( *(_QWORD *)(v12 + 32) )
        break;
    }
  }
  if ( !v12 )
  {
LABEL_13:
    if ( (*((_DWORD *)&v8->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v8, v4, SessionId, 0LL);
    goto LABEL_20;
  }
  *(_BYTE *)(v12 + 32) |= 2u;
  if ( *(__int64 *)(v12 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v12);
  v21 = *(_DWORD *)(v12 + 88) & 0x1FFFF;
  *(_DWORD *)(v12 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v12 + 25) &= ~1u;
  *(_QWORD *)(v12 + 32) = 0LL;
  v15 = (signed __int64)(v12 - (unsigned __int64)v8->LockEntries) / 96;
  if ( v10 == 1 )
    v8->AbEntrySummary |= 1 << v15;
  else
    _InterlockedOr8((volatile signed __int8 *)&v8->AbOrphanedEntrySummary, 1 << v15);
LABEL_20:
  --v8->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v8, v4, &v21);
  v13 = v8->SpecialApcDisable++ == -1;
  if ( v13 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
    KiCheckForKernelApcDelivery(v17, v16, v18, v19);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v16, v18, (__int64)v19);
}
