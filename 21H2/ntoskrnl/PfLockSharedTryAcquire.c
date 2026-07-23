/*
 * XREFs of PfLockSharedTryAcquire @ 0x14027378C
 * Callers:
 *     PfCheckDeprioritizeFile @ 0x14067C4E8 (PfCheckDeprioritizeFile.c)
 * Callees:
 *     ExfTryAcquirePushLockShared @ 0x140208080 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall PfLockSharedTryAcquire(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rbx
  __int64 v4; // rax
  char v5; // cl
  ULONG_PTR v6; // rdi
  int SessionId; // eax
  bool v8; // zf
  unsigned __int8 AbOrphanedEntrySummary; // al

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeGetCurrentThread();
  --v3->SpecialApcDisable;
  if ( ++v3->AbAllocationRegionCount != 1 )
  {
    v6 = 0LL;
    goto LABEL_10;
  }
  LOBYTE(v4) = v3->AbEntrySummary;
  if ( (_BYTE)v4 )
    goto LABEL_3;
  if ( v3->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v3->AbOrphanedEntrySummary;
    v3->AbOrphanedEntrySummary = 0;
    LOBYTE(v4) = v3->AbEntrySummary | AbOrphanedEntrySummary;
LABEL_3:
    v5 = v4;
    _BitScanForward((unsigned int *)&v4, (unsigned __int8)v4);
    v3->AbEntrySummary = v5 & ~(1 << v4);
    v6 = (ULONG_PTR)&v3->LockEntries[v4];
    goto LABEL_4;
  }
  v6 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
    goto LABEL_10;
  EtwTraceAutoBoostEntryExhaustion(v3, BugCheckParameter2);
LABEL_4:
  if ( !v6 )
  {
LABEL_10:
    _interlockedbittestandset((volatile signed __int32 *)&v3->116 + 1, 0x10u);
    goto LABEL_11;
  }
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140C4FA08[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx(v3->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v6 + 40) = SessionId;
  *(_QWORD *)(v6 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_11:
  --v3->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v3);
  v8 = v3->SpecialApcDisable++ == -1;
  if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
    KiCheckForKernelApcDelivery();
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL)
    || ExfTryAcquirePushLockShared((unsigned __int64 *)BugCheckParameter2) )
  {
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    return 1LL;
  }
  else
  {
    if ( v6 )
      KeAbPostReleaseEx(BugCheckParameter2, v6);
    KeLeaveCriticalRegion();
    return 0LL;
  }
}
