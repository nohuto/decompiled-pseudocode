/*
 * XREFs of sub_1C005A314 @ 0x1C005A314
 * Callers:
 *     sub_1C0056360 @ 0x1C0056360 (sub_1C0056360.c)
 *     sub_1C005B7C4 @ 0x1C005B7C4 (sub_1C005B7C4.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 */

__int64 __fastcall sub_1C005A314(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax

  v2 = sub_1C0011220(a2);
  KeWaitForSingleObject(v2 + 642, Executive, 0, 0, 0LL);
  return 0LL;
}
