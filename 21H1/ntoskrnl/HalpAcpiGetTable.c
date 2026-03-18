/*
 * XREFs of HalpAcpiGetTable @ 0x1402F8740
 * Callers:
 *     HalAcpiGetTableDispatch @ 0x1402F8720 (HalAcpiGetTableDispatch.c)
 *     HalpInterruptParseAcpiTables @ 0x1403A5530 (HalpInterruptParseAcpiTables.c)
 *     HalSocGetAcpiTable @ 0x1403A8AE4 (HalSocGetAcpiTable.c)
 *     HalMatchAcpiOemId @ 0x1403BC170 (HalMatchAcpiOemId.c)
 *     HalMatchAcpiFADTBootArch @ 0x1403C14A0 (HalMatchAcpiFADTBootArch.c)
 *     HalAcpiGetTable @ 0x1403C64F0 (HalAcpiGetTable.c)
 *     HalMatchAcpiOemTableId @ 0x1403CA850 (HalMatchAcpiOemTableId.c)
 *     HalAcpiGetTableEx @ 0x1404B3310 (HalAcpiGetTableEx.c)
 *     HalMatchAcpiCreatorRevision @ 0x1404B3330 (HalMatchAcpiCreatorRevision.c)
 *     HalMatchAcpiOemRevision @ 0x1404B33B0 (HalMatchAcpiOemRevision.c)
 *     HalMatchAcpiRevision @ 0x1404B3430 (HalMatchAcpiRevision.c)
 *     HalpExtGetAcpiTable @ 0x1404BEC90 (HalpExtGetAcpiTable.c)
 *     HalpIommuHsaDiscover @ 0x140A36C94 (HalpIommuHsaDiscover.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A51260 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpGetAcpiBiosVersion @ 0x140A521F8 (CmpGetAcpiBiosVersion.c)
 *     HalpSetupAcpiPhase0 @ 0x140A5C300 (HalpSetupAcpiPhase0.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140A5C4C0 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140A5C574 (HalpInitializeConfigurationFromMadt.c)
 *     HalpInitBootTable @ 0x140A5D3D0 (HalpInitBootTable.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140A5D41C (HalpAcpiDetectMachineSpecificActions.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A65594 (HalpPowerInitFwPerformanceTableMappings.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140A6652C (KsepMatchInitAcpiOemInfo.c)
 *     HalpPciInitializeMmConfigAccess @ 0x140A68C8C (HalpPciInitializeMmConfigAccess.c)
 *     HalpDpInitDiscard @ 0x140A696E8 (HalpDpInitDiscard.c)
 *     HalpExtInitExtensions @ 0x140A6B34C (HalpExtInitExtensions.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     HalpAcpiGetTableWork @ 0x1402F87C0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiTableCacheInit @ 0x140A5CC70 (HalpAcpiTableCacheInit.c)
 */

__int64 __fastcall HalpAcpiGetTable(__int64 a1, int a2, int a3, int a4)
{
  __int64 TableWork; // rdi

  if ( a1 )
  {
    if ( (int)HalpAcpiTableCacheInit() < 0 )
      return 0LL;
  }
  else
  {
    ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  }
  TableWork = HalpAcpiGetTableWork(a1, a2, a3, a4);
  if ( !a1 )
    KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return TableWork;
}
