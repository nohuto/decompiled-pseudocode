/*
 * XREFs of HvlQueryVsmConnection @ 0x1402E6B08
 * Callers:
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     VslGetNestedPageProtectionFlags @ 0x1402E6AA0 (VslGetNestedPageProtectionFlags.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1403CC4EC (VslGetSecureSpeculationControlInformation.c)
 *     VslGetSecurePciEnabled @ 0x1403CC620 (VslGetSecurePciEnabled.c)
 *     VslConfigureDynamicMemory @ 0x1404F6D04 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x1404F7340 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslMakeProtectedPageWritable @ 0x1404F7AA4 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404F7C80 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1404F7E2C (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x1405337E4 (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x14088D05C (VslRelaxQuotas.c)
 *     KiSwInterruptPresent @ 0x140A441F4 (KiSwInterruptPresent.c)
 *     VslConnectSwInterrupt @ 0x140A4F53C (VslConnectSwInterrupt.c)
 *     VslpIumPhase0Initialize @ 0x140A8CA68 (VslpIumPhase0Initialize.c)
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
