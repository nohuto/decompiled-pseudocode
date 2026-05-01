/*
 * XREFs of sub_180004CA8 @ 0x180004CA8
 * Callers:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_1800062C8 @ 0x1800062C8 (sub_1800062C8.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_180004CA8(__int64 a1)
{
  return (*(_BYTE *)(a1 + 544) & 8) == 0 && *(_QWORD *)(a1 + 512);
}
