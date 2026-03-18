/*
 * XREFs of ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006C024
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0068D90 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00472D0 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0047438 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C0049940 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C004F418 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0056998 (_anonymous_namespace_--ValidateUIPI.c)
 *     ApiSetEditionCancelCoolSwitch @ 0x1C0068E9C (ApiSetEditionCancelCoolSwitch.c)
 *     IsPTPIVEnabled @ 0x1C0068F50 (IsPTPIVEnabled.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C0069034 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069090 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C00690C4 (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00690EC (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ApiSetEditionLLMouseButtonHook @ 0x1C00691C0 (ApiSetEditionLLMouseButtonHook.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C00692B8 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C00693D8 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     IsPointerPromotedMouseMessage @ 0x1C0069540 (IsPointerPromotedMouseMessage.c)
 *     ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C0069574 (ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick.c)
 *     ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ @ 0x1C006962C (-GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ.c)
 *     UpdateAsyncKeyState @ 0x1C0069E20 (UpdateAsyncKeyState.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C006A794 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ @ 0x1C006B5F4 (-ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C006B618 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C006B6FC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C006B88C (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C006BFC0 (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C006BFFC (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C006DA78 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006EEE0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C006F05C (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C006FFB4 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00708C0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00712D4 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0074820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     IsTouchpadDevice @ 0x1C01ABA40 (IsTouchpadDevice.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C01B7BA4 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01BBF98 (-DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01BCC70 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x1C01BCE08 (-HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA-AW4InertiaEndSuppressionResult@2@_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ProcessMouseButton(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2)
{
  const struct CMouseProcessor::CButtonEvent *v2; // rdi
  __int64 v4; // rax
  int v5; // r14d
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int ButtonMessage; // r12d
  unsigned int v11; // edx
  __int64 v12; // rcx
  struct tagPOINT v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int MessageWParamInfo; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // eax
  BOOL v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // eax
  int v28; // edx
  int v29; // edx
  __int64 v30; // r8
  __int64 v31; // r9
  char v32; // r15
  __int64 v33; // r14
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  char v37; // bl
  struct tagTHREADINFO *v38; // rax
  unsigned __int8 v39; // dl
  int v40; // edx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r9
  unsigned __int8 v44; // bl
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int64 v48; // rax
  CInputDest *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  int v55; // eax
  int v56; // eax
  unsigned __int8 v57; // al
  int v58; // ecx
  char v59; // r8
  int v60; // edx
  __int64 v61; // r9
  __int64 v62; // r10
  _OWORD *RawMouseInputDestination; // rax
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  char v73; // bl
  struct tagTHREADINFO *ThreadInfo; // rax
  unsigned __int8 v75; // dl
  int v76; // edx
  __int64 v77; // rdx
  int v78; // eax
  int v79; // eax
  int v80; // r9d
  __int64 PtiFromInputDest; // rax
  __int64 v82; // [rsp+40h] [rbp-C0h] BYREF
  struct tagPOINT v83; // [rsp+48h] [rbp-B8h] BYREF
  int v84; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v85; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v86; // [rsp+5Ch] [rbp-A4h] BYREF
  int v87; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v88; // [rsp+68h] [rbp-98h] BYREF
  HWND WindowHandle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v90; // [rsp+78h] [rbp-88h] BYREF
  struct tagPOINT v91; // [rsp+80h] [rbp-80h] BYREF
  int v92; // [rsp+88h] [rbp-78h]
  __int64 v93; // [rsp+90h] [rbp-70h] BYREF
  int v94; // [rsp+98h] [rbp-68h]
  _QWORD v95[5]; // [rsp+A0h] [rbp-60h] BYREF
  int v96; // [rsp+C8h] [rbp-38h]
  __int64 v97; // [rsp+CCh] [rbp-34h]
  int v98; // [rsp+D4h] [rbp-2Ch]
  _OWORD v99[7]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v100[64]; // [rsp+150h] [rbp+50h] BYREF
  char v101[112]; // [rsp+190h] [rbp+90h] BYREF
  __int128 v102[6]; // [rsp+200h] [rbp+100h] BYREF
  __int128 v103; // [rsp+260h] [rbp+160h]
  struct tagPOINT v104; // [rsp+280h] [rbp+180h] BYREF
  int v105; // [rsp+288h] [rbp+188h]
  int v106; // [rsp+28Ch] [rbp+18Ch]
  int v107; // [rsp+290h] [rbp+190h]
  int v108; // [rsp+294h] [rbp+194h]
  __int64 ExtraInfoForHook; // [rsp+298h] [rbp+198h]
  _OWORD v110[7]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _DWORD v111[32]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v112[128]; // [rsp+390h] [rbp+290h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v113; // [rsp+410h] [rbp+310h] BYREF
  __int64 *v114; // [rsp+430h] [rbp+330h]
  __int64 v115; // [rsp+438h] [rbp+338h]
  __int64 *v116; // [rsp+440h] [rbp+340h]
  __int64 v117; // [rsp+448h] [rbp+348h]
  int *v118; // [rsp+450h] [rbp+350h]
  __int64 v119; // [rsp+458h] [rbp+358h]
  unsigned int *v120; // [rsp+460h] [rbp+360h]
  __int64 v121; // [rsp+468h] [rbp+368h]
  HWND *p_WindowHandle; // [rsp+470h] [rbp+370h]
  __int64 v123; // [rsp+478h] [rbp+378h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      6,
      22,
      (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
  }
  v4 = *((_QWORD *)v2 + 1);
  v84 = 0;
  v5 = *(_DWORD *)(v4 + 140);
  v6 = *(_DWORD *)(v4 + 108);
  v83 = *(struct tagPOINT *)(v4 + 132);
  ApiSetEditionCancelCoolSwitch(&v84);
  if ( v84 )
  {
    if ( v6 != 1 )
    {
      v91 = v83;
      v92 = v5;
      if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v91, v7, 0LL) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 3;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v7,
            6,
            23,
            (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
        }
        v54 = 14LL;
LABEL_42:
        InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), v54);
        return;
      }
    }
  }
  if ( !*((_QWORD *)v2 + 5) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v7,
        6,
        24,
        (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
    }
    v54 = 15LL;
    goto LABEL_42;
  }
  ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(v2, v7, v8, v9);
  if ( !IsPTPIVEnabled()
    || !(unsigned __int8)isChildPartition(v12)
    || !(unsigned __int8)IsTouchpadDevice(*(_QWORD *)(*((_QWORD *)v2 + 1) + 8LL)) )
  {
    goto LABEL_7;
  }
  v55 = *((_DWORD *)v2 + 8);
  if ( v55 == 1 )
  {
    v56 = CMouseProcessor::InertiaEndSuppression::HandleMake(
            (char *)this + 3552,
            *(_QWORD *)(*((_QWORD *)v2 + 1) + 96LL));
  }
  else
  {
    if ( v55 != 2 )
      goto LABEL_7;
    if ( *((_BYTE *)this + 3552) )
    {
      *((_BYTE *)this + 3552) = 0;
      goto LABEL_54;
    }
    v56 = 1;
  }
  if ( v56 )
  {
LABEL_7:
    if ( (gpdwCPUserPreferencesMask & 0x80008000) != 0x80008000 )
    {
LABEL_8:
      v13 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
      v82 = (__int64)v13;
      v88 = *((_QWORD *)gpsi + 619);
      v83 = v13;
      CMouseProcessor::InformUMObservers(this, v2, &v83, &v83);
      if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 112LL) & 0x80u) == 0 && CBaseProcessor::IsUMSuppressed(this) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v60) = 4;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v60,
            6,
            27,
            (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
        }
        v54 = 4LL;
        goto LABEL_42;
      }
      CMouseProcessor::MouseHitTest(this, v102, &v82, &v88, v2, 0, 0LL);
      v16 = *((_QWORD *)v2 + 1);
      if ( (unsigned int)dword_1C0246A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 64LL, v15, v16) )
      {
        WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v102);
        v87 = *(_DWORD *)(v61 + 56);
        LODWORD(v85) = *(_DWORD *)(v61 + 52);
        v90 = *(_QWORD *)(v61 + 88);
        p_WindowHandle = &WindowHandle;
        v120 = &v86;
        v118 = &v87;
        v116 = &v85;
        v114 = &v90;
        v86 = ButtonMessage;
        v123 = 8LL;
        v121 = v62;
        v119 = v62;
        v117 = v62;
        v115 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C021B843,
          0LL,
          0LL,
          7u,
          &v113);
      }
      v104 = v13;
      MessageWParamInfo = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v2, v14, v15, v16);
      v18 = *((_QWORD *)v2 + 1);
      v105 = MessageWParamInfo;
      v106 = *(unsigned __int8 *)(v18 + 112) >> 7;
      v107 = *(_DWORD *)(v18 + 80);
      v108 = 0;
      ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(v2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v100, (struct CInputDest *)v102, v19, v20);
      v21 = *((_QWORD *)v2 + 1);
      v22 = *(_DWORD *)(v21 + 140);
      v23 = (*(_DWORD *)(v21 + 112) & 1) == 0;
      v93 = *(_QWORD *)(v21 + 132);
      v94 = v22;
      v27 = CMouseProcessor::CButtonEvent::GetButtonMessage(v2, v24, v25, v26);
      if ( (unsigned int)ApiSetEditionLLMouseButtonHook((__int64)v102, (__int64)&v104, v27, &v93, v23) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v28) = 4;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v28,
            6,
            28,
            (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
        }
        InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), 0LL);
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v100);
        goto LABEL_28;
      }
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v100);
      CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3456, 0, 3);
      if ( (unsigned __int8)anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 0LL) )
      {
        RawMouseInputDestination = (_OWORD *)anonymous_namespace_::GetRawMouseInputDestination(v101);
        v64 = RawMouseInputDestination[1];
        v99[0] = *RawMouseInputDestination;
        v65 = RawMouseInputDestination[2];
        v99[1] = v64;
        v66 = RawMouseInputDestination[3];
        v99[2] = v65;
        v67 = RawMouseInputDestination[4];
        v99[3] = v66;
        v68 = RawMouseInputDestination[5];
        v99[4] = v67;
        v69 = RawMouseInputDestination[6];
        v99[5] = v68;
        v99[6] = v69;
        CInputDest::CInputDest((CInputDest *)v111, (const struct tagINPUTDEST *)v99);
        if ( v111[0] )
        {
          v73 = *((_DWORD *)v2 + 8) == 2;
          CMouseProcessor::CButtonEvent::GetVKey(v2, v70, v71, v72);
          ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v111);
          UpdateAsyncKeyState(*((_QWORD *)ThreadInfo + 53), v75, v73);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v76) = 4;
            WPP_RECORDER_SF_(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v76,
              6,
              29,
              (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
          }
          InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), 19LL);
          CInputDest::SetEmpty((CInputDest *)v111);
          goto LABEL_28;
        }
        CInputDest::SetEmpty((CInputDest *)v111);
      }
      if ( !LODWORD(v102[0]) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v29) = 3;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v29,
            6,
            30,
            (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
        }
        v77 = 13LL;
        goto LABEL_114;
      }
      if ( (unsigned int)IsPointerPromotedMouseMessage(ButtonMessage, (_DWORD *)(*((_QWORD *)v2 + 1) + 104LL)) )
      {
        v32 = 1;
        if ( !anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v31 + 132), v102, v30, v31) )
          goto LABEL_88;
      }
      else
      {
        v32 = 0;
      }
      v33 = (unsigned __int16)v82 | (WORD2(v82) << 16);
      ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick((__int64)v102, *((_DWORD *)v2 + 8) == 2);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 922, 1, 1) )
      {
        if ( v32
          && !anonymous_namespace_::ValidateUIPI(
                *(_QWORD *)(*((_QWORD *)v2 + 1) + 132LL),
                (_DWORD *)this + 892,
                v35,
                v36) )
        {
          goto LABEL_88;
        }
        v110[0] = v102[0];
        v110[2] = v102[2];
        v110[1] = v102[1];
        v110[4] = v102[4];
        v110[3] = v102[3];
        v110[6] = v103;
        v110[5] = v102[5];
        if ( *((_DWORD *)v2 + 8) == 1 )
        {
          v79 = *((_DWORD *)v2 + 7);
          if ( !v79 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, v34, v35, v36);
            v79 = *((_DWORD *)v2 + 7);
          }
          *((_DWORD *)this + 891) |= v79;
          CInputDest::operator=((__int64)v102, (__int64)this + 3568);
        }
        else
        {
          v49 = CMouseProcessor::HandleCapture_BreakHasMouseOwner(
                  (__int64)this,
                  (CInputDest *)v112,
                  (CInputDest *)v102,
                  (__int64)v2);
          CInputDest::operator=(v102, v49);
          CInputDest::SetEmpty((CInputDest *)v112);
        }
        if ( !LODWORD(v102[0]) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v51, v50, v52, v53);
        ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent((__int64)v102, (__int64)v110, *(_QWORD *)&v83, v82, &v82);
        v33 = (unsigned __int16)v82 | (WORD2(v82) << 16);
      }
      else if ( *((_DWORD *)v2 + 8) == 1 )
      {
        if ( !CMouseProcessor::HandleCapture_MakeNoMouseOwner(
                this,
                (const struct CInputDest *)v102,
                v2,
                v33,
                v83,
                ButtonMessage) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v34) = 3;
            WPP_RECORDER_SF_(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v34,
              6,
              31,
              (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
          }
          v77 = 17LL;
          goto LABEL_114;
        }
      }
      else
      {
        v78 = *((_DWORD *)v2 + 7);
        if ( !v78 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, v34, v35, v36);
          v78 = *((_DWORD *)v2 + 7);
        }
        *((_DWORD *)this + 891) &= ~v78;
      }
      v37 = *((_DWORD *)v2 + 8) == 2;
      CMouseProcessor::CButtonEvent::GetVKey(v2, v34, v35, v36);
      v38 = CInputDest::GetThreadInfo((CInputDest *)v102);
      UpdateAsyncKeyState(*((_QWORD *)v38 + 53), v39, v37);
      if ( *((_DWORD *)v2 + 8) == 1 )
      {
        v95[3] = v103;
        v41 = *((_QWORD *)v2 + 1);
        v98 = 0;
        v96 = 4;
        v42 = *(_QWORD *)(v41 + 8);
        LODWORD(v85) = (__int16)v33;
        HIDWORD(v85) = SWORD1(v33);
        v97 = v85;
        v95[4] = v42;
        InputExtensibilityCallout::CoreMsgSendMessage(v42, 6);
      }
      if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 112LL) & 0x100) != 0
        || CInputDest::ShouldSkipForegroundActivation((CInputDest *)v102) )
      {
        v44 = 1;
        goto LABEL_23;
      }
      v44 = 0;
      if ( CMouseProcessor::UpdateForegroundForInput(this, (struct CInputDest *)v102, v2, v43) )
      {
LABEL_23:
        if ( !LODWORD(v102[0]) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_106:
            v77 = 18LL;
            goto LABEL_114;
          }
          v80 = 33;
LABEL_105:
          LOBYTE(v40) = 3;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v40,
            6,
            v80,
            (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
          goto LABEL_106;
        }
        if ( v32 )
        {
          PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(v102, 2LL);
          if ( PtiFromInputDest )
          {
            if ( (*(_DWORD *)(PtiFromInputDest + 480) & 1) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_106;
              v80 = 34;
              goto LABEL_105;
            }
          }
        }
        if ( !(unsigned __int8)anonymous_namespace_::InMouseRawInputMode(v102, 1LL, 1LL) )
        {
          v95[0] = v44;
          v95[1] = v33;
          v95[2] = 0LL;
          v48 = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v2, v45, v46, v47);
          if ( (unsigned int)CMouseProcessor::ForwardInputToISM(
                               (__int64)this,
                               v102,
                               v2,
                               (const struct CMouseProcessor::InputDeliveryContext *)v95,
                               &v83,
                               0,
                               ButtonMessage,
                               v48) == 1 )
            CMouseProcessor::DeliverMouseButtonToInputDest(
              this,
              v2,
              (const struct CInputDest *)v102,
              (const struct CMouseProcessor::InputDeliveryContext *)v95);
          goto LABEL_28;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v45) = 3;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v45,
            6,
            35,
            (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
        }
        v77 = 12LL;
LABEL_114:
        InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), v77);
LABEL_28:
        CInputDest::SetEmpty((CInputDest *)v102);
        return;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v40) = 3;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v40,
          6,
          32,
          (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
      }
LABEL_88:
      v77 = 10LL;
      goto LABEL_114;
    }
    if ( ButtonMessage == 513 )
    {
      if ( *((_BYTE *)this + 3556) )
      {
        v57 = 0;
      }
      else
      {
        v57 = 1;
        *((_DWORD *)this + 890) = *(_DWORD *)(*((_QWORD *)v2 + 1) + 80LL);
      }
      *((_BYTE *)this + 3556) = v57;
      v58 = v57;
    }
    else
    {
      if ( ButtonMessage != 514 )
        goto LABEL_8;
      v59 = *((_BYTE *)this + 3556);
      if ( v59 )
      {
        v11 = *(_DWORD *)(*((_QWORD *)v2 + 1) + 80LL) - *((_DWORD *)this + 890);
        if ( v11 <= dword_1C0247200 )
        {
          *((_BYTE *)this + 3556) = 0;
          v59 = 0;
        }
        if ( v59 )
        {
LABEL_68:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = 4;
            WPP_RECORDER_SF_(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v11,
              6,
              26,
              (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
          }
          v54 = 16LL;
          goto LABEL_42;
        }
      }
      v58 = 1;
    }
    if ( v58 )
      goto LABEL_8;
    goto LABEL_68;
  }
LABEL_54:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v11,
      6,
      25,
      (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
  }
}
