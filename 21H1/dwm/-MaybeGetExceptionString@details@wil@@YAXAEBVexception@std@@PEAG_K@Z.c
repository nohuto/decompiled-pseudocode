/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x14000ACD8
 * Callers:
 *     _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0 @ 0x14000B167 (_wil--details--RecognizeCaughtExceptionFromCallback_--_1_--catch$0.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$1 @ 0x14000B631 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$4 @ 0x14000B6E3 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$5 @ 0x14000B713 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400075FC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(
        wil::details *this,
        const struct std::exception *a2,
        unsigned __int16 *a3)
{
  __int64 v5; // rax

  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(wil::details *))(*(_QWORD *)this + 8LL))(this);
    StringCchPrintfW((unsigned __int16 *)a2, (size_t)a3, (size_t *)L"std::exception: %hs", v5);
  }
}
