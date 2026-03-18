/*
 * XREFs of PopExecuteOnTargetProcessors @ 0x140293A88
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x1402485E0 (PoGetPerfStateAndParkingInfo.c)
 *     PoGetIdleTimes @ 0x140293444 (PoGetIdleTimes.c)
 *     PpmCheckResetProcessors @ 0x1403B3F5C (PpmCheckResetProcessors.c)
 *     PpmParkRegisterParking @ 0x1403CE6F8 (PpmParkRegisterParking.c)
 *     PpmHeteroHgsBackupInit @ 0x1403DC9D4 (PpmHeteroHgsBackupInit.c)
 *     PpmUpdateIdleDomains @ 0x1405C9170 (PpmUpdateIdleDomains.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1405C94E0 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405C9740 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x1405D6FBC (PpmCapturePerformanceDistribution.c)
 *     EtwpKernelTraceRundown @ 0x140814360 (EtwpKernelTraceRundown.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x14081A4FC (PpmParkUpdateConcurrencyTracking.c)
 *     PpmUpdateProcessorPolicy @ 0x14081ACB4 (PpmUpdateProcessorPolicy.c)
 *     PpmIdleRegisterDefaultStates @ 0x14082975C (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x140829930 (PpmUpdateIdleStates.c)
 *     PpmCheckInitProcessors @ 0x140849690 (PpmCheckInitProcessors.c)
 *     PpmEventTraceControlCallback @ 0x140864680 (PpmEventTraceControlCallback.c)
 *     PpmReapplyIdlePolicy @ 0x14098B1A8 (PpmReapplyIdlePolicy.c)
 *     PpmWmiIdleAccountingWork @ 0x140998440 (PpmWmiIdleAccountingWork.c)
 *     PpmPostProcessMediaBuffering @ 0x14099D834 (PpmPostProcessMediaBuffering.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopQueueTargetDpc @ 0x140293BA0 (PopQueueTargetDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

__int64 __fastcall PopExecuteOnTargetProcessors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Object; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v6[2]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v7[2]; // [rsp+48h] [rbp-31h] BYREF
  __int16 v8; // [rsp+58h] [rbp-21h]
  int v9; // [rsp+5Ah] [rbp-1Fh]
  __int16 v10; // [rsp+5Eh] [rbp-1Bh]
  __int64 v11; // [rsp+60h] [rbp-19h]
  __int64 v12; // [rsp+68h] [rbp-11h]
  __int64 v13; // [rsp+70h] [rbp-9h]
  __int64 *p_Object; // [rsp+78h] [rbp-1h]
  _QWORD *v15; // [rsp+80h] [rbp+7h]
  unsigned int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+8Ch] [rbp+13h]
  struct _KDPC Dpc; // [rsp+90h] [rbp+17h] BYREF

  Object = 393217LL;
  v17 = 0;
  v6[1] = v6;
  v6[0] = v6;
  v7[1] = *(_QWORD *)(a1 + 8);
  v15 = v7;
  v7[0] = a1;
  v11 = a2;
  p_Object = &Object;
  memset(&Dpc, 0, 60);
  v9 = 0;
  v10 = 0;
  v8 = 0;
  v12 = a3;
  v13 = a4;
  v16 = 0;
  PopQueueTargetDpc(&Dpc);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  return v16;
}
