/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$5 @ 0x14000B713
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x14000ACD8 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_5(__int64 a1, __int64 a2)
{
  wil::details::MaybeGetExceptionString(
    *(wil::details **)(a2 + 64),
    *(const struct std::exception **)(a2 + 112),
    *(unsigned __int16 **)(a2 + 120));
  return 0LL;
}
