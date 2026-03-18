/*
 * XREFs of KiIsFbClearSupported @ 0x140418FE4
 * Callers:
 *     KeQuerySpeculationControlInformation @ 0x140961998 (KeQuerySpeculationControlInformation.c)
 *     KiDetectKvaLeakage @ 0x140A57460 (KiDetectKvaLeakage.c)
 * Callees:
 *     <none>
 */

_BOOL8 KiIsFbClearSupported()
{
  return (KeFeatureBits2 & 0x400000) != 0 || (KeFeatureBits2 & 0x29) == 9;
}
