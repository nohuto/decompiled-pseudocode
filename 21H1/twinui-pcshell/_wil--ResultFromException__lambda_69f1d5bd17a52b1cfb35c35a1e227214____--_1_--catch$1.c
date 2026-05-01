/*
 * XREFs of _wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214____::_1_::catch$1 @ 0x1803AFA53
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18017B8EC (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214____::_1_::catch_1(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = wil::ResultFromCaughtException(a1);
  return 0LL;
}
