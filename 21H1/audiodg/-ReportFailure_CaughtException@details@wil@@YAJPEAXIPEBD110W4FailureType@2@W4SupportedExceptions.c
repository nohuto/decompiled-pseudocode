/*
 * XREFs of ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1400621D4
 * Callers:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140062318 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x14001F3D0 (_alloca_probe.c)
 *     ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x140062238 (-ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4Support.c)
 */

__int64 wil::details::ReportFailure_CaughtException()
{
  return wil::details::ReportFailure_CaughtExceptionCommon();
}
