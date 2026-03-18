/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x140535090
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C9B1C (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoInitializeWorkItem @ 0x1409CC690 (VerifierIoInitializeWorkItem.c)
 *     VfPnpVerifyNewRequest @ 0x1409E5F70 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1409E6050 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  int SystemRegionType; // eax

  SystemRegionType = MiGetSystemRegionType((unsigned __int64)VirtualAddress);
  return SystemRegionType != 6 && SystemRegionType != 1;
}
