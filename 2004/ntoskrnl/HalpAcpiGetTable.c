/*
 * XREFs of HalpAcpiGetTable @ 0x140335770
 * Callers:
 *     HalAcpiGetTableDispatch @ 0x140335750 (HalAcpiGetTableDispatch.c)
 *     HalpInterruptParseAcpiTables @ 0x1403AC5F0 (HalpInterruptParseAcpiTables.c)
 *     HalSocGetAcpiTable @ 0x1403AFBA4 (HalSocGetAcpiTable.c)
 *     HalMatchAcpiOemId @ 0x1403BD490 (HalMatchAcpiOemId.c)
 *     HalMatchAcpiFADTBootArch @ 0x1403C2360 (HalMatchAcpiFADTBootArch.c)
 *     HalAcpiGetTable @ 0x1403C7300 (HalAcpiGetTable.c)
 *     HalMatchAcpiOemTableId @ 0x1403CB630 (HalMatchAcpiOemTableId.c)
 *     HalAcpiGetTableEx @ 0x1404B39F0 (HalAcpiGetTableEx.c)
 *     HalMatchAcpiCreatorRevision @ 0x1404B3A10 (HalMatchAcpiCreatorRevision.c)
 *     HalMatchAcpiOemRevision @ 0x1404B3A90 (HalMatchAcpiOemRevision.c)
 *     HalMatchAcpiRevision @ 0x1404B3B10 (HalMatchAcpiRevision.c)
 *     HalpExtGetAcpiTable @ 0x1404BF370 (HalpExtGetAcpiTable.c)
 *     HalpIommuHsaDiscover @ 0x140A40024 (HalpIommuHsaDiscover.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A56F60 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpGetAcpiBiosVersion @ 0x140A57EF8 (CmpGetAcpiBiosVersion.c)
 *     HalpSetupAcpiPhase0 @ 0x140A5B3A0 (HalpSetupAcpiPhase0.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140A5B560 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140A5B614 (HalpInitializeConfigurationFromMadt.c)
 *     HalpInitBootTable @ 0x140A5C470 (HalpInitBootTable.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140A5C4BC (HalpAcpiDetectMachineSpecificActions.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A64F74 (HalpPowerInitFwPerformanceTableMappings.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140A65F0C (KsepMatchInitAcpiOemInfo.c)
 *     HalpPciInitializeMmConfigAccess @ 0x140A6910C (HalpPciInitializeMmConfigAccess.c)
 *     HalpDpInitDiscard @ 0x140A69B68 (HalpDpInitDiscard.c)
 *     HalpExtInitExtensions @ 0x140A6B5AC (HalpExtInitExtensions.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     HalpAcpiGetTableWork @ 0x1403357F0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiTableCacheInit @ 0x140A5BD10 (HalpAcpiTableCacheInit.c)
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
