/*
 * XREFs of KiCopyAffinityEx @ 0x140300030
 * Callers:
 *     KiSetAffinityThread @ 0x14020EC24 (KiSetAffinityThread.c)
 *     KeQueryAffinityProcess @ 0x1402395A0 (KeQueryAffinityProcess.c)
 *     KxFlushNonGlobalTb @ 0x14023F108 (KxFlushNonGlobalTb.c)
 *     PpmParkReportMask @ 0x14023F570 (PpmParkReportMask.c)
 *     KeSynchronizeAddressPolicy @ 0x14024AC78 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x140255E2C (KeSynchronizeSecurityDomain.c)
 *     KeCopyAffinityEx2 @ 0x140256360 (KeCopyAffinityEx2.c)
 *     KeQueryUserAffinityThread @ 0x14025C33C (KeQueryUserAffinityThread.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140263790 (KeQueryLogicalProcessorRelationship.c)
 *     KeStartThread @ 0x140292350 (KeStartThread.c)
 *     KiComputeThreadAffinity @ 0x140292884 (KiComputeThreadAffinity.c)
 *     KiComputeCpuSetAffinity @ 0x140292BA4 (KiComputeCpuSetAffinity.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KeFreezeExecution @ 0x1402DA0F0 (KeFreezeExecution.c)
 *     KxFlushSingleTb @ 0x1402EA7E4 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1402F374C (KeFlushProcessWriteBuffers.c)
 *     KeFlushMultipleRangeTb @ 0x1402F3C40 (KeFlushMultipleRangeTb.c)
 *     KxFlushEntireTb @ 0x1402F411C (KxFlushEntireTb.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1402FF090 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     PpmParkSteerInterrupts @ 0x1402FF620 (PpmParkSteerInterrupts.c)
 *     KiIpiSendRequest @ 0x1402FFB70 (KiIpiSendRequest.c)
 *     KeIntSteerPeriodic @ 0x140300190 (KeIntSteerPeriodic.c)
 *     KiUpdateProcessConcurrencyCount @ 0x140302650 (KiUpdateProcessConcurrencyCount.c)
 *     KiForwardTick @ 0x140303740 (KiForwardTick.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140304A20 (PpmCheckSnapAllDeliveredPerformance.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     KiSetSystemAffinityThread @ 0x14035C1C0 (KiSetSystemAffinityThread.c)
 *     KiInitializePrcbThread @ 0x1403C1454 (KiInitializePrcbThread.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403CF26C (PpmHeteroUpdateHgsConfiguration.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x1403CF350 (KeQueryActiveProcessorAffinity2.c)
 *     KeSetAffinityProcess @ 0x1403DAC1C (KeSetAffinityProcess.c)
 *     HalpNmiReboot @ 0x14051FA44 (HalpNmiReboot.c)
 *     EmonAddProfileSource @ 0x14051FB70 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x14052AF40 (Amd64AddProfileSource.c)
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14056B410 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeCopyAffinityEx @ 0x14056C150 (KeCopyAffinityEx.c)
 *     KeQueryActiveProcessorAffinity @ 0x14056D780 (KeQueryActiveProcessorAffinity.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140577F60 (KeGetAffinitizedInterruptsInfo.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x140578BB4 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057A2A0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PoInitiateProcessorWake @ 0x1405C6DD0 (PoInitiateProcessorWake.c)
 *     PpmInstallNewIdleDomains @ 0x1405C87C0 (PpmInstallNewIdleDomains.c)
 *     PspSetEffectiveJobLimits @ 0x1406CC024 (PspSetEffectiveJobLimits.c)
 *     KeInitializeProcess @ 0x14070A268 (KeInitializeProcess.c)
 *     PpmRegisterPerfStates @ 0x140848C18 (PpmRegisterPerfStates.c)
 *     PnpReplacePartitionUnit @ 0x140950E30 (PnpReplacePartitionUnit.c)
 *     KeConfigureHeteroProcessors @ 0x14095FD08 (KeConfigureHeteroProcessors.c)
 *     KeInitializeProfile @ 0x140962018 (KeInitializeProfile.c)
 *     KeInitializeProfileCallback @ 0x1409620D4 (KeInitializeProfileCallback.c)
 *     PpmInstallCoordinatedIdleStates @ 0x14098A510 (PpmInstallCoordinatedIdleStates.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1409E1514 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpProfileCreate @ 0x140A062C8 (ExpProfileCreate.c)
 *     HalpReportResourceUsage @ 0x140AF77F8 (HalpReportResourceUsage.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall KiCopyAffinityEx(__int64 a1, unsigned __int16 a2, unsigned __int16 *a3)
{
  unsigned __int16 v5; // cx
  unsigned __int16 result; // ax
  _QWORD *v7; // rdx
  __int64 v8; // r8
  char *v9; // r10
  __int64 v10; // rcx

  v5 = *a3;
  if ( *a3 > a2 )
    v5 = a2;
  *(_WORD *)a1 = v5;
  *(_WORD *)(a1 + 2) = a2;
  result = 0;
  *(_DWORD *)(a1 + 4) = 0;
  if ( v5 )
  {
    v7 = (_QWORD *)(a1 + 8);
    v8 = v5;
    v9 = (char *)a3 - a1;
    result = v5;
    do
    {
      *v7 = *(_QWORD *)((char *)v7 + (_QWORD)v9);
      ++v7;
      --v8;
    }
    while ( v8 );
    a2 = *(_WORD *)(a1 + 2);
  }
  if ( result < a2 )
  {
    do
    {
      v10 = result++;
      *(_QWORD *)(a1 + 8 * v10 + 8) = 0LL;
    }
    while ( result < *(_WORD *)(a1 + 2) );
  }
  return result;
}
