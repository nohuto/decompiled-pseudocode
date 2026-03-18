/*
 * XREFs of ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C005F280 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0048FC8 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C005D080 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C005D1E8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C005D314 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C005D47C (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     ApiSetEditionCancelCoolSwitch @ 0x1C005F38C (ApiSetEditionCancelCoolSwitch.c)
 *     IsPTPIVEnabled @ 0x1C005F440 (IsPTPIVEnabled.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C005F524 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C005F580 (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C005F5A8 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ApiSetEditionLLMouseButtonHook @ 0x1C005F67C (ApiSetEditionLLMouseButtonHook.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C005F774 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C005F894 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C005F9FC (ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick.c)
 *     ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ @ 0x1C005FAB4 (-GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ.c)
 *     ?ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ @ 0x1C005FADC (-ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C005FB00 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C005FCCC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C005FF5C (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C005FF98 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     UpdateAsyncKeyState @ 0x1C0060EF0 (UpdateAsyncKeyState.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0061864 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C0062758 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C0064C84 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0064EF0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0065904 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069AA8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C0069ADC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     IsPointerPromotedMouseMessage @ 0x1C0069BA8 (IsPointerPromotedMouseMessage.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006E1C0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C006E240 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     IsTouchpadDevice @ 0x1C01B17A0 (IsTouchpadDevice.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C01BD904 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01C1CF8 (-DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01C29D0 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x1C01C2B68 (-HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA-AW4InertiaEndSuppressionResult@2@_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  unsigned int ButtonMessage; // r12d
  unsigned int v9; // edx
  __int64 v10; // rcx
  struct tagPOINT v11; // rbx
  __int64 v12; // r8
  int MessageWParamInfo; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  BOOL v17; // ebx
  unsigned int v18; // eax
  int v19; // edx
  int v20; // edx
  __int64 v21; // r9
  char v22; // r15
  __int64 v23; // r14
  int v24; // edx
  bool v25; // bl
  struct tagTHREADINFO *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r9
  unsigned __int8 v33; // bl
  int v34; // edx
  unsigned __int64 v35; // rax
  CInputDest *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // eax
  int v40; // eax
  unsigned __int8 v41; // al
  int v42; // ecx
  char v43; // r8
  int v44; // edx
  __int64 v45; // r9
  __int64 v46; // r10
  _OWORD *RawMouseInputDestination; // rax
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  bool v54; // bl
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v56; // r8
  __int64 v57; // rdx
  int v58; // edx
  __int64 v59; // rdx
  int v60; // eax
  int v61; // eax
  int v62; // r9d
  __int64 PtiFromInputDest; // rax
  ULONG v64[2]; // [rsp+20h] [rbp-E0h]
  PEVENT_DATA_DESCRIPTOR v65; // [rsp+28h] [rbp-D8h]
  __int64 v66; // [rsp+40h] [rbp-C0h] BYREF
  struct tagPOINT v67; // [rsp+48h] [rbp-B8h] BYREF
  int v68; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v69; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v70; // [rsp+5Ch] [rbp-A4h] BYREF
  int v71; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v72; // [rsp+68h] [rbp-98h] BYREF
  HWND WindowHandle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v74; // [rsp+78h] [rbp-88h] BYREF
  struct tagPOINT v75; // [rsp+80h] [rbp-80h] BYREF
  int v76; // [rsp+88h] [rbp-78h]
  __int64 v77; // [rsp+90h] [rbp-70h] BYREF
  int v78; // [rsp+98h] [rbp-68h]
  _QWORD v79[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v80[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v81; // [rsp+C8h] [rbp-38h]
  __int64 v82; // [rsp+CCh] [rbp-34h]
  int v83; // [rsp+D4h] [rbp-2Ch]
  _OWORD v84[7]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v85[64]; // [rsp+150h] [rbp+50h] BYREF
  char v86[112]; // [rsp+190h] [rbp+90h] BYREF
  _OWORD v87[6]; // [rsp+200h] [rbp+100h] BYREF
  __int128 v88; // [rsp+260h] [rbp+160h]
  struct tagPOINT v89; // [rsp+280h] [rbp+180h] BYREF
  int v90; // [rsp+288h] [rbp+188h]
  int v91; // [rsp+28Ch] [rbp+18Ch]
  int v92; // [rsp+290h] [rbp+190h]
  int v93; // [rsp+294h] [rbp+194h]
  __int64 ExtraInfoForHook; // [rsp+298h] [rbp+198h]
  _OWORD v95[7]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _DWORD v96[32]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v97[128]; // [rsp+390h] [rbp+290h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v98; // [rsp+410h] [rbp+310h] BYREF
  __int64 *v99; // [rsp+430h] [rbp+330h]
  __int64 v100; // [rsp+438h] [rbp+338h]
  __int64 *v101; // [rsp+440h] [rbp+340h]
  __int64 v102; // [rsp+448h] [rbp+348h]
  int *v103; // [rsp+450h] [rbp+350h]
  __int64 v104; // [rsp+458h] [rbp+358h]
  unsigned int *v105; // [rsp+460h] [rbp+360h]
  __int64 v106; // [rsp+468h] [rbp+368h]
  HWND *p_WindowHandle; // [rsp+470h] [rbp+370h]
  __int64 v108; // [rsp+478h] [rbp+378h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      6,
      22,
      (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
  }
  v4 = *((_QWORD *)v2 + 1);
  v68 = 0;
  v5 = *(_DWORD *)(v4 + 140);
  v6 = *(_DWORD *)(v4 + 108);
  v67 = *(struct tagPOINT *)(v4 + 132);
  ApiSetEditionCancelCoolSwitch(&v68);
  if ( v68 )
  {
    if ( v6 != 1 )
    {
      v75 = v67;
      v76 = v5;
      if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v75, v7, 0LL) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 3;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v7,
            6,
            23,
            (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
        }
        v38 = 14LL;
LABEL_42:
        InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), v38);
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
        (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
    }
    v38 = 15LL;
    goto LABEL_42;
  }
  ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(v2);
  if ( !IsPTPIVEnabled()
    || !(unsigned __int8)isChildPartition(v10)
    || !(unsigned __int8)IsTouchpadDevice(*(_QWORD *)(*((_QWORD *)v2 + 1) + 8LL)) )
  {
    goto LABEL_7;
  }
  v39 = *((_DWORD *)v2 + 8);
  if ( v39 == 1 )
  {
    v40 = CMouseProcessor::InertiaEndSuppression::HandleMake(
            (char *)this + 3624,
            *(_QWORD *)(*((_QWORD *)v2 + 1) + 96LL));
  }
  else
  {
    if ( v39 != 2 )
      goto LABEL_7;
    if ( *((_BYTE *)this + 3624) )
    {
      *((_BYTE *)this + 3624) = 0;
      goto LABEL_54;
    }
    v40 = 1;
  }
  if ( v40 )
  {
LABEL_7:
    if ( (gpdwCPUserPreferencesMask & 0x80008000) != 0x80008000 )
    {
LABEL_8:
      v11 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
      v66 = (__int64)v11;
      v72 = *((_QWORD *)gpsi + 619);
      v67 = v11;
      CMouseProcessor::InformUMObservers(this, v2, &v67, &v67);
      if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 112LL) & 0x80u) == 0 && CBaseProcessor::IsUMSuppressed(this) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v44) = 4;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v44,
            6,
            27,
            (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
        }
        v38 = 4LL;
        goto LABEL_42;
      }
      LODWORD(v65) = 0;
      CMouseProcessor::MouseHitTest(this, v87, &v66, &v72, v2);
      if ( (unsigned int)dword_1C024C960 > 4
        && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 64LL, v12, *((_QWORD *)v2 + 1)) )
      {
        WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v87);
        v71 = *(_DWORD *)(v45 + 56);
        LODWORD(v69) = *(_DWORD *)(v45 + 52);
        v74 = *(_QWORD *)(v45 + 88);
        p_WindowHandle = &WindowHandle;
        v105 = &v70;
        v103 = &v71;
        v101 = &v69;
        v99 = &v74;
        v70 = ButtonMessage;
        v108 = 8LL;
        v106 = v46;
        v104 = v46;
        v102 = v46;
        v100 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02213B3,
          0LL,
          0LL,
          7u,
          &v98);
      }
      v89 = v11;
      MessageWParamInfo = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v2);
      v14 = *((_QWORD *)v2 + 1);
      v90 = MessageWParamInfo;
      v91 = *(unsigned __int8 *)(v14 + 112) >> 7;
      v92 = *(_DWORD *)(v14 + 80);
      v93 = 0;
      ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(v2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v85, (struct CInputDest *)v87);
      v15 = *((_QWORD *)v2 + 1);
      v16 = *(_DWORD *)(v15 + 140);
      v17 = (*(_DWORD *)(v15 + 112) & 1) == 0;
      v77 = *(_QWORD *)(v15 + 132);
      v78 = v16;
      v18 = CMouseProcessor::CButtonEvent::GetButtonMessage(v2);
      if ( (unsigned int)ApiSetEditionLLMouseButtonHook((__int64)v87, (__int64)&v89, v18, &v77, v17) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 4;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v19,
            6,
            28,
            (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
        }
        InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), 0LL);
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v85);
        goto LABEL_28;
      }
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v85);
      CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3528, 0, 3);
      if ( (unsigned __int8)anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 0LL) )
      {
        RawMouseInputDestination = (_OWORD *)anonymous_namespace_::GetRawMouseInputDestination(v86);
        v48 = RawMouseInputDestination[1];
        v84[0] = *RawMouseInputDestination;
        v49 = RawMouseInputDestination[2];
        v84[1] = v48;
        v50 = RawMouseInputDestination[3];
        v84[2] = v49;
        v51 = RawMouseInputDestination[4];
        v84[3] = v50;
        v52 = RawMouseInputDestination[5];
        v84[4] = v51;
        v53 = RawMouseInputDestination[6];
        v84[5] = v52;
        v84[6] = v53;
        CInputDest::CInputDest((CInputDest *)v96, (const struct tagINPUTDEST *)v84);
        if ( v96[0] )
        {
          v54 = *((_DWORD *)v2 + 8) == 2;
          CMouseProcessor::CButtonEvent::GetVKey(v2);
          ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v96);
          LOBYTE(v56) = v54;
          UpdateAsyncKeyState(*((_QWORD *)ThreadInfo + 53), v57, v56);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v58) = 4;
            WPP_RECORDER_SF_(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v58,
              6,
              29,
              (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
          }
          InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), 19LL);
          CInputDest::SetEmpty((CInputDest *)v96);
          goto LABEL_28;
        }
        CInputDest::SetEmpty((CInputDest *)v96);
      }
      if ( !LODWORD(v87[0]) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = 3;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v20,
            6,
            30,
            (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
        }
        v59 = 13LL;
        goto LABEL_114;
      }
      if ( (unsigned int)IsPointerPromotedMouseMessage(ButtonMessage, *((_QWORD *)v2 + 1) + 104LL) )
      {
        v22 = 1;
        if ( !anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v21 + 132), v87) )
          goto LABEL_88;
      }
      else
      {
        v22 = 0;
      }
      v23 = (unsigned __int16)v66 | (WORD2(v66) << 16);
      ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick((__int64)v87, *((_DWORD *)v2 + 8) == 2);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 940, 1, 1) )
      {
        if ( v22 && !anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*((_QWORD *)v2 + 1) + 132LL), (_DWORD *)this + 910) )
          goto LABEL_88;
        v95[0] = v87[0];
        v95[2] = v87[2];
        v95[1] = v87[1];
        v95[4] = v87[4];
        v95[3] = v87[3];
        v95[6] = v88;
        v95[5] = v87[5];
        if ( *((_DWORD *)v2 + 8) == 1 )
        {
          v61 = *((_DWORD *)v2 + 7);
          if ( !v61 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL);
            v61 = *((_DWORD *)v2 + 7);
          }
          *((_DWORD *)this + 909) |= v61;
          CInputDest::operator=((__int64)v87, (__int64)this + 3640);
        }
        else
        {
          v36 = CMouseProcessor::HandleCapture_BreakHasMouseOwner(
                  (__int64)this,
                  (CInputDest *)v97,
                  (CInputDest *)v87,
                  (__int64)v2);
          CInputDest::operator=(v87, v36);
          CInputDest::SetEmpty((CInputDest *)v97);
        }
        if ( !LODWORD(v87[0]) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v37);
        ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent((__int64)v87, (__int64)v95, *(_QWORD *)&v67, v66, &v66);
        v23 = (unsigned __int16)v66 | (WORD2(v66) << 16);
      }
      else if ( *((_DWORD *)v2 + 8) == 1 )
      {
        if ( !CMouseProcessor::HandleCapture_MakeNoMouseOwner(
                this,
                (const struct CInputDest *)v87,
                v2,
                v23,
                v67,
                ButtonMessage) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v24) = 3;
            WPP_RECORDER_SF_(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v24,
              6,
              31,
              (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
          }
          v59 = 17LL;
          goto LABEL_114;
        }
      }
      else
      {
        v60 = *((_DWORD *)v2 + 7);
        if ( !v60 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL);
          v60 = *((_DWORD *)v2 + 7);
        }
        *((_DWORD *)this + 909) &= ~v60;
      }
      v25 = *((_DWORD *)v2 + 8) == 2;
      CMouseProcessor::CButtonEvent::GetVKey(v2);
      v26 = CInputDest::GetThreadInfo((CInputDest *)v87);
      LOBYTE(v27) = v25;
      UpdateAsyncKeyState(*((_QWORD *)v26 + 53), v28, v27);
      if ( *((_DWORD *)v2 + 8) == 1 )
      {
        v80[0] = v88;
        v30 = *((_QWORD *)v2 + 1);
        v83 = 0;
        v81 = 4;
        v31 = *(_QWORD *)(v30 + 8);
        LODWORD(v69) = (__int16)v23;
        HIDWORD(v69) = SWORD1(v23);
        v82 = v69;
        v80[1] = v31;
        InputExtensibilityCallout::CoreMsgSendMessage(v31, 6LL, v80, 32LL, *(_QWORD *)v64, v65);
      }
      if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 112LL) & 0x100) != 0
        || CInputDest::ShouldSkipForegroundActivation((CInputDest *)v87) )
      {
        v33 = 1;
        goto LABEL_23;
      }
      v33 = 0;
      if ( CMouseProcessor::UpdateForegroundForInput(this, (struct CInputDest *)v87, v2, v32) )
      {
LABEL_23:
        if ( !LODWORD(v87[0]) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_106:
            v59 = 18LL;
            goto LABEL_114;
          }
          v62 = 33;
LABEL_105:
          LOBYTE(v29) = 3;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v29,
            6,
            v62,
            (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
          goto LABEL_106;
        }
        if ( v22 )
        {
          PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(v87, 2LL);
          if ( PtiFromInputDest )
          {
            if ( (*(_DWORD *)(PtiFromInputDest + 480) & 1) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_106;
              v62 = 34;
              goto LABEL_105;
            }
          }
        }
        if ( !(unsigned __int8)anonymous_namespace_::InMouseRawInputMode(v87, 1LL, 1LL) )
        {
          v79[0] = v33;
          v79[1] = v23;
          v79[2] = 0LL;
          v35 = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v2);
          if ( (unsigned int)CMouseProcessor::ForwardInputToISM(this, v87, v2, v79, &v67, 0, ButtonMessage, v35) == 1 )
            CMouseProcessor::DeliverMouseButtonToInputDest(
              this,
              v2,
              (const struct CInputDest *)v87,
              (const struct CMouseProcessor::InputDeliveryContext *)v79);
          goto LABEL_28;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v34) = 3;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v34,
            6,
            35,
            (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
        }
        v59 = 12LL;
LABEL_114:
        InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), v59);
LABEL_28:
        CInputDest::SetEmpty((CInputDest *)v87);
        return;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v29) = 3;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v29,
          6,
          32,
          (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
      }
LABEL_88:
      v59 = 10LL;
      goto LABEL_114;
    }
    if ( ButtonMessage == 513 )
    {
      if ( *((_BYTE *)this + 3628) )
      {
        v41 = 0;
      }
      else
      {
        v41 = 1;
        *((_DWORD *)this + 908) = *(_DWORD *)(*((_QWORD *)v2 + 1) + 80LL);
      }
      *((_BYTE *)this + 3628) = v41;
      v42 = v41;
    }
    else
    {
      if ( ButtonMessage != 514 )
        goto LABEL_8;
      v43 = *((_BYTE *)this + 3628);
      if ( v43 )
      {
        v9 = *(_DWORD *)(*((_QWORD *)v2 + 1) + 80LL) - *((_DWORD *)this + 908);
        if ( v9 <= dword_1C024D200 )
        {
          *((_BYTE *)this + 3628) = 0;
          v43 = 0;
        }
        if ( v43 )
        {
LABEL_68:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = 4;
            WPP_RECORDER_SF_(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v9,
              6,
              26,
              (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
          }
          v38 = 16LL;
          goto LABEL_42;
        }
      }
      v42 = 1;
    }
    if ( v42 )
      goto LABEL_8;
    goto LABEL_68;
  }
LABEL_54:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v9,
      6,
      25,
      (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
  }
}
