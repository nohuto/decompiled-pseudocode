/*
 * XREFs of sub_1800F2CE4 @ 0x1800F2CE4
 * Callers:
 *     sub_1800F5438 @ 0x1800F5438 (sub_1800F5438.c)
 *     sub_1800F558C @ 0x1800F558C (sub_1800F558C.c)
 *     sub_1800F5A14 @ 0x1800F5A14 (sub_1800F5A14.c)
 *     sub_1800F5C80 @ 0x1800F5C80 (sub_1800F5C80.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800F2CE4(__int64 a1, unsigned __int16 a2)
{
  return *(_WORD *)(a1 + 2LL * a2 + 128) != 0xFFFF;
}
