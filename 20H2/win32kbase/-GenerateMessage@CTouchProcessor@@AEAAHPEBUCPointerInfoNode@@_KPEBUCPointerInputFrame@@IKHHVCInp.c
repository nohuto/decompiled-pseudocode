/*
 * XREFs of ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018C964
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018C580 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018C73C (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C018D728 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C018D968 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C018DC38 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018DDC0 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C018DF78 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0033D74 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C00AB6A0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C00B2018 (ApiSetEditionHandleHungWindow.c)
 *     EtwTraceBeginPointerMessageGeneration @ 0x1C0125750 (EtwTraceBeginPointerMessageGeneration.c)
 *     EtwTraceEndPointerMessageGeneration @ 0x1C0125ED0 (EtwTraceEndPointerMessageGeneration.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C0180DC0 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0181058 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z @ 0x1C018CCF0 (-GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C0193820 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0194658 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     IsPointerInputMessage @ 0x1C019C028 (IsPointerInputMessage.c)
 *     ApiSetInkProcessorOnPointerMessagePosted @ 0x1C01C9A28 (ApiSetInkProcessorOnPointerMessagePosted.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessage(
        CTouchProcessor *a1,
        __int64 a2,
        unsigned __int64 a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        CInputDest *a9)
{
  unsigned __int64 v9; // r14
  __int64 v10; // rsi
  unsigned int v11; // ebx
  unsigned int v12; // ebp
  __int16 v13; // r12
  unsigned __int16 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  HWND WindowHandle; // rax
  __int64 v20; // rdx
  CInputDest *v21; // rcx
  HWND v22; // r10
  PDEVICE_OBJECT v23; // rcx
  int v24; // r9d
  __int64 v25; // r9
  HWND v26; // rax
  __int64 v27; // r8
  __int64 v28; // r8
  int v29; // r14d
  __int64 v30; // rdx
  struct tagTHREADINFO *ThreadInfo; // rax
  CTouchProcessor *v35; // [rsp+60h] [rbp-58h]

  v9 = a3;
  v10 = a2;
  v35 = a1;
  v11 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = (CTouchProcessor *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        7,
        286,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
  }
  v12 = a5;
  v13 = *(_WORD *)(v10 + 172);
  v14 = *(_WORD *)(v10 + 160);
  if ( a5 )
  {
    if ( !(unsigned int)IsPointerInputMessage(a5, a2, a3, a4) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17, v18);
    goto LABEL_7;
  }
  v12 = CTouchProcessor::PointerFlagsToMessage(a1, *(_DWORD *)(v10 + 180));
  if ( v12 )
  {
LABEL_7:
    if ( *(_DWORD *)a9 )
      goto LABEL_30;
    if ( !*(_DWORD *)(v10 + 444) )
      goto LABEL_13;
    WindowHandle = CInputDest::GetWindowHandle((CInputDest *)(v10 + 352));
    if ( WindowHandle != v22 )
    {
      if ( a8 || (v25 = 2LL, (*(_DWORD *)v10 & 0x800) != 0) )
        v25 = 1LL;
      if ( !CInputDest::SetupFromInputDestAndWindow(a9, v10 + 352, v22, v25) )
        CInputDest::SetEmpty(a9, v15, v17, v18);
      goto LABEL_24;
    }
    if ( a8 || (*(_DWORD *)v10 & 0x800) != 0 || CInputDest::CanCallerAccessDestination(v21, v20, v17, v18) )
LABEL_13:
      CInputDest::operator=((__int64)a9, v10 + 352, v17, v18);
LABEL_24:
    if ( !*(_DWORD *)a9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v15,
          7,
          289,
          (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v24 = 290;
            goto LABEL_34;
          }
        }
      }
      goto LABEL_44;
    }
    v9 = a3;
LABEL_30:
    if ( *((_DWORD *)a9 + 23) )
    {
      v26 = CInputDest::GetWindowHandle(a9);
      InputTraceLogging::Pointer::GenerateMessage(a4, v13, v9, v12, v26);
      EtwTraceBeginPointerMessageGeneration(v14, v13, v27);
      v29 = CTouchProcessor::PostPointerMessage(v35, a9, a4, (const struct CPointerInfoNode *)v10, v9, v12, a6, a7, a8);
      if ( v29 )
      {
        ApiSetInkProcessorOnPointerMessagePosted(v12, a3);
        v30 = *(unsigned int *)(v10 + 180);
        if ( (v30 & 0x2000) != 0 && (v30 & 0x10000) != 0 )
        {
          PoLatencySensitivityHint(2LL, v30);
          ThreadInfo = CInputDest::GetThreadInfo(a9);
          if ( ThreadInfo )
          {
            CInputGlobals::SetPtiLastWoken(gpInputGlobals, ThreadInfo, 0);
            ApiSetEditionHandleHungWindow((__int64)a9);
          }
        }
      }
      EtwTraceEndPointerMessageGeneration(v14, v13, v28);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v15) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          7,
          292,
          (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      }
      v11 = v29;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17, v18);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v24 = 291;
          goto LABEL_34;
        }
      }
    }
    goto LABEL_44;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v15,
      7,
      287,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v24 = 288;
LABEL_34:
        LOBYTE(v15) = 5;
        WPP_RECORDER_SF_(v23->DeviceExtension, v15, 7, v24, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      }
    }
  }
LABEL_44:
  CInputDest::SetEmpty(a9, v15, v17, v18);
  return v11;
}
