/*
 * XREFs of sub_1800C430C @ 0x1800C430C
 * Callers:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 *     sub_1800C8F54 @ 0x1800C8F54 (sub_1800C8F54.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 *     sub_1800BA358 @ 0x1800BA358 (sub_1800BA358.c)
 */

__int64 __fastcall sub_1800C430C(int a1, int a2, int a3, __int64 a4, int a5, __int64 a6, int a7)
{
  __int64 v8; // [rsp+20h] [rbp-1048h]
  __int64 v9; // [rsp+40h] [rbp-1028h]
  _WORD v10[2048]; // [rsp+50h] [rbp-1018h] BYREF

  v10[0] = 0;
  return sub_1800BA358(a1, a2, a3, a6, v8, a6, a7, (__int64)v10, v9, 0);
}
