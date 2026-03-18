/*
 * XREFs of HvlQueryVsmConnection @ 0x140294D28
 * Callers:
 *     VslGetNestedPageProtectionFlags @ 0x140294CC0 (VslGetNestedPageProtectionFlags.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1403DF020 (VslGetSecureSpeculationControlInformation.c)
 *     VslGetSecurePciEnabled @ 0x1403DF160 (VslGetSecurePciEnabled.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x1404176A0 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslConfigureDynamicMemory @ 0x14054DDD0 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14054E3F0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslMakeProtectedPageWritable @ 0x14054EC88 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14054EE64 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x14054F010 (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x140593778 (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x140932A4C (VslRelaxQuotas.c)
 *     VslConnectSwInterrupt @ 0x140B12930 (VslConnectSwInterrupt.c)
 *     VslRegisterBootDrivers @ 0x140B129C4 (VslRegisterBootDrivers.c)
 *     KiSwInterruptPresent @ 0x140B1D468 (KiSwInterruptPresent.c)
 *     VslpIumPhase0Initialize @ 0x140B4EC40 (VslpIumPhase0Initialize.c)
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
