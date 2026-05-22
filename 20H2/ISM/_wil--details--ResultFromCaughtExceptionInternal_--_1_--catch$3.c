/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$3 @ 0x180066D3F
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z @ 0x180065820 (-MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_3(__int64 a1, __int64 a2)
{
  wil::details *v3; // rbx

  **(_BYTE **)(a2 + 128) = 1;
  v3 = *(wil::details **)(a2 + 48);
  wil::details::MaybeGetExceptionString(
    v3,
    *(const struct wil::ResultException **)(a2 + 112),
    *(unsigned __int16 **)(a2 + 120));
  *(_DWORD *)(a2 + 112) = *((_DWORD *)v3 + 7);
  return 0LL;
}
