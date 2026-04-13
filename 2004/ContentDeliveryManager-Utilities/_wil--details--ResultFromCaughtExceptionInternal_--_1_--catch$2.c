/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$2 @ 0x1800CEC9E
 * Callers:
 *     <none>
 * Callees:
 *     ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x180005074 (-RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z.c)
 */

void *__fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_2(__int64 a1, __int64 a2)
{
  int v3; // eax

  v3 = wil::details::RecognizeCaughtExceptionFromCallback(*(wil::details **)(a2 + 32), *(unsigned __int16 **)(a2 + 40));
  *(_DWORD *)(a2 + 32) = v3;
  if ( v3 >= 0 )
    return &loc_1800052A9;
  else
    return &loc_1800052A3;
}
