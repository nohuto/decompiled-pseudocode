/*
 * XREFs of sub_1800F8F9C @ 0x1800F8F9C
 * Callers:
 *     sub_18010D480 @ 0x18010D480 (sub_18010D480.c)
 * Callees:
 *     sub_1800F87B8 @ 0x1800F87B8 (sub_1800F87B8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F8F9C(_QWORD *a1, __int64 a2)
{
  const void *v3[4]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v4[6]; // [rsp+48h] [rbp-30h] BYREF

  v3[3] = (const void *)15;
  v3[2] = 0LL;
  LOBYTE(v3[0]) = 0;
  v4[3] = 15LL;
  v4[2] = 0LL;
  LOBYTE(v4[0]) = 0;
  return sub_1800F87B8(a1, v4, a2, v3);
}
