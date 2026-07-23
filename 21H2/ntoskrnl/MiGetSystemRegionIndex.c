/*
 * XREFs of MiGetSystemRegionIndex @ 0x140365990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetSystemRegionIndex(unsigned __int64 a1)
{
  return ((a1 >> 39) & 0x1FF) - 256;
}
