/*
 * XREFs of MmQuitNextSession @ 0x140622350
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x1403D0124 (PsQueryCpuQuotaInformation.c)
 *     PopWatchdogWorker @ 0x1405790B0 (PopWatchdogWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x1405E2E40 (ObpProcessRemoveObjectQueue.c)
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x14087E520 (CmFcpChangeSubscriptionWrapper.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409D9B6C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D9C54 (VfThunkApplyThunks.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 */

__int64 __fastcall MmQuitNextSession(struct _DMA_ADAPTER *a1)
{
  HalPutDmaAdapter(a1);
  return 0LL;
}
