/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEA_W_K@Z @ 0x1802EBF14
 * Callers:
 *     _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0_0 @ 0x1802EC04B (_wil--details--RecognizeCaughtExceptionFromCallback_--_1_--catch$0_0.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$2 @ 0x1802EC186 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$2.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$6 @ 0x1802EC27B (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$6.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$7 @ 0x1802EC2AB (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1802EC300 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(wil::details *this, wchar_t *a2, wchar_t *a3)
{
  __int64 v5; // rax

  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(wil::details *))(*(_QWORD *)this + 8LL))(this);
    StringCchPrintfW(a2, (unsigned __int64)a3, L"std::exception: %hs", v5);
  }
}
