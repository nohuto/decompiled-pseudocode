/*
 * XREFs of PopExecuteOnTargetProcessors @ 0x14027B7DC
 * Callers:
 *     PoGetIdleTimes @ 0x14027BD3C (PoGetIdleTimes.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1402C3774 (PoGetPerfStateAndParkingInfo.c)
 *     PpmParkRegisterParking @ 0x1403C1460 (PpmParkRegisterParking.c)
 *     PpmCheckResetProcessors @ 0x1403C2064 (PpmCheckResetProcessors.c)
 *     PpmHeteroHgsBackupInit @ 0x1403CDC04 (PpmHeteroHgsBackupInit.c)
 *     PpmUpdateIdleDomains @ 0x140567EA0 (PpmUpdateIdleDomains.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140568230 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405684A0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x140576C1C (PpmCapturePerformanceDistribution.c)
 *     PpmUpdateProcessorPolicy @ 0x14078C8D0 (PpmUpdateProcessorPolicy.c)
 *     PpmUpdateIdleStates @ 0x140796560 (PpmUpdateIdleStates.c)
 *     PpmIdleRegisterDefaultStates @ 0x140796658 (PpmIdleRegisterDefaultStates.c)
 *     EtwpKernelTraceRundown @ 0x14079743C (EtwpKernelTraceRundown.c)
 *     PpmCheckInitProcessors @ 0x1407B9B18 (PpmCheckInitProcessors.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x1407BA938 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmEventTraceControlCallback @ 0x1407D53F0 (PpmEventTraceControlCallback.c)
 *     PpmReapplyIdlePolicy @ 0x1408E28EC (PpmReapplyIdlePolicy.c)
 *     PpmWmiIdleAccountingWork @ 0x1408F1B70 (PpmWmiIdleAccountingWork.c)
 *     PpmPostProcessMediaBuffering @ 0x1408F5E28 (PpmPostProcessMediaBuffering.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopQueueTargetDpc @ 0x14027B910 (PopQueueTargetDpc.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall PopExecuteOnTargetProcessors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Object; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-41h] BYREF
  __int16 v12; // [rsp+60h] [rbp-31h]
  int v13; // [rsp+62h] [rbp-2Fh]
  __int16 v14; // [rsp+66h] [rbp-2Bh]
  __int64 v15; // [rsp+68h] [rbp-29h]
  __int64 v16; // [rsp+70h] [rbp-21h]
  __int64 v17; // [rsp+78h] [rbp-19h]
  __int64 *p_Object; // [rsp+80h] [rbp-11h]
  _QWORD *v19; // [rsp+88h] [rbp-9h]
  unsigned int v20; // [rsp+90h] [rbp-1h]
  int v21; // [rsp+94h] [rbp+3h]
  struct _KDPC Dpc; // [rsp+98h] [rbp+7h] BYREF

  v21 = 0;
  memset(&Dpc, 0, sizeof(Dpc));
  v13 = 0;
  v10[1] = v10;
  v14 = 0;
  v10[0] = v10;
  v11[1] = *(_QWORD *)(a1 + 8);
  v19 = v11;
  p_Object = &Object;
  Object = 393217LL;
  v12 = 0;
  v11[0] = a1;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  v20 = 0;
  PopQueueTargetDpc(&Dpc);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  return v20;
}
