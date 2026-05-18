/*
 * XREFs of sub_18000DA98 @ 0x18000DA98
 * Callers:
 *     sub_18000DC6C @ 0x18000DC6C (sub_18000DC6C.c)
 * Callees:
 *     sub_18000CC0C @ 0x18000CC0C (sub_18000CC0C.c)
 *     sub_18000D868 @ 0x18000D868 (sub_18000D868.c)
 */

__int64 __fastcall sub_18000DA98(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  unsigned int v11; // ebx

  v11 = sub_18000CC0C(a1, a2, a3, a4, a5, a6);
  sub_18000D868(a1, a2, a3, a4, a5, a6, a7, v11, 0LL, 0);
  return v11;
}
