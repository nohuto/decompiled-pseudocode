/*
 * XREFs of MmGetNextSession @ 0x1402D5F90
 * Callers:
 *     PopInvokeWin32Callout @ 0x14067B7C8 (PopInvokeWin32Callout.c)
 *     ExGetSessionPoolTagInformation @ 0x1406832BC (ExGetSessionPoolTagInformation.c)
 *     ExCallSessionCallBack @ 0x140683678 (ExCallSessionCallBack.c)
 *     ObpProcessRemoveObjectQueue @ 0x140684B90 (ObpProcessRemoveObjectQueue.c)
 *     PfpPrivSourceEnum @ 0x1406CE0D0 (PfpPrivSourceEnum.c)
 *     PfpProcessScenarioPhase @ 0x14078CF98 (PfpProcessScenarioPhase.c)
 *     MmEnumerateSystemImages @ 0x140797DE0 (MmEnumerateSystemImages.c)
 *     MmGetSessionMappedViewInformation @ 0x1408C48D0 (MmGetSessionMappedViewInformation.c)
 *     MmPerfLogSessionRundown @ 0x1408C8C18 (MmPerfLogSessionRundown.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1408E39AC (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopInputDisabled @ 0x1408F510C (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x14093E300 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140949F60 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409D8B6C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D8C54 (VfThunkApplyThunks.c)
 * Callees:
 *     MiGetNextSession @ 0x1402D5FA8 (MiGetNextSession.c)
 */

__int64 __fastcall MmGetNextSession(struct _DMA_ADAPTER *a1)
{
  return MiGetNextSession(a1);
}
