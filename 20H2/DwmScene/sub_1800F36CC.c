/*
 * XREFs of sub_1800F36CC @ 0x1800F36CC
 * Callers:
 *     sub_180107BB0 @ 0x180107BB0 (sub_180107BB0.c)
 * Callees:
 *     sub_1800F2EE8 @ 0x1800F2EE8 (sub_1800F2EE8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F36CC(_QWORD *a1, __int64 a2)
{
  const void *v3[4]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v4[6]; // [rsp+48h] [rbp-30h] BYREF

  v3[3] = (const void *)15;
  v3[2] = 0LL;
  LOBYTE(v3[0]) = 0;
  v4[3] = 15LL;
  v4[2] = 0LL;
  LOBYTE(v4[0]) = 0;
  return sub_1800F2EE8(a1, v4, a2, v3);
}
