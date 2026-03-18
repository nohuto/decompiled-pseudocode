/*
 * XREFs of ACPIInternalEvaluateOST @ 0x1C0056B24
 * Callers:
 *     ACPIProcessorStartDeviceWorker @ 0x1C000CC80 (ACPIProcessorStartDeviceWorker.c)
 *     ACPICheckModuleStarted @ 0x1C00587C4 (ACPICheckModuleStarted.c)
 *     ACPIInitShutdownInProgress @ 0x1C005E7BC (ACPIInitShutdownInProgress.c)
 *     ACPINotifyOsShutdownWorker @ 0x1C005E8F0 (ACPINotifyOsShutdownWorker.c)
 *     ACPIRootEvent @ 0x1C005EA30 (ACPIRootEvent.c)
 *     AcpiShutdownNotificationTimerWorkItem @ 0x1C005F0F0 (AcpiShutdownNotificationTimerWorkItem.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C00A2BC0 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C001441C (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001D858 (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D994 (WPP_RECORDER_SF_Dqss.c)
 *     AMLIGetNamedChild @ 0x1C0020AF0 (AMLIGetNamedChild.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     memset @ 0x1C0032180 (memset.c)
 */

__int64 __fastcall ACPIInternalEvaluateOST(__int64 a1, int a2, int a3)
{
  int v6; // edi
  __int64 *v7; // rsi
  __int64 v8; // rdx
  const char *v9; // rax
  const char *v10; // r8
  __int64 v11; // rdx
  const char *v12; // rax
  const char *v13; // r8
  _QWORD v15[16]; // [rsp+50h] [rbp-A8h] BYREF

  v6 = -1073741823;
  v7 = AMLIGetNamedChild(*(__int64 **)(a1 + 720), 1414745951);
  if ( v7 )
  {
    memset(v15, 0, 0x78uLL);
    LODWORD(v15[7]) = a3;
    WORD1(v15[0]) = 1;
    LODWORD(v15[2]) = a2;
    WORD1(v15[10]) = 2;
    WORD1(v15[5]) = 1;
    v15[14] = 0LL;
    v6 = AMLIAsyncEvalObject(v7, 0LL, 3u, v15, 0LL, 0LL);
    AMLIDereferenceHandleEx((__int64)v7);
    if ( v6 == 259 )
      v6 = 0;
    if ( v6 < 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v9 = (const char *)&unk_1C00701BA;
      v10 = (const char *)&unk_1C00701BA;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v9 = *(const char **)(a1 + 568);
        if ( (v8 & 0x400000000000LL) != 0 )
          v10 = *(const char **)(a1 + 576);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0xFu,
          (__int64)&WPP_93e06651ed773e0c6f8a5613c80b6645_Traceguids,
          v6,
          a1,
          v9,
          v10);
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = (const char *)&unk_1C00701BA;
    v13 = (const char *)&unk_1C00701BA;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(a1 + 568);
      if ( (v11 & 0x400000000000LL) != 0 )
        v13 = *(const char **)(a1 + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        6u,
        0x10u,
        (__int64)&WPP_93e06651ed773e0c6f8a5613c80b6645_Traceguids,
        a1,
        v12,
        v13);
  }
  return (unsigned int)v6;
}
