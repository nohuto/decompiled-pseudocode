/*
 * XREFs of sub_18000DD4C @ 0x18000DD4C
 * Callers:
 *     sub_18000D11C @ 0x18000D11C (sub_18000D11C.c)
 *     sub_18000EBA8 @ 0x18000EBA8 (sub_18000EBA8.c)
 * Callees:
 *     sub_18000DB78 @ 0x18000DB78 (sub_18000DB78.c)
 */

__int64 __fastcall sub_18000DD4C(__int64 a1, int a2, __int64 a3)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_18000DB78(a1, a2, a3, 0LL, 0LL, retaddr, 1);
}
