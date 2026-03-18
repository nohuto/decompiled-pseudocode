/*
 * XREFs of HalpAcpiGetTable @ 0x14025EF70
 * Callers:
 *     HalAcpiGetTableDispatch @ 0x14025EF50 (HalAcpiGetTableDispatch.c)
 *     HalpInterruptParseAcpiTables @ 0x1403AEBE0 (HalpInterruptParseAcpiTables.c)
 *     HalSocGetAcpiTable @ 0x1403B2194 (HalSocGetAcpiTable.c)
 *     HalMatchAcpiOemId @ 0x1403BF910 (HalMatchAcpiOemId.c)
 *     HalMatchAcpiFADTBootArch @ 0x1403C4AD0 (HalMatchAcpiFADTBootArch.c)
 *     HalAcpiGetTable @ 0x1403C9F40 (HalAcpiGetTable.c)
 *     HalMatchAcpiOemTableId @ 0x1403CE250 (HalMatchAcpiOemTableId.c)
 *     HalAcpiGetTableEx @ 0x1404B6F10 (HalAcpiGetTableEx.c)
 *     HalMatchAcpiCreatorRevision @ 0x1404B6F30 (HalMatchAcpiCreatorRevision.c)
 *     HalMatchAcpiOemRevision @ 0x1404B6FB0 (HalMatchAcpiOemRevision.c)
 *     HalMatchAcpiRevision @ 0x1404B7030 (HalMatchAcpiRevision.c)
 *     HalpExtGetAcpiTable @ 0x1404C2890 (HalpExtGetAcpiTable.c)
 *     HalpIommuHsaDiscover @ 0x140A462C4 (HalpIommuHsaDiscover.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A575E0 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpGetAcpiBiosVersion @ 0x140A58578 (CmpGetAcpiBiosVersion.c)
 *     HalpSetupAcpiPhase0 @ 0x140A62700 (HalpSetupAcpiPhase0.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140A628C0 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140A62974 (HalpInitializeConfigurationFromMadt.c)
 *     HalpInitBootTable @ 0x140A637D0 (HalpInitBootTable.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140A6381C (HalpAcpiDetectMachineSpecificActions.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A6C244 (HalpPowerInitFwPerformanceTableMappings.c)
 *     KsepMatchInitAcpiOemInfo @ 0x140A6D1DC (KsepMatchInitAcpiOemInfo.c)
 *     HalpPciInitializeMmConfigAccess @ 0x140A6F93C (HalpPciInitializeMmConfigAccess.c)
 *     HalpDpInitDiscard @ 0x140A70474 (HalpDpInitDiscard.c)
 *     HalpExtInitExtensions @ 0x140A71EB8 (HalpExtInitExtensions.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     HalpAcpiGetTableWork @ 0x14025EFF0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiTableCacheInit @ 0x140A63070 (HalpAcpiTableCacheInit.c)
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
