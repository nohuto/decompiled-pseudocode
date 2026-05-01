/*
 * XREFs of _wil::ResultFromException__lambda_cdb60d23c2a90c24b7bbcc9711020c83____::_1_::catch$1 @ 0x1803D3347
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18019F81C (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_cdb60d23c2a90c24b7bbcc9711020c83____::_1_::catch_1(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = wil::ResultFromCaughtException(a1);
  return 0LL;
}
