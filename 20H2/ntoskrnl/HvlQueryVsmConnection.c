/*
 * XREFs of HvlQueryVsmConnection @ 0x1402E7528
 * Callers:
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     VslGetNestedPageProtectionFlags @ 0x1402E74C0 (VslGetNestedPageProtectionFlags.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1403CF188 (VslGetSecureSpeculationControlInformation.c)
 *     VslGetSecurePciEnabled @ 0x1403CF2C0 (VslGetSecurePciEnabled.c)
 *     VslConfigureDynamicMemory @ 0x1404FA594 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x1404FABD0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslMakeProtectedPageWritable @ 0x1404FB334 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404FB510 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1404FB6BC (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x1405371B4 (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x140892BAC (VslRelaxQuotas.c)
 *     KiSwInterruptPresent @ 0x140A4A494 (KiSwInterruptPresent.c)
 *     VslConnectSwInterrupt @ 0x140A5E4D8 (VslConnectSwInterrupt.c)
 *     VslpIumPhase0Initialize @ 0x140A92768 (VslpIumPhase0Initialize.c)
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
