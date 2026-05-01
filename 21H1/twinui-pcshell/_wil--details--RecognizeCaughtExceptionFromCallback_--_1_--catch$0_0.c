/*
 * XREFs of _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0_0 @ 0x1802CA4AB
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEA_W_K@Z @ 0x1802CA374 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEA_W_K@Z.c)
 */

__int64 __fastcall wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch_0_0(__int64 a1, __int64 a2)
{
  int v3; // eax

  wil::details::MaybeGetExceptionString(*(wil::details **)(a2 + 32), *(wchar_t **)(a2 + 64), *(wchar_t **)(a2 + 72));
  v3 = *(_DWORD *)(a2 + 80);
  if ( v3 >= 0 )
    v3 = -2147024322;
  *(_DWORD *)(a2 + 80) = v3;
  return 0LL;
}
