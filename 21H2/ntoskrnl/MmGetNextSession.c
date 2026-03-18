/*
 * XREFs of MmGetNextSession @ 0x1402A1770
 * Callers:
 *     ObpProcessRemoveObjectQueue @ 0x1406A1000 (ObpProcessRemoveObjectQueue.c)
 *     ExGetSessionPoolTagInformation @ 0x1406A8B68 (ExGetSessionPoolTagInformation.c)
 *     ExCallSessionCallBack @ 0x1406A8F48 (ExCallSessionCallBack.c)
 *     PfpPrivSourceEnum @ 0x140711614 (PfpPrivSourceEnum.c)
 *     PopInvokeWin32Callout @ 0x1407F2AD0 (PopInvokeWin32Callout.c)
 *     MmEnumerateSystemImages @ 0x140814DC0 (MmEnumerateSystemImages.c)
 *     PfpProcessScenarioPhase @ 0x14081BB14 (PfpProcessScenarioPhase.c)
 *     MmPerfLogSessionRundown @ 0x14096DDA8 (MmPerfLogSessionRundown.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x14098C390 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x14098FDE4 (PopSendSuspendResumeApplicationNotification.c)
 *     EtwpPoolRunDown @ 0x1409EAB74 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1409F5D80 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyPristineToAllSession @ 0x140A93644 (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140A937C4 (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     MiGetNextSession @ 0x1402A1788 (MiGetNextSession.c)
 */

__int64 __fastcall MmGetNextSession(void *a1)
{
  return MiGetNextSession(a1);
}
