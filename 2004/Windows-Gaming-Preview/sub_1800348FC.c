/*
 * XREFs of sub_1800348FC @ 0x1800348FC
 * Callers:
 *     sub_180033A20 @ 0x180033A20 (sub_180033A20.c)
 *     sub_180033C40 @ 0x180033C40 (sub_180033C40.c)
 *     sub_180033D80 @ 0x180033D80 (sub_180033D80.c)
 *     sub_1800347E0 @ 0x1800347E0 (sub_1800347E0.c)
 * Callees:
 *     sub_180034538 @ 0x180034538 (sub_180034538.c)
 *     sub_1800349BC @ 0x1800349BC (sub_1800349BC.c)
 */

char __fastcall sub_1800348FC(volatile signed __int32 *a1, signed __int32 a2)
{
  bool v3; // di
  signed __int32 v4; // ecx
  char result; // al
  signed __int32 v6; // eax
  signed __int32 v7; // [rsp+30h] [rbp+8h] BYREF
  signed __int32 v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = _InterlockedExchangeAdd(a1 + 63, 0xFFFFFFFF) == 1;
  if ( _InterlockedIncrement(a1 + 61) == 1 )
    v3 = _InterlockedExchangeAdd(a1 + 63, 0xFFFFFFFF) == 1;
  v4 = *((_DWORD *)a1 + 14);
  if ( a2 >= 0 )
  {
    v8 = -2;
    _InterlockedCompareExchange(&v8, v4, -2);
    if ( v8 || (v6 = _InterlockedCompareExchange(a1 + 14, 1, 0), (result = v6 == v8) == 0) )
      result = _InterlockedCompareExchange(a1 + 14, 1, 2);
  }
  else
  {
    v7 = -2;
    result = _InterlockedCompareExchange(&v7, v4, -2);
    if ( v7 != 2 )
      result = sub_180034538((__int64)(a1 + 2), a2, 1);
  }
  if ( v3 )
    return sub_1800349BC(a1);
  return result;
}
