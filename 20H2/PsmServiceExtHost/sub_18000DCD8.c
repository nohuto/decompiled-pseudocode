/*
 * XREFs of sub_18000DCD8 @ 0x18000DCD8
 * Callers:
 *     sub_180021954 @ 0x180021954 (sub_180021954.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000EE4C @ 0x18000EE4C (sub_18000EE4C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18001FD20 @ 0x18001FD20 (sub_18001FD20.c)
 *     sub_180020CC0 @ 0x180020CC0 (sub_180020CC0.c)
 *     sub_1800223EC @ 0x1800223EC (sub_1800223EC.c)
 *     sub_180023230 @ 0x180023230 (sub_180023230.c)
 *     sub_180026040 @ 0x180026040 (sub_180026040.c)
 *     sub_1800260A0 @ 0x1800260A0 (sub_1800260A0.c)
 *     sub_1800277CC @ 0x1800277CC (sub_1800277CC.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 *     sub_18003D548 @ 0x18003D548 (sub_18003D548.c)
 *     sub_18007F67C @ 0x18007F67C (sub_18007F67C.c)
 */

__int64 __fastcall sub_18000DCD8(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rsi
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 i; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v15; // rdx
  bool v16; // zf
  __int64 v17; // r8
  __int64 j; // rcx
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rdx

  v1 = *(_QWORD **)(a1 + 776);
  v3 = 0LL;
  v4 = v1[11];
  sub_18001E380(a1);
  sub_1800277CC(v1);
  v5 = v1[71];
  if ( v5 && (unsigned int)sub_18000EE4C(v5) )
    v6 = v1[71];
  else
    v6 = 0LL;
  sub_18000F390();
  v7 = (_QWORD *)v1[75];
  v8 = (_QWORD *)(a1 + 808);
  if ( (_QWORD *)*v7 != v1 + 74 )
    __fastfail(3u);
  *v8 = v1 + 74;
  *(_QWORD *)(a1 + 816) = v7;
  *v7 = v8;
  v1[75] = v8;
  if ( *(_DWORD *)(a1 + 560) == 2 )
  {
    if ( v1[71] )
    {
      sub_180023230(v1);
      sub_18007F67C(v1, v21, 4864LL);
      v13 = -1058275322;
      goto LABEL_16;
    }
    v1[71] = a1;
  }
  sub_180023230(v1);
  if ( *(_DWORD *)(a1 + 560) != 2 )
  {
    if ( v6 )
    {
      sub_18001E380(v9);
      sub_1800093A0(a1, 0);
      *(_QWORD *)(a1 + 784) = sub_180026040(v6);
      sub_18000A110(a1);
      sub_18000F390();
    }
    goto LABEL_23;
  }
  for ( i = sub_18001FD20(v1); ; i = sub_180020CC0(v11) )
  {
    v11 = i;
    if ( !i )
      break;
    if ( *(_DWORD *)(i + 560) != 2 )
    {
      sub_18001E380(v9);
      sub_1800093A0(v11, 0);
      *(_QWORD *)(v11 + 784) = sub_180026040(a1);
      sub_18000A110(v11);
      sub_18000F390();
    }
  }
  if ( (*(_QWORD *)(a1 + 648) & 0x400000000000000LL) != 0 )
  {
    sub_1800223EC(v4);
    *(_QWORD *)(v4 + 328) = a1;
    sub_1800260A0(v4);
    v17 = 0LL;
    for ( j = v4; ; j = *(_QWORD *)(*(_QWORD *)(v20 + 776) + 88LL) )
    {
      v19 = sub_18003CF94(j, 3LL, v17);
      v20 = v19;
      if ( !v19 )
        break;
      if ( v19 != a1 && *(_DWORD *)(v19 + 560) == 2 && !*(_QWORD *)(v19 + 696) )
      {
        v13 = sub_18003D548(v19, a1);
        if ( v13 < 0 )
          goto LABEL_16;
      }
      v17 = v20;
    }
    goto LABEL_23;
  }
  if ( *(_QWORD *)(a1 + 696) )
  {
LABEL_23:
    v13 = 0;
    goto LABEL_16;
  }
  sub_18001E380(v9);
  sub_1800223EC(v4);
  v12 = *(_QWORD *)(v4 + 328);
  if ( !v12 || !(unsigned int)sub_18000EE4C(v12) )
  {
    sub_1800260A0(v4);
    sub_18000F390();
LABEL_14:
    v13 = 0;
    goto LABEL_15;
  }
  v3 = *(_QWORD *)(v4 + 328);
  sub_1800260A0(v4);
  sub_18000F390();
  v13 = sub_18003D548(a1, v3);
  if ( v13 >= 0 )
    goto LABEL_14;
LABEL_15:
  if ( v3 )
  {
    sub_18001E380(v9);
    v16 = (*(_QWORD *)(v3 + 592))-- == 1LL;
    if ( v16 )
      sub_18000A1AC(v3 - 64, v22);
    sub_18000F390();
  }
LABEL_16:
  if ( v6 )
  {
    sub_18001E380(v9);
    v16 = (*(_QWORD *)(v6 + 592))-- == 1LL;
    if ( v16 )
      sub_18000A1AC(v6 - 64, v15);
    sub_18000F390();
  }
  return (unsigned int)v13;
}
