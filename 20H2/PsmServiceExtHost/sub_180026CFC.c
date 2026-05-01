/*
 * XREFs of sub_180026CFC @ 0x180026CFC
 * Callers:
 *     sub_18000DF0C @ 0x18000DF0C (sub_18000DF0C.c)
 * Callees:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_180005700 @ 0x180005700 (sub_180005700.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180023230 @ 0x180023230 (sub_180023230.c)
 *     sub_180025F88 @ 0x180025F88 (sub_180025F88.c)
 *     sub_180026040 @ 0x180026040 (sub_180026040.c)
 *     sub_180026F54 @ 0x180026F54 (sub_180026F54.c)
 *     sub_180026FA4 @ 0x180026FA4 (sub_180026FA4.c)
 *     sub_1800277CC @ 0x1800277CC (sub_1800277CC.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180026CFC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        _QWORD *a7)
{
  int v11; // r14d
  unsigned int v12; // ebp
  __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // rbx
  int v16; // ebx
  unsigned int v17; // ebp
  __int64 v18; // rbx
  unsigned __int64 v20; // rsi
  unsigned int i; // edx
  __int64 v22; // rdx
  __int64 v24; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+80h] [rbp+8h] BYREF

  v11 = 0;
  sub_1800093A0(a1, 0);
  if ( (*(_QWORD *)(a1 + 648) & 0x400000000000000LL) != 0 )
  {
    RtlQueryUnbiasedInterruptTime(&v25);
    v20 = v25 / 0x2710;
    for ( i = 0; i <= 0xEA60; i = v25 / 0x2710 - v20 )
    {
      if ( *(_QWORD *)(a1 + 600) == a1 + 600 )
        break;
      if ( (*(_QWORD *)(a1 + 648) & 0x2000000000LL) != 0 )
        break;
      v24 = -10000LL * (60000 - i);
      sub_180005700(a1, a1 + 16, (__int64)&v24);
      RtlQueryUnbiasedInterruptTime(&v25);
    }
  }
  sub_180026FA4(a1);
  v12 = a6;
  v13 = a6;
  *a7 = *(_QWORD *)(a1 + 800);
  if ( (unsigned int)sub_180026F54(a1, v13) )
  {
    if ( *(_DWORD *)(a1 + 832) == -1
      || *(_QWORD *)(a1 + 824)
      || (v14 = TpAllocTimer(a1 + 824, sub_18002AAB0, a1, 0LL), v14 >= 0) )
    {
      v15 = *(_QWORD *)(a1 + 648) >> 49;
      sub_18000A110(a1);
      v16 = v15 & 1;
      if ( !v16 )
      {
        sub_18001E380();
        sub_180026040(a1);
        sub_18000F390();
        sub_180025F88((_QWORD *)a1);
      }
      v17 = v12 & 0xFFFFFFFE;
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, unsigned int, char, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 - 16) + 40LL) + 160LL))(
              a2,
              a3,
              a4,
              a5,
              v17,
              1,
              0LL);
      if ( v14 < 0 )
      {
        if ( !v16 )
        {
          sub_18001E380();
          if ( (*(_QWORD *)(a1 + 592))-- == 1LL )
            sub_18000A1AC(a1 - 64, v22);
          sub_18000F390();
        }
        sub_1800093A0(a1, 0);
      }
      else
      {
        sub_1800093A0(a1, 0);
        if ( *(_DWORD *)(a1 + 560) == 2 )
        {
          v18 = *(_QWORD *)(a1 + 776);
          sub_1800277CC(v18);
          *(_WORD *)(v18 + 608) = 6912;
          sub_180023230(v18);
        }
        if ( !(unsigned int)sub_180026F54(a1, v17) )
          v11 = sub_18000506C(a1, 3u, 2304, 0LL, 1, 0);
        *(_QWORD *)(a1 + 648) |= 0x100000000000000uLL;
        sub_18001CC80(a1, 0);
        *(_QWORD *)(a1 + 648) |= 0x2000000000000uLL;
        v14 = 0;
      }
    }
  }
  else
  {
    v14 = -1058275325;
  }
  *(_QWORD *)(a1 + 648) &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable(a1 + 680);
  sub_18000A110(a1);
  if ( v11 )
    sub_180017F60(*(char **)(a1 + 688));
  return (unsigned int)v14;
}
