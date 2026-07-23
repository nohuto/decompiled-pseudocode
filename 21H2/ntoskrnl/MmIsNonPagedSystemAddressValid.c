/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x140536DD0
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C7B0C (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoInitializeWorkItem @ 0x1409CA680 (VerifierIoInitializeWorkItem.c)
 *     VfPnpVerifyNewRequest @ 0x1409E3F60 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1409E4040 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  int SystemRegionType; // eax

  SystemRegionType = MiGetSystemRegionType((unsigned __int64)VirtualAddress);
  return SystemRegionType != 6 && SystemRegionType != 1;
}
