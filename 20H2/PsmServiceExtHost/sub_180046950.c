/*
 * XREFs of sub_180046950 @ 0x180046950
 * Callers:
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 * Callees:
 *     sub_18000404C @ 0x18000404C (sub_18000404C.c)
 *     sub_180005700 @ 0x180005700 (sub_180005700.c)
 *     sub_1800066B0 @ 0x1800066B0 (sub_1800066B0.c)
 *     sub_1800067F0 @ 0x1800067F0 (sub_1800067F0.c)
 *     sub_180006880 @ 0x180006880 (sub_180006880.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180017EA0 @ 0x180017EA0 (sub_180017EA0.c)
 *     sub_18001A3C0 @ 0x18001A3C0 (sub_18001A3C0.c)
 *     sub_18002A0DC @ 0x18002A0DC (sub_18002A0DC.c)
 *     sub_18002AA04 @ 0x18002AA04 (sub_18002AA04.c)
 *     sub_18002AF54 @ 0x18002AF54 (sub_18002AF54.c)
 *     sub_18002C2F4 @ 0x18002C2F4 (sub_18002C2F4.c)
 *     sub_180036F1C @ 0x180036F1C (sub_180036F1C.c)
 *     sub_180037538 @ 0x180037538 (sub_180037538.c)
 *     sub_180037908 @ 0x180037908 (sub_180037908.c)
 *     sub_180037BC0 @ 0x180037BC0 (sub_180037BC0.c)
 *     sub_180037E84 @ 0x180037E84 (sub_180037E84.c)
 *     sub_1800623D4 @ 0x1800623D4 (sub_1800623D4.c)
 *     unknown_libname_3 @ 0x1800623E4 (unknown_libname_3.c)
 *     sub_180068534 @ 0x180068534 (sub_180068534.c)
 *     sub_180073420 @ 0x180073420 (sub_180073420.c)
 *     sub_18007342C @ 0x18007342C (sub_18007342C.c)
 *     sub_180073438 @ 0x180073438 (sub_180073438.c)
 */

__int64 __fastcall sub_180046950(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rax
  void **v4; // rax
  char v6; // [rsp+50h] [rbp-68h] BYREF
  char v7; // [rsp+51h] [rbp-67h] BYREF
  _WORD v8[7]; // [rsp+52h] [rbp-66h] BYREF
  int v9; // [rsp+60h] [rbp-58h]
  unsigned int v10; // [rsp+64h] [rbp-54h]
  int v11; // [rsp+68h] [rbp-50h]
  BOOL v12; // [rsp+6Ch] [rbp-4Ch]
  int v13; // [rsp+70h] [rbp-48h]
  int v14[2]; // [rsp+78h] [rbp-40h]
  __int64 v15; // [rsp+80h] [rbp-38h] BYREF
  __int64 v16; // [rsp+88h] [rbp-30h] BYREF
  __int64 v17; // [rsp+90h] [rbp-28h] BYREF
  __int64 v18; // [rsp+98h] [rbp-20h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-18h] BYREF
  _BYTE v20[16]; // [rsp+A8h] [rbp-10h] BYREF

  *(_QWORD *)&v8[3] = sub_180073438(a1);
  sub_180036F1C(*(__int64 *)&v8[3]);
  while ( 1 )
  {
    sub_18002A0DC(a1, a2, a3);
    if ( (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 648)) >> 5 == 5LL )
      break;
    if ( (unsigned int)sub_180037908(a1) )
    {
      sub_180037BC0(*(__int64 *)&v8[3]);
      sub_180037538(a1, *(_QWORD *)(a1 + 792), 0);
      sub_180036F1C(*(__int64 *)&v8[3]);
      v11 = 1;
      goto LABEL_12;
    }
    if ( (unsigned int)sub_18001A3C0(a1) )
    {
      sub_180017EA0(a1);
    }
    else
    {
      sub_18000F390();
      sub_180005700(a1, a1 + 680, 0LL);
      sub_180006880(a1);
      sub_180036F1C(*(__int64 *)&v8[3]);
    }
  }
  *(_DWORD *)(a1 + 668) = 0;
  v12 = sub_1800067F0(a1, 0);
  *(_DWORD *)(*(_QWORD *)&v8[3] + 1244LL) |= 0x80u;
  *(_DWORD *)(*(_QWORD *)&v8[3] + 1248LL) &= ~0x80u;
  sub_1800066B0(a1, v12);
  sub_180037BC0(*(__int64 *)&v8[3]);
  sub_18002C2F4(*(__int64 *)&v8[3]);
  sub_180037538(a1, *(_QWORD *)(a1 + 792), 0);
  v11 = 0;
  sub_180036F1C(*(__int64 *)&v8[3]);
  if ( sub_18000404C(a1) )
  {
    v10 = 5;
    v9 = 10;
  }
  else
  {
    v10 = 3;
    v9 = 8;
  }
  v13 = 1;
  sub_180037E84(a1, v10, 1 << v9);
LABEL_12:
  sub_18002AA04(a1);
  *(_QWORD *)v14 = &dword_1800B3218;
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470(*(__int64 *)v14, 0x400000000008LL) )
  {
    v15 = 0x1000000LL;
    v6 = v11;
    v7 = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 648)) >> 5;
    v16 = sub_180073420(a1);
    unknown_libname_3(&v17, &v15);
    unknown_libname_3(&v18, a3);
    sub_180068534(v8, &v6);
    sub_180068534((char *)v8 + 1, &v7);
    unknown_libname_3(&v19, &v16);
    v3 = sub_18007342C(a1);
    v4 = (void **)sub_1800623D4(v20, v3);
    sub_18002AF54(
      v14[0],
      (int)&unk_18009D81D,
      0,
      0,
      v4,
      (__int64)&v19,
      (__int64)v8 + 1,
      (__int64)v8,
      (__int64)&v18,
      (__int64)&v17);
  }
  return 0LL;
}
