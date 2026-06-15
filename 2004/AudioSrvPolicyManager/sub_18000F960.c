/*
 * XREFs of sub_18000F960 @ 0x18000F960
 * Callers:
 *     sub_18000FA80 @ 0x18000FA80 (sub_18000FA80.c)
 *     sub_18001A1BC @ 0x18001A1BC (sub_18001A1BC.c)
 * Callees:
 *     sub_180003780 @ 0x180003780 (sub_180003780.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18003ADA0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000F960(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  char v8; // dl
  __int64 v11; // rcx
  int v12; // ebx
  int v13; // eax
  int v14; // r10d
  char v15; // r9
  _BYTE v17[16]; // [rsp+50h] [rbp-1048h] BYREF
  _WORD v18[2048]; // [rsp+60h] [rbp-1038h] BYREF

  v8 = 0;
  v18[0] = 0;
  v17[0] = 0;
  v11 = -1LL;
  do
    ++v11;
  while ( v18[v11] );
  v12 = 0;
  if ( qword_18004FD50 )
  {
    v13 = qword_18004FD50(&v18[v11], 2048 - v11, v17);
    v8 = v17[0];
    v12 = v13;
  }
  v14 = 3;
  if ( v12 >= 0 )
    v12 = -2147024322;
  else
    v14 = a7;
  v15 = 1;
  if ( v8 )
    v15 = 5;
  sub_180003780(a1, a2, a3, 0LL, 0LL, a6, v14, v12, v18, v15);
  return (unsigned int)v12;
}
