/*
 * XREFs of KiIsFbClearSupported @ 0x1403F1E88
 * Callers:
 *     KeQuerySpeculationControlInformation @ 0x1408BE468 (KeQuerySpeculationControlInformation.c)
 *     KiDetectKvaLeakage @ 0x14099F8D0 (KiDetectKvaLeakage.c)
 * Callees:
 *     <none>
 */

_BOOL8 KiIsFbClearSupported()
{
  return (KeFeatureBits2 & 0x400000) != 0 || (KeFeatureBits2 & 0x29) == 9;
}
