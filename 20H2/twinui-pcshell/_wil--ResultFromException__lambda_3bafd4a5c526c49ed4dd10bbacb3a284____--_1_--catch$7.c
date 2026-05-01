/*
 * XREFs of _wil::ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284____::_1_::catch$7 @ 0x1803449B5
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18019F40C (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284____::_1_::catch_7(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = wil::ResultFromCaughtException(a1);
  return 0LL;
}
