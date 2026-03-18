/*
 * XREFs of ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01BBA70
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C01B9810 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C002C894 (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C002EA6C (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C002EDFC (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C003297C (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C0032C08 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0033C60 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0033D74 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0033F64 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C00340E0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00553BC (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C00A5EC4 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C00AF7D8 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00B69A8 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C01B5834 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01B9B08 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01B9E60 (-DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C01BA7AC (-GetInputDestFromForegroundFocus@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1C01BA8B8 (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C01BA9B8 (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x1C01BAC6C (_anonymous_namespace_--HasThreadRequestedFocusMouseWheelRouting.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01BACFC (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z @ 0x1C01BC0DC (-ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z.c)
 *     ?RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C01BC214 (-RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     _anonymous_namespace_::ResolveApplicationFrameChildThread @ 0x1C01BC2A8 (_anonymous_namespace_--ResolveApplicationFrameChildThread.c)
 *     ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x1C01BC464 (-ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x1C01C4510 (APISetEditionGetMouseWheelRoutingMode.c)
 *     ApiSetEditionLLMouseWheelHook @ 0x1C01C69CC (ApiSetEditionLLMouseWheelHook.c)
 *     ApiSetEditionPostMouseWheelToForeground @ 0x1C01C75D8 (ApiSetEditionPostMouseWheelToForeground.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  CMouseProcessor *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct tagTHREADINFO *v27; // rbx
  _OWORD *InputDestFromForegroundFocus; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int64 v35; // r8
  __int64 v36; // r9
  char v37; // si
  struct tagTHREADINFO *MouseWheelForegroundThread; // rax
  CMouseProcessor *v39; // rcx
  __int64 v40; // rdi
  unsigned int v41; // r15d
  __int16 v42; // si
  unsigned __int64 v43; // r14
  HWND WindowHandle; // rbx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int v48; // eax
  int v49; // edi
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rbx
  int v55; // eax
  __int64 v56; // rbx
  __int64 v57; // r14
  __int64 v58; // r15
  int v59; // r12d
  unsigned __int64 v60; // rsi
  int v61; // r10d
  int v62; // edi
  __int64 v63; // rdx
  CMouseProcessor::CWheelEvent *v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  int v67; // eax
  bool ShouldDeliverWheelEventToInputDest; // [rsp+50h] [rbp-B0h]
  struct tagPOINT v69; // [rsp+58h] [rbp-A8h] BYREF
  int v70; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v71; // [rsp+68h] [rbp-98h]
  __int64 v72; // [rsp+70h] [rbp-90h] BYREF
  struct tagPOINT v73; // [rsp+78h] [rbp-88h] BYREF
  __int64 v74; // [rsp+80h] [rbp-80h] BYREF
  __int64 v75; // [rsp+90h] [rbp-70h] BYREF
  int v76; // [rsp+98h] [rbp-68h]
  __int64 v77; // [rsp+A0h] [rbp-60h] BYREF
  int v78; // [rsp+A8h] [rbp-58h]
  __int64 v79; // [rsp+ACh] [rbp-54h]
  int v80; // [rsp+B4h] [rbp-4Ch]
  _OWORD v81[7]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v82[128]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v83[7]; // [rsp+1B0h] [rbp+B0h] BYREF
  struct tagPOINT v84; // [rsp+220h] [rbp+120h] BYREF
  int v85; // [rsp+228h] [rbp+128h]
  int v86; // [rsp+22Ch] [rbp+12Ch]
  int v87; // [rsp+230h] [rbp+130h]
  int v88; // [rsp+234h] [rbp+134h]
  __int64 ExtraInfoForHook; // [rsp+238h] [rbp+138h]
  __int128 v90[7]; // [rsp+240h] [rbp+140h] BYREF
  char v91; // [rsp+2B0h] [rbp+1B0h]
  _BYTE v92[128]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v69.x = 0;
  v4 = 0;
  v5 = *((_QWORD *)a2 + 1);
  v6 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
  v73 = v6;
  if ( (*(_DWORD *)(v5 + 112) & 0x200) != 0 )
    v6 = *(struct tagPOINT *)(v5 + 52);
  v69 = v6;
  v71 = (LOWORD(v6.y) << 16) | LOWORD(v6.x);
  memset(v90, 0, sizeof(v90));
  v91 = 0;
  CMouseProcessor::InformUMObservers(this, a2, &v69, &v69);
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
        (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
    goto LABEL_48;
  }
  v8 = *((_QWORD *)a2 + 1);
  v84 = v6;
  v85 = *(unsigned __int16 *)(v8 + 30) << 16;
  v86 = *(unsigned __int8 *)(v8 + 112) >> 7;
  v87 = *(_DWORD *)(v8 + 80);
  v88 = 0;
  ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(a2);
  v10 = *(_DWORD *)(v9 + 140);
  v11 = (*(_DWORD *)(v9 + 112) & 1) == 0;
  v75 = *(_QWORD *)(v9 + 132);
  v76 = v10;
  WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2, v12, v9, v13);
  if ( (unsigned int)ApiSetEditionLLMouseWheelHook(&v84, WheelMessage, &v75, v11) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        40,
        (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    goto LABEL_48;
  }
  if ( gpqForeground
    && (*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) & 8) == 0
    && (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) == 0 )
  {
    CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3456, 0, 0);
  }
  ShouldDeliverWheelEventToInputDest = 0;
  v70 = 0;
  if ( *((_DWORD *)a2 + 6) || (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0 )
  {
    v72 = *((_QWORD *)gpsi + 619);
    v15 = CMouseProcessor::MouseHitTest(
            (__int64)this,
            (__int64)v82,
            &v73,
            (__int64)&v72,
            a2,
            _InterlockedCompareExchange((volatile signed __int32 *)this + 922, 1, 1) != 0,
            &v70);
    CInputDest::operator=((__int64)v90, v15);
    CInputDest::SetEmpty((CInputDest *)v82, v16, v17, v18);
    ShouldDeliverWheelEventToInputDest = CMouseProcessor::ShouldDeliverWheelEventToInputDest(
                                           v19,
                                           a2,
                                           (const struct CInputDest *)v90);
    if ( ShouldDeliverWheelEventToInputDest )
    {
      if ( !CInputDest::DoesBelongToForeground((__int64)v90, 0) )
        CMouseProcessor::Telemetry::OnBackgroundMouseInput((const struct CInputDest *)v90);
      v22 = *((_QWORD *)a2 + 1);
      if ( (*(_DWORD *)(v22 + 112) & 8) != 0
        && (*(_DWORD *)(v22 + 108) == 1 || anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v22 + 132), v90, v20, v21)) )
      {
        CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3456, (int)v90, 0);
      }
      ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v90);
      v27 = ThreadInfo;
      if ( !ThreadInfo )
        goto LABEL_27;
      if ( !anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting((__int64)ThreadInfo) )
        goto LABEL_27;
      InputDestFromForegroundFocus = QHelper::GetInputDestFromForegroundFocus(v83);
      v29 = InputDestFromForegroundFocus[1];
      v81[0] = *InputDestFromForegroundFocus;
      v30 = InputDestFromForegroundFocus[2];
      v81[1] = v29;
      v31 = InputDestFromForegroundFocus[3];
      v81[2] = v30;
      v32 = InputDestFromForegroundFocus[4];
      v81[3] = v31;
      v33 = InputDestFromForegroundFocus[5];
      v81[4] = v32;
      v34 = InputDestFromForegroundFocus[6];
      v81[5] = v33;
      v81[6] = v34;
      CInputDest::CInputDest((CInputDest *)v92, (const struct tagINPUTDEST *)v81);
      v4 = 1;
      v37 = 1;
      if ( CInputDest::operator==((unsigned int *)v90, (__int64)v92, v35, v36) )
LABEL_27:
        v37 = 0;
      if ( (v4 & 1) != 0 )
        CInputDest::SetEmpty((CInputDest *)v92, v24, v25, v26);
      if ( v37 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            6,
            41,
            (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
        goto LABEL_48;
      }
      MouseWheelForegroundThread = CMouseProcessor::GetMouseWheelForegroundThread();
      if ( MouseWheelForegroundThread
        && *((_QWORD *)v27 + 53) != *(_QWORD *)(anonymous_namespace_::ResolveApplicationFrameChildThread(MouseWheelForegroundThread)
                                              + 424)
        && !(unsigned int)APISetEditionGetMouseWheelRoutingMode()
        && CMouseProcessor::HittestWheelRoutingRequested(v39) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            6,
            42,
            (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
        InputTraceLogging::Mouse::RerouteWheel(*(_QWORD *)(*((_QWORD *)a2 + 1) + 88LL));
        ShouldDeliverWheelEventToInputDest = 0;
      }
    }
  }
  v40 = *((_QWORD *)a2 + 1);
  v41 = *((_DWORD *)a2 + 6);
  v42 = *(_WORD *)(v40 + 30);
  v43 = *(_QWORD *)(v40 + 88);
  WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v90);
  v48 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2, v45, v46, v47);
  InputTraceLogging::Mouse::ProcessWheel(
    v43,
    (const struct tagPOINT *)(v40 + 52),
    v48,
    v42,
    v41,
    WindowHandle,
    ShouldDeliverWheelEventToInputDest);
  v49 = 2 * (unsigned __int8)CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
  if ( ShouldDeliverWheelEventToInputDest )
  {
    if ( !anonymous_namespace_::InMouseRawInputMode((__int64)v90, 1LL, 1) )
    {
      v53 = *((_QWORD *)a2 + 1);
      v79 = 0LL;
      v80 = 0;
      v77 = v71;
      v78 = v49;
      v54 = (unsigned __int64)*(unsigned __int16 *)(v53 + 30) << 16;
      v55 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2, v50, v71, v52);
      if ( (unsigned int)CMouseProcessor::ForwardInputToISM(
                           (__int64)this,
                           v90,
                           a2,
                           (const struct CMouseProcessor::InputDeliveryContext *)&v77,
                           &v69,
                           v70,
                           v55,
                           v54) == 1 )
        CMouseProcessor::DeliverMouseWheelToInputDest(
          this,
          a2,
          (const struct CInputDest *)v90,
          (const struct CMouseProcessor::InputDeliveryContext *)&v77);
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
    v56 = *((_QWORD *)a2 + 1);
    v57 = *(unsigned int *)(v56 + 40);
    v58 = *(_QWORD *)(v56 + 88);
    v59 = *(_DWORD *)(v56 + 80);
    v74 = *(_QWORD *)(v56 + 132);
    v60 = (unsigned __int64)&v74 & -(__int64)(CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2) != 0);
    v69.x = v49 | 0x20;
    v62 = v61 << 16;
    v67 = CMouseProcessor::CWheelEvent::GetWheelMessage(v64, v63, v65, v66);
    ApiSetEditionPostMouseWheelToForeground(v67, v62, v71, v59, v58, v57, v69.x, v56 + 104, v60);
  }
LABEL_49:
  CInputDest::SetEmpty((CInputDest *)v90, v50, v51, v52);
}
