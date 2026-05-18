/*
 * XREFs of sub_1800838E4 @ 0x1800838E4
 * Callers:
 *     sub_180080974 @ 0x180080974 (sub_180080974.c)
 *     sub_1800832A4 @ 0x1800832A4 (sub_1800832A4.c)
 *     sub_1800833A8 @ 0x1800833A8 (sub_1800833A8.c)
 * Callees:
 *     sub_1800194D4 @ 0x1800194D4 (sub_1800194D4.c)
 *     sub_18007E3E4 @ 0x18007E3E4 (sub_18007E3E4.c)
 *     sub_18007F650 @ 0x18007F650 (sub_18007F650.c)
 *     sub_18007F86C @ 0x18007F86C (sub_18007F86C.c)
 *     sub_18007F8F4 @ 0x18007F8F4 (sub_18007F8F4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800838E4(__int64 a1)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rax
  __int64 result; // rax
  _BYTE v5[64]; // [rsp+20h] [rbp-158h] BYREF
  _BYTE v6[64]; // [rsp+60h] [rbp-118h] BYREF
  _OWORD v7[4]; // [rsp+A0h] [rbp-D8h] BYREF
  _OWORD v8[4]; // [rsp+E0h] [rbp-98h] BYREF
  _OWORD v9[4]; // [rsp+120h] [rbp-58h] BYREF

  sub_18007F8F4((__int64)v9, (unsigned int *)(a1 + 144));
  sub_18007F650((__int64)v7, (__m128 *)(a1 + 156));
  sub_18007F86C((__int64)v8, a1 + 172);
  v2 = (_OWORD *)sub_1800194D4((__int64)v5, v8, v7);
  v3 = (_OWORD *)sub_1800194D4((__int64)v6, v2, v9);
  sub_18007E3E4((_OWORD *)(a1 + 224), v3);
  result = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 352) = result;
  return result;
}
