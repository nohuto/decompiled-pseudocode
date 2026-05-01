/*
 * XREFs of _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$3 @ 0x1802EC1B6
 * Callers:
 *     <none>
 * Callees:
 *     ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEA_W_K@Z @ 0x1802EC008 (-RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEA_W_K@Z.c)
 */

_BOOL8 __fastcall wil::details::ResultFromCaughtException_WinRt_::_1_::catch_3(__int64 a1, __int64 a2)
{
  int v3; // eax

  v3 = wil::details::RecognizeCaughtExceptionFromCallback(*(wil::details **)(a2 + 112), *(wchar_t **)(a2 + 120));
  *(_DWORD *)(a2 + 136) = v3;
  return v3 >= 0;
}
