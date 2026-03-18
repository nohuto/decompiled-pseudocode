/*
 * XREFs of MmQuitNextSession @ 0x1406E3830
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x1403CF644 (PsQueryCpuQuotaInformation.c)
 *     PopWatchdogWorker @ 0x140577460 (PopWatchdogWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406B0C90 (ObpProcessRemoveObjectQueue.c)
 *     EtwpEnableGuid @ 0x1407188EC (EtwpEnableGuid.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x140880A20 (CmFcpChangeSubscriptionWrapper.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409DBB7C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409DBC64 (VfThunkApplyThunks.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 */

__int64 __fastcall MmQuitNextSession(struct _DMA_ADAPTER *a1)
{
  HalPutDmaAdapter(a1);
  return 0LL;
}
