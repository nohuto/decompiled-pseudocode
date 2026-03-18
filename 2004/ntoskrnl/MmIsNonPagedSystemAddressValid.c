/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x1405316C0
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C3AFC (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoInitializeWorkItem @ 0x1409C6670 (VerifierIoInitializeWorkItem.c)
 *     VfPnpVerifyNewRequest @ 0x1409DFF50 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1409E0030 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  int SystemRegionType; // eax

  SystemRegionType = MiGetSystemRegionType((unsigned __int64)VirtualAddress);
  return SystemRegionType != 6 && SystemRegionType != 1;
}
