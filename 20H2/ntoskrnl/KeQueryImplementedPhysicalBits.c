/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x140520724
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x1408BF4D0 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
