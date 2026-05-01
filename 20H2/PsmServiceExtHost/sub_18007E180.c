/*
 * XREFs of sub_18007E180 @ 0x18007E180
 * Callers:
 *     sub_1800699BC @ 0x1800699BC (sub_1800699BC.c)
 * Callees:
 *     sub_180006258 @ 0x180006258 (sub_180006258.c)
 *     sub_1800062A4 @ 0x1800062A4 (sub_1800062A4.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000AE74 @ 0x18000AE74 (sub_18000AE74.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180022DB0 @ 0x180022DB0 (sub_180022DB0.c)
 *     sub_18002AA58 @ 0x18002AA58 (sub_18002AA58.c)
 *     sub_18007D30C @ 0x18007D30C (sub_18007D30C.c)
 */

__int64 __fastcall sub_18007E180(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // ebx
  int v6; // ebp
  __int64 i; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rax
  char *v17; // r14
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v18 = 0LL;
  if ( (a1[81] & 0x400000000000000LL) == 0 )
    return (unsigned int)-1073700845;
  if ( a2 == -1 )
    return (unsigned int)-1073741584;
  if ( a2 )
  {
    sub_1800093A0((__int64)a1, 0);
    for ( i = sub_180006258((__int64)a1); ; i = sub_1800062A4(v9) )
    {
      v9 = i;
      if ( !i )
        goto LABEL_12;
      v8 = *(_QWORD *)(i + 72);
      if ( v8 )
      {
        if ( *(_BYTE *)(v8 + 40) == 2 )
          break;
      }
    }
    v13 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 24LL);
    if ( v13 == -1 )
    {
LABEL_12:
      v5 = -1058275323;
      goto LABEL_13;
    }
    sub_18000A110((__int64)a1);
    v6 = 0;
    v14 = sub_180022DB0(
            (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(a1[97] + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                       + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
          - 168,
            v13,
            &v18);
    v2 = v18;
    v5 = v14;
    if ( v14 >= 0 )
    {
      v6 = 1;
      sub_18000AE74(v18, (__int64)a1);
      v16 = *(_QWORD *)(v2 + 696);
      if ( v16 )
      {
        if ( *(_QWORD **)(*(_QWORD *)v16 + 80LL) == a1 )
        {
          v5 = sub_18007D30C(v2, a2, v15);
          if ( v5 >= 0 )
          {
            a1[118] = a2;
            sub_18001CC80((__int64)a1, 0);
            v5 = 0;
          }
        }
        else
        {
          v5 = -1058275322;
        }
      }
      else
      {
        v5 = -1058275323;
      }
    }
    if ( v2 )
      sub_18000A110(v2);
    if ( v5 < 0 )
      goto LABEL_34;
    if ( !v6 )
      sub_1800093A0((__int64)a1, 0);
  }
  else
  {
    v6 = 1;
    sub_1800093A0((__int64)a1, 0);
    a1[118] = 0LL;
    v5 = 0;
  }
  v17 = (char *)sub_18002AA58((__int64)a1);
  if ( v17 )
  {
    sub_18000A110((__int64)a1);
    v6 = 0;
    sub_180017F60(v17);
  }
LABEL_34:
  if ( v6 )
LABEL_13:
    sub_18000A110((__int64)a1);
  if ( v2 )
  {
    sub_18001E380();
    if ( (*(_QWORD *)(v2 + 592))-- == 1LL )
      sub_18000A1AC(v2 - 64, v10);
    sub_18000F390();
  }
  return (unsigned int)v5;
}
