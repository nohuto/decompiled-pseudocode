/*
 * XREFs of HalpAcpiGetTable @ 0x140216340
 * Callers:
 *     HalAcpiGetTableDispatch @ 0x140216320 (HalAcpiGetTableDispatch.c)
 *     HalpInterruptParseAcpiTables @ 0x1403A9920 (HalpInterruptParseAcpiTables.c)
 *     HalSocGetAcpiTable @ 0x1403ACED4 (HalSocGetAcpiTable.c)
 *     HalMatchAcpiOemId @ 0x1403C0590 (HalMatchAcpiOemId.c)
 *     HalMatchAcpiFADTBootArch @ 0x1403C5660 (HalMatchAcpiFADTBootArch.c)
 *     HalAcpiGetTable @ 0x1403CAA80 (HalAcpiGetTable.c)
 *     HalMatchAcpiOemTableId @ 0x1403CED30 (HalMatchAcpiOemTableId.c)
 *     HalAcpiGetTableEx @ 0x1404B8B10 (HalAcpiGetTableEx.c)
 *     HalMatchAcpiCreatorRevision @ 0x1404B8B30 (HalMatchAcpiCreatorRevision.c)
 *     HalMatchAcpiOemRevision @ 0x1404B8BB0 (HalMatchAcpiOemRevision.c)
 *     HalMatchAcpiRevision @ 0x1404B8C30 (HalMatchAcpiRevision.c)
 *     HalpExtGetAcpiTable @ 0x1404C44A0 (HalpExtGetAcpiTable.c)
 *     HalpIommuHsaDiscover @ 0x140A3AD14 (HalpIommuHsaDiscover.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A59C04 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpGetAcpiBiosVersion @ 0x140A5AB9C (CmpGetAcpiBiosVersion.c)
 *     HalpSetupAcpiPhase0 @ 0x140A64D20 (HalpSetupAcpiPhase0.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140A64EE0 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140A64F94 (HalpInitializeConfigurationFromMadt.c)
 *     HalpInitBootTable @ 0x140A65DF0 (HalpInitBootTable.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140A65E3C (HalpAcpiDetectMachineSpecificActions.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A6A67C (HalpPowerInitFwPerformanceTableMappings.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140A6B61C (KsepMatchInitAcpiOemInfo.c)
 *     HalpPciInitializeMmConfigAccess @ 0x140A6D8BC (HalpPciInitializeMmConfigAccess.c)
 *     HalpDpInitDiscard @ 0x140A6E3F4 (HalpDpInitDiscard.c)
 *     HalpExtInitExtensions @ 0x140A6FE38 (HalpExtInitExtensions.c)
 * Callees:
 *     HalpAcpiGetTableWork @ 0x1402163C0 (HalpAcpiGetTableWork.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     HalpAcpiTableCacheInit @ 0x140A65690 (HalpAcpiTableCacheInit.c)
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
