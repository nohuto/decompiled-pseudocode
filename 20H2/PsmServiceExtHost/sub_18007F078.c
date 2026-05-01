/*
 * XREFs of sub_18007F078 @ 0x18007F078
 * Callers:
 *     sub_18007E97C @ 0x18007E97C (sub_18007E97C.c)
 * Callees:
 *     sub_180009018 @ 0x180009018 (sub_180009018.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000A168 @ 0x18000A168 (sub_18000A168.c)
 *     sub_18000AE74 @ 0x18000AE74 (sub_18000AE74.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 */

__int64 __fastcall sub_18007F078(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rbx

  sub_18000AE74(a1, a2);
  v6 = 0;
  if ( (unsigned int)sub_18000A168(a1, a2) )
  {
    v6 = -1073740007;
  }
  else
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(a1 + 688);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 96)) <= 1 )
        __fastfail(0xEu);
      sub_18000A110(a1);
      sub_18000A110(a2);
      sub_180009018(v7);
      sub_18000AE74(a1, a2);
      if ( *(_QWORD *)(a1 + 688) == v7 )
        break;
      sub_18000A110(a1);
      sub_18000A110(a2);
      sub_180017F60((char *)v7);
      sub_1800286D8(v7);
      sub_18000AE74(a1, a2);
    }
    *a3 = v7;
  }
  sub_18000A110(a1);
  sub_18000A110(a2);
  return v6;
}
