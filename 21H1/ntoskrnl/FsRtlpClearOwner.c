/*
 * XREFs of FsRtlpClearOwner @ 0x1402F5CF4
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x140254990 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140255A70 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestShareableOplock @ 0x14025A570 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1402F56F8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockCleanup @ 0x1402F5884 (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1402FF660 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakToII @ 0x1403155DC (FsRtlpOplockBreakToII.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140369C70 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x14036A3F8 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140373290 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14038FC2C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404EAA64 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1406111D0 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x140887A4C (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14024CFC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall FsRtlpClearOwner(__int64 a1, __int64 a2)
{
  void *v3; // rcx

  if ( a2 )
  {
    v3 = *(void **)(a2 + 40);
    *(_QWORD *)(a2 + 40) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  else
  {
    v3 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( v3 )
    ObDereferenceObjectDeferDeleteWithTag(v3, 0x746C6644u);
}
