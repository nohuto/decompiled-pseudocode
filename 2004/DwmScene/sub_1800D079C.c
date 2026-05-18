/*
 * XREFs of sub_1800D079C @ 0x1800D079C
 * Callers:
 *     sub_180076C30 @ 0x180076C30 (sub_180076C30.c)
 * Callees:
 *     sub_1800D06E8 @ 0x1800D06E8 (sub_1800D06E8.c)
 */

char __fastcall sub_1800D079C(__int64 a1, _QWORD *a2)
{
  char v2; // r8

  v2 = 0;
  if ( *(_BYTE *)(a1 + 184) )
    return sub_1800D06E8(a1, *(_QWORD *)(a1 + 192), (__int64)Buf2, a2);
  return v2;
}
