/*
 * XREFs of MmGetNextSession @ 0x14035D920
 * Callers:
 *     PfpPrivSourceEnum @ 0x1405EEBC8 (PfpPrivSourceEnum.c)
 *     ObpProcessRemoveObjectQueue @ 0x1405EF5A0 (ObpProcessRemoveObjectQueue.c)
 *     ExGetSessionPoolTagInformation @ 0x1406BCDCC (ExGetSessionPoolTagInformation.c)
 *     PopInvokeWin32Callout @ 0x140710A4C (PopInvokeWin32Callout.c)
 *     ExCallSessionCallBack @ 0x140710C88 (ExCallSessionCallBack.c)
 *     PfpProcessScenarioPhase @ 0x1407787A8 (PfpProcessScenarioPhase.c)
 *     MmEnumerateSystemImages @ 0x140780B00 (MmEnumerateSystemImages.c)
 *     MmGetSessionMappedViewInformation @ 0x1408BFF80 (MmGetSessionMappedViewInformation.c)
 *     MmPerfLogSessionRundown @ 0x1408C42C8 (MmPerfLogSessionRundown.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1408DF10C (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopInputDisabled @ 0x1408F0A2C (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x140939A60 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140945730 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409D5AFC (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D5BE4 (VfThunkApplyThunks.c)
 * Callees:
 *     MiGetNextSession @ 0x14035D938 (MiGetNextSession.c)
 */

__int64 __fastcall MmGetNextSession(struct _DMA_ADAPTER *a1)
{
  return MiGetNextSession(a1);
}
