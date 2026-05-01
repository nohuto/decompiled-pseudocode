/*
 * XREFs of _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$2 @ 0x1802CA5E6
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEA_W_K@Z @ 0x1802CA374 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEA_W_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtException_WinRt_::_1_::catch_2(__int64 a1, __int64 a2)
{
  wil::details::MaybeGetExceptionString(*(wil::details **)(a2 + 48), *(wchar_t **)(a2 + 112), *(wchar_t **)(a2 + 120));
  return 0LL;
}
