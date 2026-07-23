/*
 * XREFs of KeCopyAffinityEx @ 0x1403461A0
 * Callers:
 *     KxFlushNonGlobalTb @ 0x140230244 (KxFlushNonGlobalTb.c)
 *     PpmParkReportMask @ 0x140235E70 (PpmParkReportMask.c)
 *     KeSynchronizeSecurityDomain @ 0x14023A8C4 (KeSynchronizeSecurityDomain.c)
 *     KeSynchronizeAddressPolicy @ 0x14024091C (KeSynchronizeAddressPolicy.c)
 *     KxFlushSingleTb @ 0x140259AF8 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x140268CA4 (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendRequest @ 0x140268E70 (KiIpiSendRequest.c)
 *     HalpInterruptSendIpi @ 0x1402C4B10 (HalpInterruptSendIpi.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1402C54D0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KiForwardTick @ 0x1402CC8D0 (KiForwardTick.c)
 *     PpmParkSteerInterrupts @ 0x1402CD760 (PpmParkSteerInterrupts.c)
 *     KeIntSteerPeriodic @ 0x1402CDD80 (KeIntSteerPeriodic.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1402CEA40 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KxFlushEntireTb @ 0x1402D41D0 (KxFlushEntireTb.c)
 *     KeQueryActiveProcessorAffinity @ 0x1403C2860 (KeQueryActiveProcessorAffinity.c)
 *     HalpNmiReboot @ 0x1404D2EC8 (HalpNmiReboot.c)
 *     EmonAddProfileSource @ 0x1404D3000 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1404DD700 (Amd64AddProfileSource.c)
 *     KeBugCheck2 @ 0x140516D10 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x14051D930 (KeFreezeExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140522728 (KeGetAffinitizedInterruptsInfo.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1405236F0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x140565750 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x140567490 (PpmInstallNewIdleDomains.c)
 *     PpmRegisterPerfStates @ 0x1407BA470 (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x1408AC3D0 (PnpReplacePartitionUnit.c)
 *     KeConfigureHeteroProcessors @ 0x1408BA4B8 (KeConfigureHeteroProcessors.c)
 *     KeInitializeProfile @ 0x1408BC218 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x1408BC2A4 (KeInitializeProfileCallback.c)
 *     PpmInstallCoordinatedIdleStates @ 0x1408E1E60 (PpmInstallCoordinatedIdleStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x14093AA40 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x14095A72C (ExpProfileCreate.c)
 *     HalpReportResourceUsage @ 0x140A3AD8C (HalpReportResourceUsage.c)
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
