/*
 * XREFs of sub_18000DB78 @ 0x18000DB78
 * Callers:
 *     sub_18000DD4C @ 0x18000DD4C (sub_18000DD4C.c)
 * Callees:
 *     sub_18000CCEC @ 0x18000CCEC (sub_18000CCEC.c)
 *     sub_18000D948 @ 0x18000D948 (sub_18000D948.c)
 */

__int64 __fastcall sub_18000DB78(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  unsigned int v11; // ebx

  v11 = sub_18000CCEC(a1, a2, a3, a4, a5, a6);
  sub_18000D948(a1, a2, a3, a4, a5, a6, a7, v11, 0LL, 0);
  return v11;
}
