/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140062318
 * Callers:
 *     _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::catch$48 @ 0x140061E77 (_CSpatialCrossProcessBaseEndpoint--InitializeCPMemory_--_1_--catch$48.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1400621D4 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException();
}
