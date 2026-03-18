/*
 * XREFs of RIMCompletePointerDeviceFrame @ 0x1C0173180
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C015C34C (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C015F9A0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01622D4 (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C017A7E8 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C017AA6C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C017AF40 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C006F814 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x1C0171750 (-CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCom.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C0173AEC (rimCountContactsToDeliverWithFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1C0173BFC (rimFindAndReclaimHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C0173CBC (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C0174410 (rimStorePointersInHoldingFrame.c)
 *     rimProcessCompleteFrame @ 0x1C01766A8 (rimProcessCompleteFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0179DE8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C017A0EC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCompletePointerDeviceFrame(
        struct RawInputManagerObject *a1,
        struct RIMDEV *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // r15d
  struct RawInputManagerObject *v6; // rbp
  void *v7; // rdx
  __int64 v8; // rdi
  unsigned int v9; // r14d
  __int64 v10; // rax
  int v11; // edx
  unsigned int v12; // r12d
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  int v23; // edx
  int v24; // r9d
  int v25; // edx
  __int64 v27; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v28; // [rsp+98h] [rbp+20h] BYREF

  v4 = a3;
  v6 = a1;
  v7 = &WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = (struct RawInputManagerObject *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v7) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v7,
        1,
        53,
        (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
    }
  }
  v8 = *((_QWORD *)a2 + 60);
  v9 = 0;
  LODWORD(v27) = 0;
  v28 = 0;
  v10 = *(_QWORD *)(v8 + 712);
  if ( v10 && *(_DWORD *)(v10 + 36) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v7, a3, a4);
  rimCountContactsToDeliverWithFrame(v8, &v28, &v27);
  v12 = v28;
  if ( !v28 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, 56, (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
    }
    v13 = v27;
    goto LABEL_21;
  }
  RIMUpdatePrimaryAndFinalizePointerFlags(v6, v8);
  v13 = v27;
  if ( !(unsigned int)rimStorePointersInHoldingFrame(v6, a2, v12, (unsigned int)v27) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16, v17);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v24 = 55;
    goto LABEL_15;
  }
  v27 = 0LL;
  if ( !(unsigned int)rimGetCompleteFrameAndReleaseHoldingFrame(v6, a2, &v27) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20, v21);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_21:
      rimFindAndReclaimHoldingFrame(v6, a2, v13, v4);
      goto LABEL_22;
    }
    v24 = 54;
LABEL_15:
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v23, 1, v24, (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
    goto LABEL_21;
  }
  v22 = v27;
  *(_DWORD *)(v27 + 84) = v13;
  if ( (*((_DWORD *)a2 + 46) & 0x2000) != 0 )
  {
    *(_QWORD *)(v22 + 32) = *((_QWORD *)a2 + 3);
    *(_DWORD *)(v22 + 80) = 1;
  }
  InputTraceLogging::RIM::CompleteFrame((__int64)a2, v22, v4);
  rimProcessCompleteFrame(v6, a2);
  v9 = 1;
LABEL_22:
  RIMUpdatePointerDeviceStateAfterFrameCompleted(v6, a2, v9, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_ddd(
      (__int64)gRimLog,
      4u,
      1u,
      0x39u,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
      v9,
      v13,
      v12);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v25) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v25,
          1,
          58,
          (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
      }
    }
  }
  return v9;
}
