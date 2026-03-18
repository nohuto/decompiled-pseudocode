/*
 * XREFs of HvlIsHypercallOverlayLocked @ 0x140543458
 * Callers:
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     <none>
 */

bool HvlIsHypercallOverlayLocked()
{
  return (HvlEnlightenments & 0x100000) != 0;
}
