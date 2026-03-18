/*
 * XREFs of ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01BDDE8
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C01BBB80 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0056998 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C0069034 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069090 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C00690C4 (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C00693D8 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C006B6FC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C006BA8C (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C006DA78 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C006DD08 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006EEE0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C006F05C (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0070978 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00712D4 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C007471C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0074820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C01B7BA4 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01BBE78 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01BC1D0 (-DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C01BCB1C (-GetInputDestFromForegroundFocus@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1C01BCC28 (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C01BCD28 (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x1C01BCFDC (_anonymous_namespace_--HasThreadRequestedFocusMouseWheelRouting.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01BD06C (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z @ 0x1C01BE454 (-ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z.c)
 *     ?RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C01BE58C (-RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     _anonymous_namespace_::ResolveApplicationFrameChildThread @ 0x1C01BE620 (_anonymous_namespace_--ResolveApplicationFrameChildThread.c)
 *     ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x1C01BE7DC (-ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x1C01C6890 (APISetEditionGetMouseWheelRoutingMode.c)
 *     ApiSetEditionLLMouseWheelHook @ 0x1C01C8D4C (ApiSetEditionLLMouseWheelHook.c)
 *     ApiSetEditionPostMouseWheelToForeground @ 0x1C01C9958 (ApiSetEditionPostMouseWheelToForeground.c)
 */

