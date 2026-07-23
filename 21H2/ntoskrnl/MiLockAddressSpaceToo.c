/*
 * XREFs of MiLockAddressSpaceToo @ 0x14023BDD0
 * Callers:
 *     MiPrepareVadDelete @ 0x140705C58 (MiPrepareVadDelete.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockVad @ 0x14031F3A8 (MiUnlockVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 */

$C459BD0D405E8E46662177FB3D0A143F *__fastcall MiLockAddressSpaceToo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v4; // rbp
  struct _KTHREAD *v5; // rbx
  unsigned __int8 AbEntrySummary; // cl
  __int64 v7; // rax
  ULONG_PTR v8; // rdi
  int SessionId; // eax
  $C459BD0D405E8E46662177FB3D0A143F *result; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = a1 + 1224;
  v5 = KeGetCurrentThread();
  --v5->SpecialApcDisable;
  if ( ++v5->AbAllocationRegionCount != 1 )
  {
    v8 = 0LL;
    goto LABEL_10;
  }
  AbEntrySummary = v5->AbEntrySummary;
  if ( AbEntrySummary )
    goto LABEL_3;
  if ( v5->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v5->AbOrphanedEntrySummary;
    v5->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | v5->AbEntrySummary;
LABEL_3:
    _BitScanForward((unsigned int *)&v7, AbEntrySummary);
    v5->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    v8 = (ULONG_PTR)&v5->LockEntries[v7];
    goto LABEL_4;
  }
  v8 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
    goto LABEL_10;
  EtwTraceAutoBoostEntryExhaustion(v5, v4);
LABEL_4:
  if ( !v8 )
  {
LABEL_10:
    _interlockedbittestandset((volatile signed __int32 *)&v5->116 + 1, 0x10u);
    goto LABEL_11;
  }
  if ( v4 >= 0xFFFF800000000000uLL && byte_140C4FA08[((v4 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx(v5->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v8 + 40) = SessionId;
  *(_QWORD *)(v8 + 32) = v4 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_11:
  --v5->AbAllocationRegionCount;
  result = ($C459BD0D405E8E46662177FB3D0A143F *)KiAbThreadRemoveBoosts((ULONG_PTR)v5);
  if ( v5->SpecialApcDisable++ == -1 )
  {
    result = &v5->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)result->ApcState.ApcListHead[0].Flink != result )
      result = ($C459BD0D405E8E46662177FB3D0A143F *)KiCheckForKernelApcDelivery();
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
  {
    if ( v8 )
      KeAbPostReleaseEx(v4, v8);
    MiUnlockVad(CurrentThread, a2);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    return ($C459BD0D405E8E46662177FB3D0A143F *)KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
  else
  {
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    LOBYTE(CurrentThread[1].Queue) |= 1u;
  }
  return result;
}
