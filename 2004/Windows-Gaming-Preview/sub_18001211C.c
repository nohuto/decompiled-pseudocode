/*
 * XREFs of sub_18001211C @ 0x18001211C
 * Callers:
 *     sub_180012238 @ 0x180012238 (sub_180012238.c)
 * Callees:
 *     sub_180002F40 @ 0x180002F40 (sub_180002F40.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180045C20 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001211C(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  char v7; // dl
  __int64 v10; // rcx
  int v11; // ebx
  int v12; // eax
  char v13; // r9
  BOOL v14; // ecx
  int v15; // ecx
  _BYTE v17[16]; // [rsp+50h] [rbp-1048h] BYREF
  _WORD v18[2048]; // [rsp+60h] [rbp-1038h] BYREF

  v7 = 0;
  v18[0] = 0;
  v17[0] = 0;
  v10 = -1LL;
  do
    ++v10;
  while ( v18[v10] );
  v11 = 0;
  if ( qword_18005AC08 )
  {
    v12 = qword_18005AC08(&v18[v10], 2048 - v10, v17);
    v7 = v17[0];
    v11 = v12;
  }
  v13 = 1;
  v14 = v11 < 0;
  if ( v11 >= 0 )
    v11 = -2147024322;
  v15 = !v14;
  if ( v7 )
    v13 = 5;
  sub_180002F40(a1, a2, a3, 0LL, 0LL, a6, 2 * v15 + 1, v11, v18, v13);
  return (unsigned int)v11;
}
