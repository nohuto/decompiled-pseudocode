/*
 * XREFs of MiRemovePlaceholderVad @ 0x140555368
 * Callers:
 *     MiCoalescePlaceholderAllocations @ 0x1408C87A4 (MiCoalescePlaceholderAllocations.c)
 *     MiPreparePlaceholderVadReplacement @ 0x1408D84B0 (MiPreparePlaceholderVadReplacement.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiRemoveVad @ 0x1405555C0 (MiRemoveVad.c)
 */

char __fastcall MiRemovePlaceholderVad(__int64 a1)
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
  _DWORD *v11; // r9
  unsigned int v12; // r8d
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v19; // [rsp+70h] [rbp+18h] BYREF

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
  v19 = 0;
  v8 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&Process[1].Affinity.Bitmap[8]) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v8->ApcState.Process);
  else
    SessionId = -1;
  --v8->SpecialApcDisable;
  v10 = ++v8->AbAllocationRegionCount;
  v11 = (_DWORD *)(v4 & 0x7FFFFFFFFFFFFFFCLL);
  v12 = ((char)v8->AbEntrySummary | (char)v8->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v15, v12);
    if ( v14 )
      goto LABEL_13;
    v13 = (__int64)&v8->LockEntries[v15];
    v12 &= ~(1 << v15);
    if ( (*(_BYTE *)(v13 + 26) & 1) != 0
      && (*(_DWORD *)(v13 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v11
      && *(_DWORD *)(v13 + 40) == SessionId )
    {
      *(_BYTE *)(v13 + 26) &= ~1u;
      if ( *(_QWORD *)(v13 + 32) )
        break;
    }
  }
  if ( !v13 )
  {
LABEL_13:
    if ( (*((_DWORD *)&v8->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v8, v4, SessionId, 0LL);
    goto LABEL_20;
  }
  *(_BYTE *)(v13 + 32) |= 2u;
  if ( *(__int64 *)(v13 + 32) < 0 )
    KiAbEntryRemoveFromTree(v13);
  v19 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
  *(_DWORD *)(v13 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v13 + 25) &= ~1u;
  *(_QWORD *)(v13 + 32) = 0LL;
  v16 = (signed __int64)(v13 - (unsigned __int64)v8->LockEntries) / 96;
  if ( v10 == 1 )
    v8->AbEntrySummary |= 1 << v16;
  else
    _InterlockedOr8((volatile signed __int8 *)&v8->AbOrphanedEntrySummary, 1 << v16);
LABEL_20:
  --v8->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v8, v4, (__int64)&v19, v11);
  v14 = v8->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
    KiCheckForKernelApcDelivery(v17);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
