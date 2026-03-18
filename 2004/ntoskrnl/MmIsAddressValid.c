/*
 * XREFs of MmIsAddressValid @ 0x1405316A0
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403D91D8 (KiMarkBugCheckRegions.c)
 *     sub_1403E8424 @ 0x1403E8424 (sub_1403E8424.c)
 *     KeBugCheck2 @ 0x140511660 (KeBugCheck2.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140894D0C (IopLiveDumpDiscardVirtualAddressRange.c)
 *     PopMarkComponentsBootPhase @ 0x140995EE0 (PopMarkComponentsBootPhase.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1409A8750 (IopLiveDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402594E0 (MmIsAddressValidEx.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MmIsAddressValidEx((__int64)VirtualAddress);
}
