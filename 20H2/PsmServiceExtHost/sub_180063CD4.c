/*
 * XREFs of sub_180063CD4 @ 0x180063CD4
 * Callers:
 *     sub_180072B40 @ 0x180072B40 (sub_180072B40.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_180063CD4(__int16 a1, char a2)
{
  return ((a1 & 0x200) == 0 || (a2 & 8) != 0) && (a1 & 0x500) != 0x400;
}
