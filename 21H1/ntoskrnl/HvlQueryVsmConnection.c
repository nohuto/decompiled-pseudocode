/*
 * XREFs of HvlQueryVsmConnection @ 0x14032BC48
 * Callers:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     VslGetNestedPageProtectionFlags @ 0x14032BBE0 (VslGetNestedPageProtectionFlags.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1403CB72C (VslGetSecureSpeculationControlInformation.c)
 *     VslGetSecurePciEnabled @ 0x1403CB830 (VslGetSecurePciEnabled.c)
 *     VslConfigureDynamicMemory @ 0x1404F66B4 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x1404F6CF0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslMakeProtectedPageWritable @ 0x1404F7454 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404F7630 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1404F77DC (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x140533194 (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x14088BD3C (VslRelaxQuotas.c)
 *     KiSwInterruptPresent @ 0x140A3E990 (KiSwInterruptPresent.c)
 *     VslConnectSwInterrupt @ 0x140A580D8 (VslConnectSwInterrupt.c)
 *     VslpIumPhase0Initialize @ 0x140A8D480 (VslpIumPhase0Initialize.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlQueryVsmConnection(_QWORD *a1)
{
  char result; // al

  result = HvlpVsmVtlCallVa;
  if ( *(_QWORD *)&HvlpVsmVtlCallVa )
  {
    if ( a1 )
      *a1 = *(_QWORD *)&HvlpVsmVtlCallVa;
    return 1;
  }
  return result;
}
