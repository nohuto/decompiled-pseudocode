/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x14045BA00
 * Callers:
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140AA3EB0 (VfMiscIoInitializeWorkItem_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140AA59E0 (ViMiscValidateSynchronizationObject.c)
 *     VfPnpVerifyNewRequest @ 0x140AA6600 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AA66E0 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  int SystemRegionType; // eax

  SystemRegionType = MiGetSystemRegionType((unsigned __int64)VirtualAddress);
  return SystemRegionType != 6 && SystemRegionType != 1;
}
