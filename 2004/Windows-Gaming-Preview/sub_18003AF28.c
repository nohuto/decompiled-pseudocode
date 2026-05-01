/*
 * XREFs of sub_18003AF28 @ 0x18003AF28
 * Callers:
 *     sub_1800392D8 @ 0x1800392D8 (sub_1800392D8.c)
 * Callees:
 *     sub_18003ADD8 @ 0x18003ADD8 (sub_18003ADD8.c)
 *     sub_18003B0B8 @ 0x18003B0B8 (sub_18003B0B8.c)
 */

char __fastcall sub_18003AF28(volatile signed __int64 *a1)
{
  __int64 v2; // rdx
  char v3; // bl
  __int64 v4; // r8
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  sub_18003ADD8(a1, (__int64)&v6);
  LOBYTE(v2) = 1;
  v3 = (v6 >> 9) & 0x3F;
  LOBYTE(v4) = v3;
  sub_18003B0B8(a1, v2, v4, 0LL);
  return v3;
}
