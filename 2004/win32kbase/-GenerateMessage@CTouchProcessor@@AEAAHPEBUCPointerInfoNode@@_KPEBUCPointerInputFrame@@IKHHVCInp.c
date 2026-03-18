/*
 * XREFs of ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018EE84
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018EAA0 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C018EC5C (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C018FC48 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C018FE88 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C0190158 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01902E0 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C0190498 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0047438 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C004A490 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C0051558 (ApiSetEditionHandleHungWindow.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069090 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00712D4 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     EtwTraceBeginPointerMessageGeneration @ 0x1C0127AA0 (EtwTraceBeginPointerMessageGeneration.c)
 *     EtwTraceEndPointerMessageGeneration @ 0x1C0128220 (EtwTraceEndPointerMessageGeneration.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C0183300 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0183598 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z @ 0x1C018F210 (-GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C0195D50 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0196B88 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     IsPointerInputMessage @ 0x1C019E528 (IsPointerInputMessage.c)
 *     ApiSetInkProcessorOnPointerMessagePosted @ 0x1C01CBDA8 (ApiSetInkProcessorOnPointerMessagePosted.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v22; // r8
  __int64 v23; // r9
  HWND v24; // r10
  int v25; // edx
  PDEVICE_OBJECT v26; // rcx
  int v27; // r9d
  __int64 v28; // r9
  HWND v29; // rax
  __int64 v30; // r8
  __int64 v31; // r8
  int v32; // r14d
  __int64 v33; // rdx
  struct tagTHREADINFO *ThreadInfo; // rax
  int v35; // edx
  CTouchProcessor *v39; // [rsp+60h] [rbp-58h]

  v9 = a3;
  v10 = a2;
  v39 = a1;
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
        287,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
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
    if ( WindowHandle != v24 )
    {
      if ( a8 || (v28 = 2LL, (*(_DWORD *)v10 & 0x800) != 0) )
        v28 = 1LL;
      if ( !CInputDest::SetupFromInputDestAndWindow((__int64 *)a9, v10 + 352, v24, v28) )
        CInputDest::SetEmpty(a9);
      goto LABEL_24;
    }
    if ( a8 || (*(_DWORD *)v10 & 0x800) != 0 || CInputDest::CanCallerAccessDestination(v21, v20, v22, v23) )
LABEL_13:
      CInputDest::operator=((__int64)a9, v10 + 352);
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
          290,
          (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v26 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v27 = 291;
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
      v29 = CInputDest::GetWindowHandle(a9);
      InputTraceLogging::Pointer::GenerateMessage(a4, v13, v9, v12, v29);
      EtwTraceBeginPointerMessageGeneration(v14, v13, v30);
      v32 = CTouchProcessor::PostPointerMessage(v39, a9, a4, (const struct CPointerInfoNode *)v10, v9, v12, a6, a7, a8);
      if ( v32 )
      {
        ApiSetInkProcessorOnPointerMessagePosted(v12, a3);
        v33 = *(unsigned int *)(v10 + 180);
        if ( (v33 & 0x2000) != 0 && (v33 & 0x10000) != 0 )
        {
          PoLatencySensitivityHint(2LL, v33);
          ThreadInfo = CInputDest::GetThreadInfo(a9);
          if ( ThreadInfo )
          {
            CInputGlobals::SetPtiLastWoken(gpInputGlobals, ThreadInfo, 0);
            ApiSetEditionHandleHungWindow((__int64)a9);
          }
        }
      }
      EtwTraceEndPointerMessageGeneration(v14, v13, v31);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v35) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v35,
          7,
          293,
          (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      }
      v11 = v32;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17, v18);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v27 = 292;
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
      288,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v27 = 289;
LABEL_34:
        LOBYTE(v25) = 5;
        WPP_RECORDER_SF_(v26->DeviceExtension, v25, 7, v27, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      }
    }
  }
LABEL_44:
  CInputDest::SetEmpty(a9);
  return v11;
}
