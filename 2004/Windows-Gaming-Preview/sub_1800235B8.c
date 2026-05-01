/*
 * XREFs of sub_1800235B8 @ 0x1800235B8
 * Callers:
 *     sub_1800216F0 @ 0x1800216F0 (sub_1800216F0.c)
 *     sub_180021920 @ 0x180021920 (sub_180021920.c)
 *     sub_180021AD0 @ 0x180021AD0 (sub_180021AD0.c)
 *     sub_18002349C @ 0x18002349C (sub_18002349C.c)
 * Callees:
 *     sub_180023148 @ 0x180023148 (sub_180023148.c)
 *     sub_180023BE4 @ 0x180023BE4 (sub_180023BE4.c)
 */

char __fastcall sub_1800235B8(volatile signed __int32 *a1, signed __int32 a2)
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
    return sub_180023BE4(a1);
  return result;
}
