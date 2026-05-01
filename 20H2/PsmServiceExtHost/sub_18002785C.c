/*
 * XREFs of sub_18002785C @ 0x18002785C
 * Callers:
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 * Callees:
 *     sub_1800060BC @ 0x1800060BC (sub_1800060BC.c)
 *     sub_1800066B0 @ 0x1800066B0 (sub_1800066B0.c)
 *     sub_1800067F0 @ 0x1800067F0 (sub_1800067F0.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180012DB4 @ 0x180012DB4 (sub_180012DB4.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180025C98 @ 0x180025C98 (sub_180025C98.c)
 *     sub_180027B54 @ 0x180027B54 (sub_180027B54.c)
 *     sub_1800298A0 @ 0x1800298A0 (sub_1800298A0.c)
 *     sub_180029F74 @ 0x180029F74 (sub_180029F74.c)
 *     sub_18002A918 @ 0x18002A918 (sub_18002A918.c)
 *     sub_18002A9B4 @ 0x18002A9B4 (sub_18002A9B4.c)
 *     sub_18002AA58 @ 0x18002AA58 (sub_18002AA58.c)
 *     sub_180046950 @ 0x180046950 (sub_180046950.c)
 *     sub_18006B8A0 @ 0x18006B8A0 (sub_18006B8A0.c)
 *     sub_180070C2C @ 0x180070C2C (sub_180070C2C.c)
 *     sub_180070CC0 @ 0x180070CC0 (sub_180070CC0.c)
 *     sub_180077D40 @ 0x180077D40 (sub_180077D40.c)
 *     sub_180085678 @ 0x180085678 (sub_180085678.c)
 */

int __fastcall sub_18002785C(__int64 a1, int a2)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rsi
  int v6; // ebx
  int v7; // edx
  char *v8; // rbx
  BOOL v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  int v13; // [rsp+40h] [rbp-38h]
  __int64 v14; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+90h] [rbp+18h] BYREF
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  LODWORD(v2) = a2 - 1;
  v3 = a2;
  v4 = a1 + 64;
  if ( ((a2 - 1) & a2) == 0 && (a2 & 0x10) != 0 )
  {
    sub_18000A110(a1 + 64);
    sub_18006B8A0(a1, 1LL);
    goto LABEL_18;
  }
  if ( (a2 & 0x80u) == 0 )
  {
    if ( (a2 & 0x100) != 0 )
    {
      *(_DWORD *)(a1 + 1248) |= 0x100u;
      sub_18000A110(a1 + 64);
      sub_18000F390();
      if ( (int)sub_180029F74(a1, 2LL) < 0 )
        sub_180085678();
      sub_180025C98(v4, 2u);
      sub_18001E380();
      LODWORD(v2) = sub_1800093A0(v4, 0);
      *(_DWORD *)(a1 + 1248) &= ~0x100u;
      *(_DWORD *)(a1 + 1244) |= 0x100u;
    }
    else if ( (a2 & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 1248) |= 0x40u;
      sub_18000A110(a1 + 64);
      sub_18000F390();
      LOBYTE(v10) = (v3 & 0x40) != 0;
      sub_180077D40(a1, v10);
      sub_18001E380();
      LODWORD(v2) = sub_1800093A0(v4, 0);
      *(_DWORD *)(a1 + 1248) &= ~0x40u;
      *(_DWORD *)(a1 + 1244) |= 0x40u;
    }
    else if ( (a2 & 8) != 0 )
    {
      if ( (*(_QWORD *)(a1 + 712) & 0x200000000000LL) != 0 )
      {
        *(_DWORD *)(a1 + 1244) |= 8u;
      }
      else
      {
        *(_DWORD *)(a1 + 1248) |= 8u;
        sub_18000A110(a1 + 64);
        sub_18000F390();
        v6 = sub_180027B54(a1, 1LL);
        sub_18001E380();
        LODWORD(v2) = sub_1800093A0(v4, 0);
        *(_DWORD *)(a1 + 1244) |= 8u;
        *(_DWORD *)(a1 + 1248) &= ~8u;
        if ( v6 < 0 )
          *(_QWORD *)(v4 + 648) |= 0x200000000000uLL;
      }
    }
    else
    {
      v11 = a2 & 0x27;
      if ( (a2 & 0x27) != 0 && *(int *)(a1 + 24) >= 0 )
      {
        *(_DWORD *)(a1 + 1248) |= v11;
        LODWORD(v2) = NtClearEvent(*(HANDLE *)(a1 + 1304));
        if ( !*(_DWORD *)(a1 + 1320) || (LODWORD(v2) = sub_180070CC0(a1), (_DWORD)v2) )
        {
          if ( *(int *)(a1 + 24) >= 0 )
          {
            sub_180070C2C(a1, v11);
            LODWORD(v2) = sub_180070CC0(a1);
            *(_DWORD *)(a1 + 1248) &= ~v11;
            if ( (_DWORD)v2 )
              *(_DWORD *)(a1 + 1244) |= v11;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 1248) &= ~v11;
        }
      }
    }
    return v2;
  }
  LODWORD(v2) = sub_1800298A0(a1 + 64);
  if ( !(_DWORD)v2 )
  {
    *(_DWORD *)(a1 + 1248) |= 0x80u;
    *(_QWORD *)(v4 + 648) = *(_QWORD *)(v4 + 648) & 0xFFFFBFFF1FFFFFFFuLL | 0x20000000;
    *(_QWORD *)(v4 + 668) = 0LL;
    sub_1800060BC(v4, 1LL, 10LL, 0, 0, 0, 4, 0LL, v13, 0LL);
    sub_18000A110(v4);
    sub_18000F390();
    sub_18002A918(&v15, 0LL);
    v14 = v15;
    v17 = 0LL;
    sub_1800093A0(v4, 0);
    *(_DWORD *)(v4 + 672) = v14;
    RtlQueryUnbiasedInterruptTime(&v16);
    *(_DWORD *)(v4 + 668) = v16 / 0x2710;
    sub_18000A110(v4);
    sub_18002A9B4(v4, v14, *(_QWORD *)(v4 + 792));
    if ( (int)sub_180029F74(a1, 1LL) < 0 )
      sub_180085678();
    sub_180025C98(v4, 1u);
    sub_180046950(v4, &v14, &v17);
    if ( (*(_BYTE *)(a1 + 1244) & 0x80) == 0 )
    {
      v9 = sub_1800067F0(v4, v7);
      *(_DWORD *)(a1 + 1248) &= ~0x80u;
      sub_1800066B0(v4, v9);
    }
    *(_QWORD *)(v4 + 648) &= ~0x800000000000000uLL;
    sub_18000A110(v4);
    sub_180012DB4(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 2720LL), a1);
    SetEvent(*(HANDLE *)(*(_QWORD *)(a1 + 56) + 88LL));
    sub_1800093A0(v4, 0);
    v2 = sub_18002AA58(v4);
    v8 = (char *)v2;
    if ( v2 )
    {
      sub_18000A110(v4);
      sub_18000F390();
      sub_180017F60(v8);
      sub_18001E380();
LABEL_18:
      LODWORD(v2) = sub_1800093A0(v4, 0);
    }
  }
  return v2;
}
