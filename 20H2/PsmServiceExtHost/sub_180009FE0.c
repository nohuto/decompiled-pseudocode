/*
 * XREFs of sub_180009FE0 @ 0x180009FE0
 * Callers:
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 * Callees:
 *     sub_180004F18 @ 0x180004F18 (sub_180004F18.c)
 *     sub_180008168 @ 0x180008168 (sub_180008168.c)
 *     sub_180009018 @ 0x180009018 (sub_180009018.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000A168 @ 0x18000A168 (sub_18000A168.c)
 *     sub_18000AE74 @ 0x18000AE74 (sub_18000AE74.c)
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 *     sub_18007ECDC @ 0x18007ECDC (sub_18007ECDC.c)
 */

__int64 __fastcall sub_180009FE0(__int64 a1, __int64 a2, volatile signed __int64 **a3)
{
  volatile signed __int64 *v3; // rbx
  int v7; // r14d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  volatile signed __int64 *v16; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v16 = 0LL;
  v7 = 1;
  sub_18000AE74(a1, a2);
  do
  {
    v8 = sub_18000A168(a1, a2);
    if ( v8 )
    {
      v13 = v8 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 != 1 )
          {
            v11 = -1073741823;
            goto LABEL_8;
          }
          v15 = sub_18007ECDC(v10, v9, &v16);
        }
        else
        {
          v15 = sub_180008168(v10, v9, &v16);
        }
      }
      else
      {
        v15 = sub_180004F18(
                (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 776) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                       + 120)
                           + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
              - 168,
                a1,
                a2,
                (__int64 *)&v16);
      }
      v3 = v16;
      v11 = v15;
    }
    else
    {
      v3 = *(volatile signed __int64 **)(a1 + 688);
      if ( _InterlockedIncrement64(v3 + 12) <= 1 )
        __fastfail(0xEu);
      v16 = v3;
      sub_18000A110(a1);
      sub_18000A110(a2);
      v7 = 0;
      sub_180009018((__int64)v3);
      v11 = 0;
    }
  }
  while ( v11 == -1073741267 );
  if ( v11 >= 0 )
  {
    *a3 = v3;
    v3 = 0LL;
  }
LABEL_8:
  if ( v7 )
  {
    sub_18000A110(a1);
    sub_18000A110(a2);
  }
  if ( v3 )
    sub_1800286D8(v3);
  return (unsigned int)v11;
}