void __fastcall CMouseProcessor::ProcessMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2)
{
  char v4; // di
  __int64 v5; // rcx
  struct tagPOINT v6; // rbx
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // r8
  int v10; // eax
  BOOL v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int WheelMessage; // eax
  _QWORD *v15; // rax
  CMouseProcessor *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v21; // rbx
  _OWORD *InputDestFromForegroundFocus; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // r8
  __int64 v30; // r9
  char v31; // si
  struct tagTHREADINFO *MouseWheelForegroundThread; // rax
  CMouseProcessor *v33; // rcx
  __int64 v34; // rdi
  unsigned int v35; // r15d
  __int16 v36; // si
  unsigned __int64 v37; // r14
  HWND WindowHandle; // rbx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned int v42; // eax
  int v43; // edi
  __int64 v44; // rdx
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rbx
  int v48; // eax
  __int64 v49; // rbx
  __int64 v50; // r14
  __int64 v51; // r15
  int v52; // r12d
  unsigned __int64 v53; // rsi
  int v54; // r10d
  int v55; // edi
  __int64 v56; // rdx
  CMouseProcessor::CWheelEvent *v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // eax
  bool ShouldDeliverWheelEventToInputDest; // [rsp+50h] [rbp-B0h]
  struct tagPOINT v62; // [rsp+58h] [rbp-A8h] BYREF
  int v63; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+68h] [rbp-98h]
  __int64 v65; // [rsp+70h] [rbp-90h] BYREF
  struct tagPOINT v66; // [rsp+78h] [rbp-88h] BYREF
  __int64 v67; // [rsp+80h] [rbp-80h] BYREF
  __int64 v68; // [rsp+90h] [rbp-70h] BYREF
  int v69; // [rsp+98h] [rbp-68h]
  __int64 v70; // [rsp+A0h] [rbp-60h] BYREF
  int v71; // [rsp+A8h] [rbp-58h]
  __int64 v72; // [rsp+ACh] [rbp-54h]
  int v73; // [rsp+B4h] [rbp-4Ch]
  _OWORD v74[7]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v75[128]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v76[7]; // [rsp+1B0h] [rbp+B0h] BYREF
  struct tagPOINT v77; // [rsp+220h] [rbp+120h] BYREF
  int v78; // [rsp+228h] [rbp+128h]
  int v79; // [rsp+22Ch] [rbp+12Ch]
  int v80; // [rsp+230h] [rbp+130h]
  int v81; // [rsp+234h] [rbp+134h]
  __int64 ExtraInfoForHook; // [rsp+238h] [rbp+138h]
  __int128 v83[7]; // [rsp+240h] [rbp+140h] BYREF
  char v84; // [rsp+2B0h] [rbp+1B0h]
  _BYTE v85[128]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v62.x = 0;
  v4 = 0;
  v5 = *((_QWORD *)a2 + 1);
  v6 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
  v66 = v6;
  if ( (*(_DWORD *)(v5 + 112) & 0x200) != 0 )
    v6 = *(struct tagPOINT *)(v5 + 52);
  v62 = v6;
  v64 = (LOWORD(v6.y) << 16) | LOWORD(v6.x);
  memset(v83, 0, sizeof(v83));
  v84 = 0;
  CMouseProcessor::InformUMObservers(this, a2, &v62, &v62);
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) & 0x80u) == 0 && CBaseProcessor::IsUMSuppressed(this) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v7,
        6,
        39,
        (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
    }
    goto LABEL_48;
  }
  v8 = *((_QWORD *)a2 + 1);
  v77 = v6;
  v78 = *(unsigned __int16 *)(v8 + 30) << 16;
  v79 = *(unsigned __int8 *)(v8 + 112) >> 7;
  v80 = *(_DWORD *)(v8 + 80);
  v81 = 0;
  ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(a2);
  v10 = *(_DWORD *)(v9 + 140);
  v11 = (*(_DWORD *)(v9 + 112) & 1) == 0;
  v68 = *(_QWORD *)(v9 + 132);
  v69 = v10;
  WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2, v12, v9, v13);
  if ( (unsigned int)ApiSetEditionLLMouseWheelHook(&v77, WheelMessage, &v68, v11) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        40,
        (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
    goto LABEL_48;
  }
  if ( gpqForeground
    && (*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) & 8) == 0
    && (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) == 0 )
  {
    CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3456, 0, 0);
  }
  ShouldDeliverWheelEventToInputDest = 0;
  v63 = 0;
  if ( *((_DWORD *)a2 + 6) || (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0 )
  {
    v65 = *((_QWORD *)gpsi + 619);
    v15 = CMouseProcessor::MouseHitTest(
            (__int64)this,
            (__int64)v75,
            &v66,
            (__int64)&v65,
            a2,
            _InterlockedCompareExchange((volatile signed __int32 *)this + 922, 1, 1) != 0,
            &v63);
    CInputDest::operator=((__int64)v83, v15);
    CInputDest::SetEmpty((CInputDest *)v75);
    ShouldDeliverWheelEventToInputDest = CMouseProcessor::ShouldDeliverWheelEventToInputDest(
                                           v16,
                                           a2,
                                           (const struct CInputDest *)v83);
    if ( ShouldDeliverWheelEventToInputDest )
    {
      if ( !CInputDest::DoesBelongToForeground((__int64)v83, 0) )
        CMouseProcessor::Telemetry::OnBackgroundMouseInput((const struct CInputDest *)v83);
      v19 = *((_QWORD *)a2 + 1);
      if ( (*(_DWORD *)(v19 + 112) & 8) != 0
        && (*(_DWORD *)(v19 + 108) == 1 || anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v19 + 132), v83, v17, v18)) )
      {
        CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3456, (int)v83, 0);
      }
      ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v83);
      v21 = ThreadInfo;
      if ( !ThreadInfo )
        goto LABEL_27;
      if ( !anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting((__int64)ThreadInfo) )
        goto LABEL_27;
      InputDestFromForegroundFocus = QHelper::GetInputDestFromForegroundFocus(v76);
      v23 = InputDestFromForegroundFocus[1];
      v74[0] = *InputDestFromForegroundFocus;
      v24 = InputDestFromForegroundFocus[2];
      v74[1] = v23;
      v25 = InputDestFromForegroundFocus[3];
      v74[2] = v24;
      v26 = InputDestFromForegroundFocus[4];
      v74[3] = v25;
      v27 = InputDestFromForegroundFocus[5];
      v74[4] = v26;
      v28 = InputDestFromForegroundFocus[6];
      v74[5] = v27;
      v74[6] = v28;
      CInputDest::CInputDest((CInputDest *)v85, (const struct tagINPUTDEST *)v74);
      v4 = 1;
      v31 = 1;
      if ( CInputDest::operator==((unsigned int *)v83, (__int64)v85, v29, v30) )
