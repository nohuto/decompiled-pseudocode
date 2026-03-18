/*
 * XREFs of KeCopyAffinityEx @ 0x140277930
 * Callers:
 *     HalpInterruptSendIpi @ 0x14026E120 (HalpInterruptSendIpi.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14026EAE0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KiForwardTick @ 0x140275DC0 (KiForwardTick.c)
 *     PpmParkSteerInterrupts @ 0x140276C50 (PpmParkSteerInterrupts.c)
 *     KeIntSteerPeriodic @ 0x140277270 (KeIntSteerPeriodic.c)
 *     KxFlushEntireTb @ 0x140277720 (KxFlushEntireTb.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140277D10 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeSynchronizeAddressPolicy @ 0x1402C13BC (KeSynchronizeAddressPolicy.c)
 *     KxFlushNonGlobalTb @ 0x1403038D4 (KxFlushNonGlobalTb.c)
 *     PpmParkReportMask @ 0x140305930 (PpmParkReportMask.c)
 *     KeSynchronizeSecurityDomain @ 0x14030CD8C (KeSynchronizeSecurityDomain.c)
 *     KxFlushSingleTb @ 0x14034C2CC (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x140358FBC (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendRequest @ 0x140359160 (KiIpiSendRequest.c)
 *     KeQueryActiveProcessorAffinity @ 0x1403BF4A0 (KeQueryActiveProcessorAffinity.c)
 *     HalpNmiReboot @ 0x1404CD868 (HalpNmiReboot.c)
 *     EmonAddProfileSource @ 0x1404CD9A0 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1404D8010 (Amd64AddProfileSource.c)
 *     KeBugCheck2 @ 0x140511010 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x140517BF0 (KeFreezeExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14051C9E8 (KeGetAffinitizedInterruptsInfo.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14051D9B0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x14055FA10 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x140561750 (PpmInstallNewIdleDomains.c)
 *     PpmRegisterPerfStates @ 0x1407A4940 (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x1408A7E50 (PnpReplacePartitionUnit.c)
 *     KeConfigureHeteroProcessors @ 0x1408B5F38 (KeConfigureHeteroProcessors.c)
 *     KeInitializeProfile @ 0x1408B7890 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x1408B791C (KeInitializeProfileCallback.c)
 *     PpmInstallCoordinatedIdleStates @ 0x1408DD460 (PpmInstallCoordinatedIdleStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x140935FD0 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x14095584C (ExpProfileCreate.c)
 *     HalpReportResourceUsage @ 0x140A36D0C (HalpReportResourceUsage.c)
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
