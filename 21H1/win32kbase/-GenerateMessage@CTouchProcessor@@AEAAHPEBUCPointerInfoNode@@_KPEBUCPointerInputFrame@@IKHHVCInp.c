/*
 * XREFs of ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0194B84
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01947A0 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C019495C (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C0195948 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C0195B88 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C0195E58 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0195FE0 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C0196198 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 * Callees:
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C003D220 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C005D1E8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C005D670 (ApiSetEditionHandleHungWindow.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0065904 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069AA8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     EtwTraceBeginPointerMessageGeneration @ 0x1C012DA90 (EtwTraceBeginPointerMessageGeneration.c)
 *     EtwTraceEndPointerMessageGeneration @ 0x1C012E210 (EtwTraceEndPointerMessageGeneration.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C0189000 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0189298 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z @ 0x1C0194F10 (-GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C019BA40 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C019C878 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     IsPointerInputMessage @ 0x1C01A4288 (IsPointerInputMessage.c)
 *     ApiSetInkProcessorOnPointerMessagePosted @ 0x1C01D1D28 (ApiSetInkProcessorOnPointerMessagePosted.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v15; // rcx
  HWND WindowHandle; // rax
  CInputDest *v17; // rcx
  HWND v18; // r10
  int v19; // edx
  int v20; // edx
  int v21; // edx
  PDEVICE_OBJECT v22; // rcx
  int v23; // r9d
  int v24; // r9d
  HWND v25; // rax
  __int64 v26; // r8
  __int64 v27; // r8
  int v28; // r14d
  __int64 v29; // rdx
  struct tagTHREADINFO *ThreadInfo; // rax
  int v31; // edx
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
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
  }
  v12 = a5;
  v13 = *(_WORD *)(v10 + 172);
  v14 = *(_WORD *)(v10 + 160);
  if ( a5 )
  {
    if ( !(unsigned int)IsPointerInputMessage(a5, a2, a3, a4) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
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
    if ( WindowHandle != v18 )
    {
      if ( a8 || (v24 = 2, (*(_DWORD *)v10 & 0x800) != 0) )
        v24 = 1;
      if ( !CInputDest::SetupFromInputDestAndWindow((__int64 *)a9, v10 + 352, v18, v24) )
        CInputDest::SetEmpty(a9);
      goto LABEL_24;
    }
    if ( a8 || (*(_DWORD *)v10 & 0x800) != 0 || CInputDest::CanCallerAccessDestination(v17) )
LABEL_13:
      CInputDest::operator=((__int64)a9, v10 + 352);
LABEL_24:
    if ( !*(_DWORD *)a9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v19,
          7,
          289,
          (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v22 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v23 = 290;
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
      v25 = CInputDest::GetWindowHandle(a9);
      InputTraceLogging::Pointer::GenerateMessage(a4, v13, v9, v12, v25);
      EtwTraceBeginPointerMessageGeneration(v14, v13, v26);
      v28 = CTouchProcessor::PostPointerMessage(v35, a9, a4, (const struct CPointerInfoNode *)v10, v9, v12, a6, a7, a8);
      if ( v28 )
      {
        ApiSetInkProcessorOnPointerMessagePosted(v12, a3);
        v29 = *(unsigned int *)(v10 + 180);
        if ( (v29 & 0x2000) != 0 && (v29 & 0x10000) != 0 )
        {
          PoLatencySensitivityHint(2LL, v29);
          ThreadInfo = CInputDest::GetThreadInfo(a9);
          if ( ThreadInfo )
          {
            CInputGlobals::SetPtiLastWoken(gpInputGlobals, ThreadInfo, 0);
            ApiSetEditionHandleHungWindow((__int64)a9);
          }
        }
      }
      EtwTraceEndPointerMessageGeneration(v14, v13, v27);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v31) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v31,
          7,
          292,
          (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      }
      v11 = v28;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v23 = 291;
          goto LABEL_34;
        }
      }
    }
    goto LABEL_44;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v20,
      7,
      287,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v23 = 288;
LABEL_34:
        LOBYTE(v21) = 5;
        WPP_RECORDER_SF_(v22->DeviceExtension, v21, 7, v23, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      }
    }
  }
LABEL_44:
  CInputDest::SetEmpty(a9);
  return v11;
}
