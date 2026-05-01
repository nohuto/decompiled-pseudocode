/*
 * XREFs of sub_18006EA3C @ 0x18006EA3C
 * Callers:
 *     sub_180032644 @ 0x180032644 (sub_180032644.c)
 *     sub_18006E928 @ 0x18006E928 (sub_18006E928.c)
 *     sub_18006EA58 @ 0x18006EA58 (sub_18006EA58.c)
 *     sub_18006F39C @ 0x18006F39C (sub_18006F39C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18006EA3C(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 144);
  return (v1 & 1) == 0 || (v1 & 4) != 0;
}
