/*
 * XREFs of sub_1C0053CC8 @ 0x1C0053CC8
 * Callers:
 *     sub_1C0053F94 @ 0x1C0053F94 (sub_1C0053F94.c)
 *     sub_1C0056E30 @ 0x1C0056E30 (sub_1C0056E30.c)
 *     sub_1C0057020 @ 0x1C0057020 (sub_1C0057020.c)
 *     sub_1C0057490 @ 0x1C0057490 (sub_1C0057490.c)
 *     sub_1C00575A0 @ 0x1C00575A0 (sub_1C00575A0.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 */

_DWORD *__fastcall sub_1C0053CC8(__int64 a1, int a2, int a3)
{
  _DWORD *result; // rax
  __int64 v6; // r9

  result = sub_1C0011220(a1);
  v6 = ((unsigned __int8)result[3] + 1) & 7;
  result[3] = v6;
  v6 *= 32LL;
  *(_DWORD *)((char *)result + v6 + 528) = a3;
  *(_DWORD *)((char *)result + v6 + 532) = result[280];
  *(_DWORD *)((char *)result + v6 + 536) = a2;
  result[280] = a2;
  return result;
}
