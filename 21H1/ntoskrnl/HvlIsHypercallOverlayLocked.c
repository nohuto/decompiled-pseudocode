/*
 * XREFs of HvlIsHypercallOverlayLocked @ 0x1404EC0F8
 * Callers:
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     <none>
 */

bool HvlIsHypercallOverlayLocked()
{
  return (HvlEnlightenments & 0x100000) != 0;
}
