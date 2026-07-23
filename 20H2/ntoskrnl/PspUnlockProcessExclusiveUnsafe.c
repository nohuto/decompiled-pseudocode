/*
 * XREFs of PspUnlockProcessExclusiveUnsafe @ 0x140580E30
 * Callers:
 *     NtTerminateProcess @ 0x1406991D0 (NtTerminateProcess.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

char __fastcall PspUnlockProcessExclusiveUnsafe(__int64 a1)
{
  unsigned __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v4; // bp
  unsigned int v5; // r8d
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rdx
  $C774EFD68449142D8271B1EC1EB7FB26 *v10; // rax
  __int64 v11; // rcx
  int v13; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1 + 1080;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1080));
  v13 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v1) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v4 = ++CurrentThread->AbAllocationRegionCount;
  v5 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v7 = !_BitScanReverse((unsigned int *)&v8, v5);
    if ( v7 )
      goto LABEL_13;
    v6 = (__int64)&CurrentThread->LockEntries[v8];
    v5 &= ~(1 << v8);
    if ( (*(_BYTE *)(v6 + 26) & 1) != 0
      && (*(_DWORD *)(v6 + 32) & 1) == 0
      && (*(_QWORD *)(v6 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v1 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v6 + 40) == SessionId )
    {
      *(_BYTE *)(v6 + 26) &= ~1u;
      if ( *(_QWORD *)(v6 + 32) )
        break;
    }
  }
  if ( !v6 )
  {
LABEL_13:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, SessionId, 0LL);
    goto LABEL_20;
  }
  *(_BYTE *)(v6 + 32) |= 2u;
  if ( *(__int64 *)(v6 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v6);
  v13 = *(_DWORD *)(v6 + 88) & 0x1FFFF;
  *(_DWORD *)(v6 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v6 + 25) &= ~1u;
  *(_QWORD *)(v6 + 32) = 0LL;
  v9 = (signed __int64)(v6 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v4 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v9;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v9);
LABEL_20:
  --CurrentThread->AbAllocationRegionCount;
  LOBYTE(v10) = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v1, &v13);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 )
  {
    v10 = &CurrentThread->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v10->ApcState.ApcListHead[0].Flink != v10 )
      LOBYTE(v10) = KiCheckForKernelApcDelivery(v11);
  }
  return (char)v10;
}
