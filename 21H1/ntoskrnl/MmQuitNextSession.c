/*
 * XREFs of MmQuitNextSession @ 0x140656300
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x1403CBB94 (PsQueryCpuQuotaInformation.c)
 *     PopWatchdogWorker @ 0x1405733E0 (PopWatchdogWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x1405EF5A0 (ObpProcessRemoveObjectQueue.c)
 *     EtwpEnableGuid @ 0x14067E254 (EtwpEnableGuid.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x140879BC0 (CmFcpChangeSubscriptionWrapper.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409D5AFC (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D5BE4 (VfThunkApplyThunks.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 */

__int64 __fastcall MmQuitNextSession(struct _DMA_ADAPTER *a1)
{
  HalPutDmaAdapter(a1);
  return 0LL;
}
