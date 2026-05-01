/*
 * XREFs of sub_180037470 @ 0x180037470
 * Callers:
 *     sub_18000DA20 @ 0x18000DA20 (sub_18000DA20.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_180037470(char a1)
{
  return (a1 & 0x40) != 0 || (a1 & 0xEu) >= 8;
}
