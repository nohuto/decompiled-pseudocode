/*
 * XREFs of PopExecuteOnTargetProcessors @ 0x140204F30
 * Callers:
 *     PoGetIdleTimes @ 0x1402056D8 (PoGetIdleTimes.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140313E68 (PoGetPerfStateAndParkingInfo.c)
 *     PpmParkRegisterParking @ 0x1403BE600 (PpmParkRegisterParking.c)
 *     PpmCheckResetProcessors @ 0x1403BF204 (PpmCheckResetProcessors.c)
 *     PpmHeteroHgsBackupInit @ 0x1403C9804 (PpmHeteroHgsBackupInit.c)
 *     PpmUpdateIdleDomains @ 0x1405623A0 (PpmUpdateIdleDomains.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140562730 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405629A0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x14057118C (PpmCapturePerformanceDistribution.c)
 *     PpmUpdateProcessorPolicy @ 0x1407780E0 (PpmUpdateProcessorPolicy.c)
 *     PpmUpdateIdleStates @ 0x14077F2B0 (PpmUpdateIdleStates.c)
 *     PpmIdleRegisterDefaultStates @ 0x14077F3A8 (PpmIdleRegisterDefaultStates.c)
 *     EtwpKernelTraceRundown @ 0x140780158 (EtwpKernelTraceRundown.c)
 *     PpmCheckInitProcessors @ 0x1407A4778 (PpmCheckInitProcessors.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x1407A5568 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmEventTraceControlCallback @ 0x1407BF270 (PpmEventTraceControlCallback.c)
 *     PpmReapplyIdlePolicy @ 0x1408DE04C (PpmReapplyIdlePolicy.c)
 *     PpmWmiIdleAccountingWork @ 0x1408ED470 (PpmWmiIdleAccountingWork.c)
 *     PpmPostProcessMediaBuffering @ 0x1408F1748 (PpmPostProcessMediaBuffering.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopQueueTargetDpc @ 0x140205060 (PopQueueTargetDpc.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     memset @ 0x140408F80 (memset.c)
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
