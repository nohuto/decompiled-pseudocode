/*
 * XREFs of RIMCompletePointerDeviceFrame @ 0x1C01794B0
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C016269C (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C0165CF0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C0168624 (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01804E8 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C018076C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0180C40 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0064264 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x1C0177A80 (-CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCom.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C0179E1C (rimCountContactsToDeliverWithFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1C0179F2C (rimFindAndReclaimHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C0179FEC (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C017A740 (rimStorePointersInHoldingFrame.c)
 *     rimProcessCompleteFrame @ 0x1C017C3A8 (rimProcessCompleteFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C017FAE8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C017FDEC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCompletePointerDeviceFrame(struct RawInputManagerObject *a1, struct RIMDEV *a2, unsigned int a3)
{
  struct RawInputManagerObject *v5; // rbp
  void *v6; // rdx
  __int64 v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rax
  int v10; // edx
  unsigned int v11; // r12d
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // edx
  int v17; // r9d
  int v18; // edx
  __int64 v20; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v21; // [rsp+98h] [rbp+20h] BYREF

  v5 = a1;
  v6 = &WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = (struct RawInputManagerObject *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v6) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v6,
        1,
        53,
        (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
    }
  }
  v7 = *((_QWORD *)a2 + 60);
  v8 = 0;
  LODWORD(v20) = 0;
  v21 = 0;
  v9 = *(_QWORD *)(v7 + 712);
  if ( v9 && *(_DWORD *)(v9 + 36) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  rimCountContactsToDeliverWithFrame(v7, &v21, &v20);
  v11 = v21;
  if ( !v21 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v10, 1, 56, (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
    }
    v12 = v20;
    goto LABEL_21;
  }
  RIMUpdatePrimaryAndFinalizePointerFlags(v5, v7);
  v12 = v20;
  if ( !(unsigned int)rimStorePointersInHoldingFrame(v5, a2, v11, (unsigned int)v20) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v17 = 55;
    goto LABEL_15;
  }
  v20 = 0LL;
  if ( !(unsigned int)rimGetCompleteFrameAndReleaseHoldingFrame(v5, a2, &v20) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_21:
      rimFindAndReclaimHoldingFrame(v5, a2, v12, a3);
      goto LABEL_22;
    }
    v17 = 54;
LABEL_15:
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, v17, (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
    goto LABEL_21;
  }
  v15 = v20;
  *(_DWORD *)(v20 + 84) = v12;
  if ( (*((_DWORD *)a2 + 46) & 0x2000) != 0 )
  {
    *(_QWORD *)(v15 + 32) = *((_QWORD *)a2 + 3);
    *(_DWORD *)(v15 + 80) = 1;
  }
  InputTraceLogging::RIM::CompleteFrame((__int64)a2, v15, a3);
  rimProcessCompleteFrame(v5, a2);
  v8 = 1;
LABEL_22:
  RIMUpdatePointerDeviceStateAfterFrameCompleted(v5, a2, v8, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_ddd(
      (__int64)gRimLog,
      4u,
      1u,
      0x39u,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
      v8,
      v12,
      v11);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v18) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v18,
          1,
          58,
          (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
      }
    }
  }
  return v8;
}
