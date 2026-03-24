/*
 * XREFs of MmQuitNextSession @ 0x1406C3770
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402EFC44 (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x1403CFFB4 (PsQueryCpuQuotaInformation.c)
 *     PopWatchdogWorker @ 0x140578E70 (PopWatchdogWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x140684B90 (ObpProcessRemoveObjectQueue.c)
 *     EtwpEnableGuid @ 0x1406E2404 (EtwpEnableGuid.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x14087E3C0 (CmFcpChangeSubscriptionWrapper.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409D8B6C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D8C54 (VfThunkApplyThunks.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 */

__int64 __fastcall MmQuitNextSession(struct _DMA_ADAPTER *a1)
{
  HalPutDmaAdapter(a1);
  return 0LL;
}
