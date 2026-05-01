/*
 * XREFs of ___abi_translateCurrentException_::_1_::catch$1 @ 0x1801062AE
 * Callers:
 *     <none>
 * Callees:
 *     RoOriginateError_0 @ 0x18008DD4A (RoOriginateError_0.c)
 *     ?__abi_FailFast@@YAXXZ_0 @ 0x180091503 (-__abi_FailFast@@YAXXZ_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall __abi_translateCurrentException_::_1_::catch_1(__int64 a1, __int64 a2)
{
  if ( !*(_BYTE *)(a2 + 64) )
  {
    __abi_FailFast();
    __debugbreak();
  }
  RoOriginateError_0(2147942414LL, 0LL);
  return &loc_1800914B5;
}
