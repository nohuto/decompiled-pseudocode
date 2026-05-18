/*
 * XREFs of sub_1800F5040 @ 0x1800F5040
 * Callers:
 *     sub_1800921F0 @ 0x1800921F0 (sub_1800921F0.c)
 *     sub_18009AF60 @ 0x18009AF60 (sub_18009AF60.c)
 *     sub_1800A9CEC @ 0x1800A9CEC (sub_1800A9CEC.c)
 * Callees:
 *     sub_1800683A4 @ 0x1800683A4 (sub_1800683A4.c)
 *     sub_180069518 @ 0x180069518 (sub_180069518.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800F5040(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v6; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 128);
  if ( v4 )
  {
    v6 = a2;
    sub_180069518((__int64 *)(v4 + 112), &v6);
  }
  v6 = a2;
  return sub_1800683A4((__int64 *)(a1 + 88), &v6);
}
