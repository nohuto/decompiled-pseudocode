/*
 * XREFs of _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$7 @ 0x1802EC2AB
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEA_W_K@Z @ 0x1802EBF14 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEA_W_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtException_WinRt_::_1_::catch_7(__int64 a1, __int64 a2)
{
  wil::details::MaybeGetExceptionString(*(wil::details **)(a2 + 80), *(wchar_t **)(a2 + 112), *(wchar_t **)(a2 + 120));
  return 0LL;
}
