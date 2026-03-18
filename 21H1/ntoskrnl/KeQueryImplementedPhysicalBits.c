/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x14051C704
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x1408B8450 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