LABEL_27:
        v31 = 0;
      if ( (v4 & 1) != 0 )
        CInputDest::SetEmpty((CInputDest *)v85);
      if ( v31 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            6,
            41,
            (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
        goto LABEL_48;
      }
      MouseWheelForegroundThread = CMouseProcessor::GetMouseWheelForegroundThread();
      if ( MouseWheelForegroundThread
        && *((_QWORD *)v21 + 52) != *(_QWORD *)(anonymous_namespace_::ResolveApplicationFrameChildThread(MouseWheelForegroundThread)
                                              + 416)
        && !(unsigned int)APISetEditionGetMouseWheelRoutingMode()
        && CMouseProcessor::HittestWheelRoutingRequested(v33) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            6,
            42,
            (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
        InputTraceLogging::Mouse::RerouteWheel(*(_QWORD *)(*((_QWORD *)a2 + 1) + 88LL));
        ShouldDeliverWheelEventToInputDest = 0;
      }
    }
  }
  v34 = *((_QWORD *)a2 + 1);
  v35 = *((_DWORD *)a2 + 6);
  v36 = *(_WORD *)(v34 + 30);
  v37 = *(_QWORD *)(v34 + 88);
  WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v83);
  v42 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2, v39, v40, v41);
  InputTraceLogging::Mouse::ProcessWheel(
    v37,
    (const struct tagPOINT *)(v34 + 52),
    v42,
    v36,
    v35,
    WindowHandle,
    ShouldDeliverWheelEventToInputDest);
  v43 = 2 * (unsigned __int8)CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
  if ( ShouldDeliverWheelEventToInputDest )
  {
    if ( !anonymous_namespace_::InMouseRawInputMode((__int64)v83, 1LL, 1) )
    {
      v46 = *((_QWORD *)a2 + 1);
      v72 = 0LL;
      v73 = 0;
      v70 = v64;
      v71 = v43;
      v47 = (unsigned __int64)*(unsigned __int16 *)(v46 + 30) << 16;
      v48 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2, v44, v64, v45);
      if ( (unsigned int)CMouseProcessor::ForwardInputToISM(
                           (__int64)this,
                           v83,
                           a2,
                           (const struct CMouseProcessor::InputDeliveryContext *)&v70,
                           &v62,
                           v63,
                           v48,
                           v47) == 1 )
        CMouseProcessor::DeliverMouseWheelToInputDest(
          this,
          a2,
          (const struct CInputDest *)v83,
          (const struct CMouseProcessor::InputDeliveryContext *)&v70);
    }
  }
  else
  {
    if ( !gpqForeground || anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 1) )
    {
LABEL_48:
      InputTraceLogging::Mouse::DropWheel();
      goto LABEL_49;
    }
    v49 = *((_QWORD *)a2 + 1);
    v50 = *(unsigned int *)(v49 + 40);
    v51 = *(_QWORD *)(v49 + 88);
    v52 = *(_DWORD *)(v49 + 80);
    v67 = *(_QWORD *)(v49 + 132);
    v53 = (unsigned __int64)&v67 & -(__int64)(CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2) != 0);
    v62.x = v43 | 0x20;
    v55 = v54 << 16;
    v60 = CMouseProcessor::CWheelEvent::GetWheelMessage(v57, v56, v58, v59);
    ApiSetEditionPostMouseWheelToForeground(v60, v55, v64, v52, v51, v50, v62.x, v49 + 104, v53);
  }
LABEL_49:
  CInputDest::SetEmpty((CInputDest *)v83);
}
