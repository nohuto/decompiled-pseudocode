/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x14051CD54
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x1408B9770 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
