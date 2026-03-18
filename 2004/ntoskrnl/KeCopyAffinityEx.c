/*
 * XREFs of KeCopyAffinityEx @ 0x14021E8E0
 * Callers:
 *     HalpInterruptSendIpi @ 0x1402150D0 (HalpInterruptSendIpi.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140215A90 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KiForwardTick @ 0x14021CD70 (KiForwardTick.c)
 *     PpmParkSteerInterrupts @ 0x14021DC00 (PpmParkSteerInterrupts.c)
 *     KeIntSteerPeriodic @ 0x14021E220 (KeIntSteerPeriodic.c)
 *     KxFlushEntireTb @ 0x14021E6D0 (KxFlushEntireTb.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x14021ECC0 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeFlushProcessWriteBuffers @ 0x1402FCFDC (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendRequest @ 0x1402FD180 (KiIpiSendRequest.c)
 *     KeSynchronizeAddressPolicy @ 0x1402FDE9C (KeSynchronizeAddressPolicy.c)
 *     KxFlushSingleTb @ 0x14031CF8C (KxFlushSingleTb.c)
 *     KxFlushNonGlobalTb @ 0x1403406A4 (KxFlushNonGlobalTb.c)
 *     PpmParkReportMask @ 0x1403433E0 (PpmParkReportMask.c)
 *     KeSynchronizeSecurityDomain @ 0x140349FA8 (KeSynchronizeSecurityDomain.c)
 *     KeQueryActiveProcessorAffinity @ 0x1403C0430 (KeQueryActiveProcessorAffinity.c)
 *     HalpNmiReboot @ 0x1404CDD18 (HalpNmiReboot.c)
 *     EmonAddProfileSource @ 0x1404CDE50 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1404D8520 (Amd64AddProfileSource.c)
 *     KeBugCheck2 @ 0x140511660 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x140518240 (KeFreezeExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14051D038 (KeGetAffinitizedInterruptsInfo.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14051E000 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x140560060 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x140561DA0 (PpmInstallNewIdleDomains.c)
 *     PpmRegisterPerfStates @ 0x1407A7090 (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x1408A9170 (PnpReplacePartitionUnit.c)
 *     KeConfigureHeteroProcessors @ 0x1408B7258 (KeConfigureHeteroProcessors.c)
 *     KeInitializeProfile @ 0x1408B8BB0 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x1408B8C3C (KeInitializeProfileCallback.c)
 *     PpmInstallCoordinatedIdleStates @ 0x1408DE6C0 (PpmInstallCoordinatedIdleStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x140937270 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x140956F1C (ExpProfileCreate.c)
 *     HalpReportResourceUsage @ 0x140A36200 (HalpReportResourceUsage.c)
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
