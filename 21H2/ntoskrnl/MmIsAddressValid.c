/*
 * XREFs of MmIsAddressValid @ 0x14038DE50
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403EBAC8 (KiMarkBugCheckRegions.c)
 *     sub_1403FABD0 @ 0x1403FABD0 (sub_1403FABD0.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14093C268 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     PopMarkComponentsBootPhase @ 0x140A4F19C (PopMarkComponentsBootPhase.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140A659E0 (IopLiveDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14028FBF0 (MmIsAddressValidEx.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MmIsAddressValidEx((__int64)VirtualAddress);
}
