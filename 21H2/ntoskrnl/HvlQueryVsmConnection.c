/*
 * XREFs of HvlQueryVsmConnection @ 0x140277468
 * Callers:
 *     VslpEnterIumSecureMode @ 0x140262C90 (VslpEnterIumSecureMode.c)
 *     VslGetNestedPageProtectionFlags @ 0x140277400 (VslGetNestedPageProtectionFlags.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1403CFAF8 (VslGetSecureSpeculationControlInformation.c)
 *     VslGetSecurePciEnabled @ 0x1403CFC30 (VslGetSecurePciEnabled.c)
 *     VslConfigureDynamicMemory @ 0x1404FC134 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x1404FC770 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslMakeProtectedPageWritable @ 0x1404FCED4 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404FD0B0 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1404FD25C (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x140538CB4 (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x14089017C (VslRelaxQuotas.c)
 *     KiSwInterruptPresent @ 0x140A423F0 (KiSwInterruptPresent.c)
 *     VslConnectSwInterrupt @ 0x140A5F044 (VslConnectSwInterrupt.c)
 *     VslpIumPhase0Initialize @ 0x140A8F5C8 (VslpIumPhase0Initialize.c)
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
