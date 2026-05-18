/*
 * XREFs of sub_180061438 @ 0x180061438
 * Callers:
 *     sub_180064F68 @ 0x180064F68 (sub_180064F68.c)
 *     sub_180069938 @ 0x180069938 (sub_180069938.c)
 *     sub_1800716F8 @ 0x1800716F8 (sub_1800716F8.c)
 *     sub_1800857E8 @ 0x1800857E8 (sub_1800857E8.c)
 *     sub_180085900 @ 0x180085900 (sub_180085900.c)
 * Callees:
 *     sub_1801168B8 @ 0x1801168B8 (sub_1801168B8.c)
 */

__int64 __fastcall sub_180061438(__int64 a1, unsigned int a2)
{
  sub_1801168B8();
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return a1;
}
