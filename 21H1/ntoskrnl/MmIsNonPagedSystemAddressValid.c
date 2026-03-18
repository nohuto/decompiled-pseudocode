/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x140531070
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C3AEC (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoInitializeWorkItem @ 0x1409C6660 (VerifierIoInitializeWorkItem.c)
 *     VfPnpVerifyNewRequest @ 0x1409DFEF0 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1409DFFD0 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  int SystemRegionType; // eax

  SystemRegionType = MiGetSystemRegionType((unsigned __int64)VirtualAddress);
  return SystemRegionType != 6 && SystemRegionType != 1;
}
