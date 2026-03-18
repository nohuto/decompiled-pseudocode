/*
 * XREFs of RtlpHpEnvGetHeapManager @ 0x1402B3704
 * Callers:
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     RtlpHpFreeVA @ 0x1402AB58C (RtlpHpFreeVA.c)
 *     RtlpHpGetOwnerHeap @ 0x1402AC314 (RtlpHpGetOwnerHeap.c)
 *     RtlpHpFreeHeap @ 0x1402AC6EC (RtlpHpFreeHeap.c)
 *     RtlpHpSegMgrCommit @ 0x1402B0B50 (RtlpHpSegMgrCommit.c)
 *     RtlpHpAllocVA @ 0x1402B11F0 (RtlpHpAllocVA.c)
 *     RtlpHpQueryVA @ 0x14035F9BC (RtlpHpQueryVA.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x14035FB68 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpSegSegmentAllocate @ 0x140360AC8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140361C78 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpHeapCreate @ 0x1403781E4 (RtlpHpHeapCreate.c)
 *     RtlpHpRegisterEnvironment @ 0x140378DE8 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegSegmentFree @ 0x140386244 (RtlpHpSegSegmentFree.c)
 *     RtlpHpMetadataCommit @ 0x1403C6CD4 (RtlpHpMetadataCommit.c)
 *     RtlpHpExtrasSetPresent @ 0x14058EE00 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSizeHeapInternal @ 0x14058EF50 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     <none>
 */

void *__fastcall RtlpHpEnvGetHeapManager(_DWORD *a1)
{
  if ( (*a1 & 6) == 4 )
    return *(void **)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 672);
  else
    return &ExPoolState;
}
