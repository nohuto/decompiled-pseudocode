/*
 * XREFs of KiIsFbClearSupported @ 0x1403F3738
 * Callers:
 *     KeQuerySpeculationControlInformation @ 0x1408BB948 (KeQuerySpeculationControlInformation.c)
 *     KiDetectKvaLeakage @ 0x14099D588 (KiDetectKvaLeakage.c)
 * Callees:
 *     <none>
 */

_BOOL8 KiIsFbClearSupported()
{
  return (KeFeatureBits2 & 0x400000) != 0 || (KeFeatureBits2 & 0x29) == 9;
}
