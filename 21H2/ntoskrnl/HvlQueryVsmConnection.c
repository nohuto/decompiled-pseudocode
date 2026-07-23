/*
 * XREFs of HvlQueryVsmConnection @ 0x140265408
 * Callers:
 *     VslGetNestedPageProtectionFlags @ 0x1402653A0 (VslGetNestedPageProtectionFlags.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1403CFC68 (VslGetSecureSpeculationControlInformation.c)
 *     VslGetSecurePciEnabled @ 0x1403CFDA0 (VslGetSecurePciEnabled.c)
 *     VslConfigureDynamicMemory @ 0x1404FC0B4 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x1404FC6F0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslMakeProtectedPageWritable @ 0x1404FCE54 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404FD030 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1404FD1DC (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x140538EF4 (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x1408902DC (VslRelaxQuotas.c)
 *     KiSwInterruptPresent @ 0x140A433F0 (KiSwInterruptPresent.c)
 *     VslConnectSwInterrupt @ 0x140A60044 (VslConnectSwInterrupt.c)
 *     VslpIumPhase0Initialize @ 0x140A905C8 (VslpIumPhase0Initialize.c)
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
