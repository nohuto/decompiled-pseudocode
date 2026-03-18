/*
 * XREFs of sub_1C0036194 @ 0x1C0036194
 * Callers:
 *     sub_1C0011530 @ 0x1C0011530 (sub_1C0011530.c)
 *     sub_1C0017E8C @ 0x1C0017E8C (sub_1C0017E8C.c)
 *     sub_1C0036FAC @ 0x1C0036FAC (sub_1C0036FAC.c)
 *     sub_1C0039C2C @ 0x1C0039C2C (sub_1C0039C2C.c)
 *     sub_1C003A2BC @ 0x1C003A2BC (sub_1C003A2BC.c)
 *     sub_1C003A5DC @ 0x1C003A5DC (sub_1C003A5DC.c)
 *     sub_1C003AC9C @ 0x1C003AC9C (sub_1C003AC9C.c)
 *     sub_1C003AEF8 @ 0x1C003AEF8 (sub_1C003AEF8.c)
 *     sub_1C0053F94 @ 0x1C0053F94 (sub_1C0053F94.c)
 *     sub_1C0054958 @ 0x1C0054958 (sub_1C0054958.c)
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 */

_DWORD *__fastcall sub_1C0036194(__int64 a1, int a2, int a3)
{
  _DWORD *result; // rax
  __int64 v6; // r9

  result = sub_1C0011220(a1);
  v6 = ((unsigned __int8)result[1] + 1) & 7;
  result[1] = v6;
  v6 *= 32LL;
  *(_DWORD *)((char *)result + v6 + 16) = a3;
  *(_DWORD *)((char *)result + v6 + 20) = result[281];
  *(_DWORD *)((char *)result + v6 + 24) = a2;
  result[281] = a2;
  return result;
}
