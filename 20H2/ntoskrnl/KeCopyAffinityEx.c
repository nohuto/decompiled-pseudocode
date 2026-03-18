/*
 * XREFs of KeCopyAffinityEx @ 0x1402BF8E0
 * Callers:
 *     KiForwardTick @ 0x14027D370 (KiForwardTick.c)
 *     HalpInterruptSendIpi @ 0x14027FB40 (HalpInterruptSendIpi.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140280500 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmParkSteerInterrupts @ 0x1402878E0 (PpmParkSteerInterrupts.c)
 *     KeIntSteerPeriodic @ 0x140287F00 (KeIntSteerPeriodic.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140288510 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KxFlushEntireTb @ 0x1402EA300 (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x1402EA4D0 (KxFlushNonGlobalTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1402EA60C (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendRequest @ 0x1402EA7B0 (KiIpiSendRequest.c)
 *     PpmParkReportMask @ 0x140314830 (PpmParkReportMask.c)
 *     KeSynchronizeAddressPolicy @ 0x140320DA4 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x14032E1A4 (KeSynchronizeSecurityDomain.c)
 *     KxFlushSingleTb @ 0x140353C18 (KxFlushSingleTb.c)
 *     KeQueryActiveProcessorAffinity @ 0x1403C1BE0 (KeQueryActiveProcessorAffinity.c)
 *     HalpNmiReboot @ 0x1404D12B8 (HalpNmiReboot.c)
 *     EmonAddProfileSource @ 0x1404D13F0 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1404DBAB0 (Amd64AddProfileSource.c)
 *     KeBugCheck2 @ 0x140514F90 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x14051BC10 (KeFreezeExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140520A08 (KeGetAffinitizedInterruptsInfo.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1405219D0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x140563A40 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x140565780 (PpmInstallNewIdleDomains.c)
 *     PpmRegisterPerfStates @ 0x1407B5080 (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x1408AECA0 (PnpReplacePartitionUnit.c)
 *     KeConfigureHeteroProcessors @ 0x1408BCE78 (KeConfigureHeteroProcessors.c)
 *     KeInitializeProfile @ 0x1408BE90C (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x1408BE998 (KeInitializeProfileCallback.c)
 *     PpmInstallCoordinatedIdleStates @ 0x1408E4500 (PpmInstallCoordinatedIdleStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x14093D0A0 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x14095CCDC (ExpProfileCreate.c)
 *     HalpReportResourceUsage @ 0x140A3C200 (HalpReportResourceUsage.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall KeCopyAffinityEx(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 result; // ax
  __int64 v4; // rcx

  *(_WORD *)a1 = *a2;
  *(_WORD *)(a1 + 2) = a2[1];
  result = 0;
  for ( *(_DWORD *)(a1 + 4) = 0; result < *a2; *(_QWORD *)(8 * v4 + a1 + 8) = *(_QWORD *)&a2[4 * v4 + 4] )
    v4 = result++;
  return result;
}
