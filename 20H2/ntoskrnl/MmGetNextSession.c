/*
 * XREFs of MmGetNextSession @ 0x1402537E0
 * Callers:
 *     ExCallSessionCallBack @ 0x14062BF24 (ExCallSessionCallBack.c)
 *     PfpPrivSourceEnum @ 0x1406593DC (PfpPrivSourceEnum.c)
 *     ExGetSessionPoolTagInformation @ 0x14065C31C (ExGetSessionPoolTagInformation.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406B0C90 (ObpProcessRemoveObjectQueue.c)
 *     PopInvokeWin32Callout @ 0x14071FDDC (PopInvokeWin32Callout.c)
 *     PfpProcessScenarioPhase @ 0x1407891B8 (PfpProcessScenarioPhase.c)
 *     MmEnumerateSystemImages @ 0x14078DA30 (MmEnumerateSystemImages.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C7110 (MmGetSessionMappedViewInformation.c)
 *     MmPerfLogSessionRundown @ 0x1408CB458 (MmPerfLogSessionRundown.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1408E61AC (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopInputDisabled @ 0x1408F792C (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x140940B30 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x14094C790 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409DBB7C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409DBC64 (VfThunkApplyThunks.c)
 * Callees:
 *     MiGetNextSession @ 0x1402537F8 (MiGetNextSession.c)
 */

__int64 __fastcall MmGetNextSession(struct _DMA_ADAPTER *a1)
{
  return MiGetNextSession(a1);
}
