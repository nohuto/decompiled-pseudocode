/*
 * XREFs of sub_1800369E4 @ 0x1800369E4
 * Callers:
 *     sub_180035F40 @ 0x180035F40 (sub_180035F40.c)
 *     sub_180036110 @ 0x180036110 (sub_180036110.c)
 *     sub_180036240 @ 0x180036240 (sub_180036240.c)
 *     sub_1800368C8 @ 0x1800368C8 (sub_1800368C8.c)
 * Callees:
 *     sub_180023148 @ 0x180023148 (sub_180023148.c)
 *     sub_180036AEC @ 0x180036AEC (sub_180036AEC.c)
 */

char __fastcall sub_1800369E4(volatile signed __int32 *a1, signed __int32 a2)
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
      result = sub_180023148((__int64)(a1 + 2), a2, 1);
  }
  if ( v3 )
    return sub_180036AEC(a1);
  return result;
}
