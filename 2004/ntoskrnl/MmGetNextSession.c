/*
 * XREFs of MmGetNextSession @ 0x1402DC960
 * Callers:
 *     PfpPrivSourceEnum @ 0x1406980C8 (PfpPrivSourceEnum.c)
 *     ObpProcessRemoveObjectQueue @ 0x140698AB0 (ObpProcessRemoveObjectQueue.c)
 *     PopInvokeWin32Callout @ 0x1406A4E40 (PopInvokeWin32Callout.c)
 *     ExCallSessionCallBack @ 0x1406A507C (ExCallSessionCallBack.c)
 *     ExGetSessionPoolTagInformation @ 0x1406DE15C (ExGetSessionPoolTagInformation.c)
 *     PfpProcessScenarioPhase @ 0x14077ABB8 (PfpProcessScenarioPhase.c)
 *     MmEnumerateSystemImages @ 0x140780120 (MmEnumerateSystemImages.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C12D0 (MmGetSessionMappedViewInformation.c)
 *     MmPerfLogSessionRundown @ 0x1408C5618 (MmPerfLogSessionRundown.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1408E036C (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopInputDisabled @ 0x1408F1D1C (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x14093AD00 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1409469D0 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409D5B5C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D5C44 (VfThunkApplyThunks.c)
 * Callees:
 *     MiGetNextSession @ 0x1402DC978 (MiGetNextSession.c)
 */

__int64 __fastcall MmGetNextSession(struct _DMA_ADAPTER *a1)
{
  return MiGetNextSession(a1);
}
