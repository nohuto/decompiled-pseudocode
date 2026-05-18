/*
 * XREFs of sub_180092E28 @ 0x180092E28
 * Callers:
 *     sub_1800EFBC0 @ 0x1800EFBC0 (sub_1800EFBC0.c)
 * Callees:
 *     sub_180092224 @ 0x180092224 (sub_180092224.c)
 */

__int64 __fastcall sub_180092E28(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // ax

  v3 = sub_180092224(a1, a2);
  return sub_180092E48(a1, v3);
}
