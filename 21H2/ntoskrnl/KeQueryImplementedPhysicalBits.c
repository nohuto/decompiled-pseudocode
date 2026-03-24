/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x140522204
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x1408BCC88 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
