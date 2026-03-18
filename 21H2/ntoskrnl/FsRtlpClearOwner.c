/*
 * XREFs of FsRtlpClearOwner @ 0x140240DB4
 * Callers:
 *     FsRtlUninitializeOplock @ 0x14023A260 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakToII @ 0x14024A5B4 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x140256F58 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRequestShareableOplock @ 0x1402A2490 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockCleanup @ 0x1402A30D0 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1402A4E10 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140376950 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403857EC (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14039F3B0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404173E4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140542458 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14071C610 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14092E8CC (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
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
