/*
 * XREFs of sub_180008168 @ 0x180008168
 * Callers:
 *     sub_180009FE0 @ 0x180009FE0 (sub_180009FE0.c)
 * Callees:
 *     sub_1800065A4 @ 0x1800065A4 (sub_1800065A4.c)
 *     sub_180009018 @ 0x180009018 (sub_180009018.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000AE74 @ 0x18000AE74 (sub_18000AE74.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 */

__int64 __fastcall sub_180008168(__int64 a1, __int64 a2, volatile signed __int64 **a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  volatile signed __int64 *v6; // rbx
  unsigned int v7; // ebp

  v3 = a1;
  v4 = a2;
  if ( !*(_QWORD *)(a1 + 688) )
  {
    v3 = a2;
    v4 = a1;
  }
  v6 = *(volatile signed __int64 **)(v3 + 688);
  if ( _InterlockedIncrement64(v6 + 12) <= 1 )
    __fastfail(0xEu);
  sub_18000A110(v3);
  sub_18000A110(v4);
  sub_180009018(v6);
  sub_18000AE74(v3, v4);
  if ( *(volatile signed __int64 **)(v3 + 688) != v6 || *(_QWORD *)(v4 + 688) )
  {
    v7 = -1073741267;
    if ( v6 )
    {
      sub_18000A110(v3);
      sub_18000A110(v4);
      sub_180017F60((PVOID)v6);
      sub_1800286D8(v6);
      sub_18000AE74(v3, v4);
    }
  }
  else
  {
    sub_1800065A4((__int64 *)v6, v4);
    v7 = 0;
    *a3 = v6;
  }
  return v7;
}
