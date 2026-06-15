/*
 * XREFs of ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18000A4EC
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18000609C (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     ?RegisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ @ 0x180025F40 (-RegisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x18000A5AC (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Win32(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  wil::details::ReportFailure_Win32(this, a2);
}
