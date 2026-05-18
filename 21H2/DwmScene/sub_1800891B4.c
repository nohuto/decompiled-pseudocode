/*
 * XREFs of sub_1800891B4 @ 0x1800891B4
 * Callers:
 *     sub_180086244 @ 0x180086244 (sub_180086244.c)
 *     sub_180088B74 @ 0x180088B74 (sub_180088B74.c)
 *     sub_180088C78 @ 0x180088C78 (sub_180088C78.c)
 * Callees:
 *     sub_180019F78 @ 0x180019F78 (sub_180019F78.c)
 *     sub_180083CB4 @ 0x180083CB4 (sub_180083CB4.c)
 *     sub_180084F20 @ 0x180084F20 (sub_180084F20.c)
 *     sub_18008513C @ 0x18008513C (sub_18008513C.c)
 *     sub_1800851C4 @ 0x1800851C4 (sub_1800851C4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800891B4(__int64 a1)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rax
  __int64 result; // rax
  _BYTE v5[64]; // [rsp+20h] [rbp-158h] BYREF
  _BYTE v6[64]; // [rsp+60h] [rbp-118h] BYREF
  _OWORD v7[4]; // [rsp+A0h] [rbp-D8h] BYREF
  _OWORD v8[4]; // [rsp+E0h] [rbp-98h] BYREF
  _OWORD v9[4]; // [rsp+120h] [rbp-58h] BYREF

  sub_1800851C4((__int64)v9, (unsigned int *)(a1 + 144));
  sub_180084F20((__int64)v7, (__m128 *)(a1 + 156));
  sub_18008513C((__int64)v8, a1 + 172);
  v2 = (_OWORD *)sub_180019F78((__int64)v5, v8, v7);
  v3 = (_OWORD *)sub_180019F78((__int64)v6, v2, v9);
  sub_180083CB4((_OWORD *)(a1 + 224), v3);
  result = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 352) = result;
  return result;
}
