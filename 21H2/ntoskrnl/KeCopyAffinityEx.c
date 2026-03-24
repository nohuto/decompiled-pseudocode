/*
 * XREFs of KeCopyAffinityEx @ 0x14033B450
 * Callers:
 *     HalpInterruptSendIpi @ 0x140220210 (HalpInterruptSendIpi.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140220BD0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KiForwardTick @ 0x140227FD0 (KiForwardTick.c)
 *     PpmParkSteerInterrupts @ 0x140228E60 (PpmParkSteerInterrupts.c)
 *     KeIntSteerPeriodic @ 0x140229480 (KeIntSteerPeriodic.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x14022A190 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KxFlushEntireTb @ 0x14022F980 (KxFlushEntireTb.c)
 *     KxFlushSingleTb @ 0x14026BB58 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x14027AD04 (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendRequest @ 0x14027AED0 (KiIpiSendRequest.c)
 *     KxFlushNonGlobalTb @ 0x1402B2094 (KxFlushNonGlobalTb.c)
 *     PpmParkReportMask @ 0x1402B7C90 (PpmParkReportMask.c)
 *     KeSynchronizeSecurityDomain @ 0x1402BC338 (KeSynchronizeSecurityDomain.c)
 *     KeSynchronizeAddressPolicy @ 0x1402C247C (KeSynchronizeAddressPolicy.c)
 *     KeQueryActiveProcessorAffinity @ 0x1403C2430 (KeQueryActiveProcessorAffinity.c)
 *     HalpNmiReboot @ 0x1404D2C88 (HalpNmiReboot.c)
 *     EmonAddProfileSource @ 0x1404D2DC0 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1404DD4C0 (Amd64AddProfileSource.c)
 *     KeBugCheck2 @ 0x140516AD0 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x14051D6F0 (KeFreezeExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1405224E8 (KeGetAffinitizedInterruptsInfo.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1405234B0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x140565510 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x140567250 (PpmInstallNewIdleDomains.c)
 *     PpmRegisterPerfStates @ 0x1407B9CE0 (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x1408AC270 (PnpReplacePartitionUnit.c)
 *     KeConfigureHeteroProcessors @ 0x1408BA358 (KeConfigureHeteroProcessors.c)
 *     KeInitializeProfile @ 0x1408BC0B8 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x1408BC144 (KeInitializeProfileCallback.c)
 *     PpmInstallCoordinatedIdleStates @ 0x1408E1D00 (PpmInstallCoordinatedIdleStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x14093A870 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x14095A55C (ExpProfileCreate.c)
 *     HalpReportResourceUsage @ 0x140A39D8C (HalpReportResourceUsage.c)
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
