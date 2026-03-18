/*
 * XREFs of ACPIInternalEvaluateOST @ 0x1C00573B4
 * Callers:
 *     ACPIProcessorStartDeviceWorker @ 0x1C0004D10 (ACPIProcessorStartDeviceWorker.c)
 *     ACPICheckModuleStarted @ 0x1C005969C (ACPICheckModuleStarted.c)
 *     ACPIInitShutdownInProgress @ 0x1C005F760 (ACPIInitShutdownInProgress.c)
 *     ACPINotifyOsShutdownWorker @ 0x1C005F8A0 (ACPINotifyOsShutdownWorker.c)
 *     ACPIRootEvent @ 0x1C005F9E0 (ACPIRootEvent.c)
 *     AcpiShutdownNotificationTimerWorkItem @ 0x1C0060070 (AcpiShutdownNotificationTimerWorkItem.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C008F350 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0004A40 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C00077E8 (WPP_RECORDER_SF_qss.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memset @ 0x1C0030080 (memset.c)
 */

__int64 __fastcall ACPIInternalEvaluateOST(__int64 a1, int a2, int a3)
{
  unsigned int v6; // edi
  __int64 *v7; // rbp
  int v8; // esi
  __int64 v9; // rdx
  const char *v10; // rax
  const char *v11; // r8
  __int64 v12; // rdx
  const char *v13; // rax
  const char *v14; // r8
  _QWORD v16[16]; // [rsp+50h] [rbp-A8h] BYREF

  v6 = -1073741823;
  v7 = AMLIGetNamedChild(*(__int64 **)(a1 + 760), 1414745951);
  if ( v7 )
  {
    memset(v16, 0, 0x78uLL);
    v16[14] = 0LL;
    LODWORD(v16[2]) = a2;
    WORD1(v16[0]) = 1;
    WORD1(v16[5]) = 1;
    WORD1(v16[10]) = 2;
    LODWORD(v16[7]) = a3;
    v8 = AMLIAsyncEvalObject(v7, 0LL, 3u, v16, 0LL, 0LL);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v7);
    if ( v8 == 259 )
    {
      return 0;
    }
    else
    {
      v6 = v8;
      if ( v8 < 0 )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = (const char *)&unk_1C006FB8B;
        v11 = (const char *)&unk_1C006FB8B;
        if ( (v9 & 0x200000000000LL) != 0 )
        {
          v10 = *(const char **)(a1 + 608);
          if ( (v9 & 0x400000000000LL) != 0 )
            v11 = *(const char **)(a1 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            6u,
            0xFu,
            (__int64)&WPP_95d701b52be23d9498d45ac18e77591e_Traceguids,
            v8,
            a1,
            v10,
            v11);
      }
    }
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 8);
    v13 = (const char *)&unk_1C006FB8B;
    v14 = (const char *)&unk_1C006FB8B;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v13 = *(const char **)(a1 + 608);
      if ( (v12 & 0x400000000000LL) != 0 )
        v14 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        6u,
        0x10u,
        (__int64)&WPP_95d701b52be23d9498d45ac18e77591e_Traceguids,
        a1,
        v13,
        v14);
  }
  return v6;
}
