/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x140522444
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x1408BCDE8 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
