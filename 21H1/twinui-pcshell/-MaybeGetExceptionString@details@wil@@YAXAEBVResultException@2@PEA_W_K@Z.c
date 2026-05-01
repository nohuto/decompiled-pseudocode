/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEA_W_K@Z @ 0x1802CA348
 * Callers:
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$0 @ 0x1802CA562 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$0.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$4 @ 0x1802CA657 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$4.c)
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x1802C8870 (-GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(wil::details *this, wchar_t *a2, wchar_t *a3)
{
  if ( a2 )
    wil::GetFailureLogString(a2, a3, (__int64)this + 24, (const struct wil::FailureInfo *)a3);
}
