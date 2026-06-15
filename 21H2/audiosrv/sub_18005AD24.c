/*
 * XREFs of sub_18005AD24 @ 0x18005AD24
 * Callers:
 *     sub_1800585BC @ 0x1800585BC (sub_1800585BC.c)
 * Callees:
 *     sub_18005B060 @ 0x18005B060 (sub_18005B060.c)
 *     sub_18005B0B0 @ 0x18005B0B0 (sub_18005B0B0.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006A1BC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180118968 @ 0x180118968 (sub_180118968.c)
 *     sub_180118A38 @ 0x180118A38 (sub_180118A38.c)
 */

// Hidden C++ exception states: #wind=42
__int64 __fastcall sub_18005AD24(__int64 a1)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE v12[24]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v13[24]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v14[24]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v15[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v16[24]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v17[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v18[24]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v19[24]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v20[80]; // [rsp+F0h] [rbp-10h] BYREF

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180147A78;
  if ( qword_18019E418 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
  *(_QWORD *)a1 = &off_180147A38;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 64) = 4LL;
  *(_QWORD *)(a1 + 72) = a1 + 48;
  if ( a1 == -48 )
  {
    v3 = sub_180118A38(v12, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 585");
    sub_180118968(v3);
  }
  *(_QWORD *)(a1 + 80) = 0LL;
  `eh vector constructor iterator'((void *)(a1 + 88), 0x10uLL, 4uLL, unknown_libname_3, (void (*)(void *))sub_180046F90);
  *(_QWORD *)(a1 + 152) = 4LL;
  *(_QWORD *)(a1 + 160) = a1 + 88;
  if ( a1 == -88 )
  {
    v4 = sub_180118A38(v13, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 585");
    sub_180118968(v4);
  }
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  sub_18005B060(a1 + 264, 0LL);
  sub_18005B060(a1 + 360, 1LL);
  sub_18005B060(a1 + 456, 2LL);
  sub_18005B060(a1 + 552, 3LL);
  sub_18005B060(a1 + 648, 0LL);
  sub_18005B060(a1 + 744, 1LL);
  sub_18005B060(a1 + 840, 2LL);
  sub_18005B060(a1 + 936, 3LL);
  sub_18005B060(a1 + 1032, 0LL);
  sub_18005B060(a1 + 1128, 1LL);
  sub_18005B060(a1 + 1224, 2LL);
  sub_18005B060(a1 + 1320, 3LL);
  `eh vector constructor iterator'((void *)(a1 + 1432), 0x18uLL, 4uLL, sub_180068600, sub_180118D70);
  `eh vector constructor iterator'(
    (void *)(a1 + 1528),
    0x10uLL,
    4uLL,
    unknown_libname_3,
    (void (*)(void *))sub_180046F90);
  `eh vector constructor iterator'(
    (void *)(a1 + 1592),
    0x10uLL,
    4uLL,
    unknown_libname_3,
    (void (*)(void *))sub_180046F90);
  *(_QWORD *)(a1 + 1656) = 4LL;
  *(_QWORD *)(a1 + 1664) = a1 + 264;
  if ( a1 == -264 )
  {
    v5 = sub_180118A38(v14, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 585");
    sub_180118968(v5);
  }
  *(_QWORD *)(a1 + 1672) = 4LL;
  *(_QWORD *)(a1 + 1680) = a1 + 648;
  if ( a1 == -648 )
  {
    v6 = sub_180118A38(v15, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 585");
    sub_180118968(v6);
  }
  *(_QWORD *)(a1 + 1688) = 4LL;
  *(_QWORD *)(a1 + 1696) = a1 + 1032;
  if ( a1 == -1032 )
  {
    v7 = sub_180118A38(v16, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 585");
    sub_180118968(v7);
  }
  *(_QWORD *)(a1 + 1704) = 4LL;
  *(_QWORD *)(a1 + 1712) = a1 + 1416;
  if ( a1 == -1416 )
  {
    v8 = sub_180118A38(v17, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 585");
    sub_180118968(v8);
  }
  *(_QWORD *)(a1 + 1720) = 4LL;
  *(_QWORD *)(a1 + 1728) = a1 + 1432;
  if ( a1 == -1432 )
  {
    v9 = sub_180118A38(v18, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 585");
    sub_180118968(v9);
  }
  *(_QWORD *)(a1 + 1736) = 4LL;
  *(_QWORD *)(a1 + 1744) = a1 + 1528;
  if ( a1 == -1528 )
  {
    v10 = sub_180118A38(v19, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 585");
    sub_180118968(v10);
  }
  *(_QWORD *)(a1 + 1752) = 4LL;
  *(_QWORD *)(a1 + 1760) = a1 + 1592;
  if ( a1 == -1592 )
  {
    v11 = sub_180118A38(v20, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 585");
    sub_180118968(v11);
  }
  sub_18005B0B0(a1 + 1768);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 8688), 0, 0);
  *(_DWORD *)(a1 + 8728) = 100;
  *(_WORD *)(a1 + 8732) = 0;
  *(_BYTE *)(a1 + 8734) = 0;
  return a1;
}
