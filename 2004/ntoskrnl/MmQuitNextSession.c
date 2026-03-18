/*
 * XREFs of MmQuitNextSession @ 0x1406D3050
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x1403CC9B4 (PsQueryCpuQuotaInformation.c)
 *     PopWatchdogWorker @ 0x140573A30 (PopWatchdogWorker.c)
 *     EtwpEnableGuid @ 0x140635748 (EtwpEnableGuid.c)
 *     ObpProcessRemoveObjectQueue @ 0x140698AB0 (ObpProcessRemoveObjectQueue.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x14087AEB0 (CmFcpChangeSubscriptionWrapper.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409D5B5C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D5C44 (VfThunkApplyThunks.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 */

__int64 __fastcall MmQuitNextSession(struct _DMA_ADAPTER *a1)
{
  HalPutDmaAdapter(a1);
  return 0LL;
}
