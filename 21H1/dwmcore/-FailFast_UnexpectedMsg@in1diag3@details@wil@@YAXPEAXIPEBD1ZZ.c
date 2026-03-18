/*
 * XREFs of ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1801B432C
 * Callers:
 *     ?DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z @ 0x1801B41D8 (-DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x1801B5458 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

void wil::details::in1diag3::FailFast_UnexpectedMsg(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        const char *a5,
        ...)
{
  wil::details::ReportFailure_HrMsg(this, a2);
}
