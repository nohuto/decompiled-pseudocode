/*
 * XREFs of ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00302C4
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C00A6840 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C00293D8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C002C894 (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     IsPointerPromotedMouseMessage @ 0x1C002C8BC (IsPointerPromotedMouseMessage.c)
 *     ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C002C8F0 (ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick.c)
 *     ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ @ 0x1C002C9A8 (-GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ.c)
 *     UpdateAsyncKeyState @ 0x1C002D190 (UpdateAsyncKeyState.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C002DB04 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ @ 0x1C002E964 (-ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C002E988 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C002EA6C (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C002EBFC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C0030260 (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C003029C (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C003297C (_anonymous_namespace_--InMouseRawInputMode.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0033BCC (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0033D74 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0033F64 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C00340E0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C0035484 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     isChildPartition @ 0x1C0036370 (isChildPartition.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C00A5EC4 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C00A6E9C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00A8868 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00AAC14 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ApiSetEditionLLMouseButtonHook @ 0x1C00AB9FC (ApiSetEditionLLMouseButtonHook.c)
 *     ApiSetEditionCancelCoolSwitch @ 0x1C00AD2C0 (ApiSetEditionCancelCoolSwitch.c)
 *     IsPTPIVEnabled @ 0x1C00AF270 (IsPTPIVEnabled.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C00AF7D8 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C00B03A8 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00B69A8 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     IsTouchpadDevice @ 0x1C01A96C0 (IsTouchpadDevice.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C01B5834 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01B9C28 (-DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01BA900 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x1C01BAA98 (-HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA-AW4InertiaEndSuppressionResult@2@_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  struct tagPOINT v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int MessageWParamInfo; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  BOOL v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  int v25; // edx
  int v26; // edx
  __int64 v27; // r9
  char v28; // r15
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  char v33; // bl
  struct tagTHREADINFO *v34; // rax
  unsigned __int8 v35; // dl
  int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r9
  unsigned __int8 v40; // bl
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 v44; // rax
  CInputDest *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  int v51; // eax
  int v52; // eax
  unsigned __int8 v53; // al
  int v54; // ecx
  char v55; // r8
  int v56; // edx
  __int64 v57; // r9
  __int64 v58; // r10
  _OWORD *RawMouseInputDestination; // rax
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  char v69; // bl
  struct tagTHREADINFO *ThreadInfo; // rax
  unsigned __int8 v71; // dl
  int v72; // edx
  __int64 v73; // rdx
  int v74; // eax
  int v75; // eax
  int v76; // r9d
  __int64 PtiFromInputDest; // rax
  struct tagPOINT v78; // [rsp+40h] [rbp-C0h] BYREF
  struct tagPOINT v79; // [rsp+48h] [rbp-B8h] BYREF
  int v80; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v81; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v82; // [rsp+5Ch] [rbp-A4h] BYREF
  int v83; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v84; // [rsp+68h] [rbp-98h] BYREF
  HWND WindowHandle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v86; // [rsp+78h] [rbp-88h] BYREF
  struct tagPOINT v87; // [rsp+80h] [rbp-80h] BYREF
  int v88; // [rsp+88h] [rbp-78h]
  __int64 v89; // [rsp+90h] [rbp-70h] BYREF
  int v90; // [rsp+98h] [rbp-68h]
  _QWORD v91[5]; // [rsp+A0h] [rbp-60h] BYREF
  int v92; // [rsp+C8h] [rbp-38h]
  __int64 v93; // [rsp+CCh] [rbp-34h]
  int v94; // [rsp+D4h] [rbp-2Ch]
  _OWORD v95[7]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v96[64]; // [rsp+150h] [rbp+50h] BYREF
  char v97[112]; // [rsp+190h] [rbp+90h] BYREF
  __int128 v98[6]; // [rsp+200h] [rbp+100h] BYREF
  __int128 v99; // [rsp+260h] [rbp+160h]
  struct tagPOINT v100; // [rsp+280h] [rbp+180h] BYREF
  int v101; // [rsp+288h] [rbp+188h]
  int v102; // [rsp+28Ch] [rbp+18Ch]
  int v103; // [rsp+290h] [rbp+190h]
  int v104; // [rsp+294h] [rbp+194h]
  __int64 ExtraInfoForHook; // [rsp+298h] [rbp+198h]
  _OWORD v106[7]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _DWORD v107[32]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v108[128]; // [rsp+390h] [rbp+290h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v109; // [rsp+410h] [rbp+310h] BYREF
  __int64 *v110; // [rsp+430h] [rbp+330h]
  __int64 v111; // [rsp+438h] [rbp+338h]
  __int64 *v112; // [rsp+440h] [rbp+340h]
  __int64 v113; // [rsp+448h] [rbp+348h]
  int *v114; // [rsp+450h] [rbp+350h]
  __int64 v115; // [rsp+458h] [rbp+358h]
  unsigned int *v116; // [rsp+460h] [rbp+360h]
  __int64 v117; // [rsp+468h] [rbp+368h]
  HWND *p_WindowHandle; // [rsp+470h] [rbp+370h]
  __int64 v119; // [rsp+478h] [rbp+378h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      6,
      22,
      (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
  }
  v4 = *((_QWORD *)v2 + 1);
  v80 = 0;
  v5 = *(_DWORD *)(v4 + 140);
  v6 = *(_DWORD *)(v4 + 108);
  v79 = *(struct tagPOINT *)(v4 + 132);
  ApiSetEditionCancelCoolSwitch(&v80);
  if ( v80 )
  {
    if ( v6 != 1 )
    {
      v87 = v79;
      v88 = v5;
      if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v87, v7, 0LL) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 3;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v7,
            6,
            23,
            (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
        }
        v50 = 14LL;
LABEL_42:
        InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), v50);
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
        (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
    v50 = 15LL;
    goto LABEL_42;
  }
  ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(v2, v7, v8, v9);
  if ( !(unsigned __int8)IsPTPIVEnabled()
    || !(unsigned __int8)isChildPartition()
    || !(unsigned __int8)IsTouchpadDevice(*(_QWORD *)(*((_QWORD *)v2 + 1) + 8LL)) )
  {
    goto LABEL_7;
  }
  v51 = *((_DWORD *)v2 + 8);
  if ( v51 == 1 )
  {
    v52 = CMouseProcessor::InertiaEndSuppression::HandleMake(
            (char *)this + 3552,
            *(_QWORD *)(*((_QWORD *)v2 + 1) + 96LL));
  }
  else
  {
    if ( v51 != 2 )
      goto LABEL_7;
    if ( *((_BYTE *)this + 3552) )
    {
      *((_BYTE *)this + 3552) = 0;
      goto LABEL_54;
    }
    v52 = 1;
  }
  if ( v52 )
  {
LABEL_7:
    if ( (gpdwCPUserPreferencesMask & 0x80008000) != 0x80008000 )
    {
LABEL_8:
      v12 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
      v78 = v12;
      v84 = *((_QWORD *)gpsi + 619);
      v79 = v12;
      CMouseProcessor::InformUMObservers(this, v2, &v79, &v79);
      if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 112LL) & 0x80u) == 0 && CBaseProcessor::IsUMSuppressed(this) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v56) = 4;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v56,
            6,
            27,
            (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
        }
        v50 = 4LL;
        goto LABEL_42;
      }
      CMouseProcessor::MouseHitTest(this, v98, &v78, &v84, v2, 0, 0LL);
      v15 = *((_QWORD *)v2 + 1);
      if ( (unsigned int)dword_1C0244A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 64LL, v14, v15) )
      {
        WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v98);
        v83 = *(_DWORD *)(v57 + 56);
        LODWORD(v81) = *(_DWORD *)(v57 + 52);
        v86 = *(_QWORD *)(v57 + 88);
        p_WindowHandle = &WindowHandle;
        v116 = &v82;
        v114 = &v83;
        v112 = &v81;
        v110 = &v86;
        v82 = ButtonMessage;
        v119 = 8LL;
        v117 = v58;
        v115 = v58;
        v113 = v58;
        v111 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C02199D4, 0, 0, 7u, &v109);
      }
      v100 = v12;
      MessageWParamInfo = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v2, v13, v14, v15);
      v17 = *((_QWORD *)v2 + 1);
      v101 = MessageWParamInfo;
      v102 = *(unsigned __int8 *)(v17 + 112) >> 7;
      v103 = *(_DWORD *)(v17 + 80);
      v104 = 0;
      ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(v2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v96, (struct CInputDest *)v98);
      v18 = *((_QWORD *)v2 + 1);
      v19 = *(_DWORD *)(v18 + 140);
      v20 = (*(_DWORD *)(v18 + 112) & 1) == 0;
      v89 = *(_QWORD *)(v18 + 132);
      v90 = v19;
      v24 = CMouseProcessor::CButtonEvent::GetButtonMessage(v2, v21, v22, v23);
      if ( (unsigned int)ApiSetEditionLLMouseButtonHook(
                           (unsigned int)v98,
                           (unsigned int)&v100,
                           v24,
                           (unsigned int)&v89,
                           v20) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v25) = 4;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v25,
            6,
            28,
            (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
        }
        InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), 0LL);
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v96);
        goto LABEL_28;
      }
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v96);
      CMouseProcessor::CMouseRawInput::PostRawMouse((char *)this + 3456, 0LL, 3LL);
      if ( (unsigned __int8)anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 0LL) )
      {
        RawMouseInputDestination = (_OWORD *)anonymous_namespace_::GetRawMouseInputDestination(v97);
        v60 = RawMouseInputDestination[1];
        v95[0] = *RawMouseInputDestination;
        v61 = RawMouseInputDestination[2];
        v95[1] = v60;
        v62 = RawMouseInputDestination[3];
        v95[2] = v61;
        v63 = RawMouseInputDestination[4];
        v95[3] = v62;
        v64 = RawMouseInputDestination[5];
        v95[4] = v63;
        v65 = RawMouseInputDestination[6];
        v95[5] = v64;
        v95[6] = v65;
        CInputDest::CInputDest((CInputDest *)v107, (const struct tagINPUTDEST *)v95);
        if ( v107[0] )
        {
          v69 = *((_DWORD *)v2 + 8) == 2;
          CMouseProcessor::CButtonEvent::GetVKey(v2, v66, v67, v68);
          ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v107);
          UpdateAsyncKeyState(*((_QWORD *)ThreadInfo + 54), v71, v69);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v72) = 4;
            WPP_RECORDER_SF_(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v72,
              6,
              29,
              (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
          }
          InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), 19LL);
          CInputDest::SetEmpty((CInputDest *)v107);
          goto LABEL_28;
        }
        CInputDest::SetEmpty((CInputDest *)v107);
      }
      if ( !LODWORD(v98[0]) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v26) = 3;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v26,
            6,
            30,
            (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
        }
        v73 = 13LL;
        goto LABEL_114;
      }
      if ( (unsigned int)IsPointerPromotedMouseMessage(ButtonMessage, (_DWORD *)(*((_QWORD *)v2 + 1) + 104LL)) )
      {
        v28 = 1;
        if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v27 + 132), v98) )
          goto LABEL_88;
      }
      else
      {
        v28 = 0;
      }
      v29 = LOWORD(v78.x) | (LOWORD(v78.y) << 16);
      ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick((__int64)v98, *((_DWORD *)v2 + 8) == 2);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 922, 1, 1) )
      {
        if ( v28
          && !(unsigned __int8)anonymous_namespace_::ValidateUIPI(
                                 *(_QWORD *)(*((_QWORD *)v2 + 1) + 132LL),
                                 (char *)this + 3568) )
        {
          goto LABEL_88;
        }
        v106[0] = v98[0];
        v106[2] = v98[2];
        v106[1] = v98[1];
        v106[4] = v98[4];
        v106[3] = v98[3];
        v106[6] = v99;
        v106[5] = v98[5];
        if ( *((_DWORD *)v2 + 8) == 1 )
        {
          v75 = *((_DWORD *)v2 + 7);
          if ( !v75 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, v30, v31, v32);
            v75 = *((_DWORD *)v2 + 7);
          }
          *((_DWORD *)this + 891) |= v75;
          CInputDest::operator=(v98, (char *)this + 3568);
        }
        else
        {
          v45 = CMouseProcessor::HandleCapture_BreakHasMouseOwner(
                  (__int64)this,
                  (CInputDest *)v108,
                  (CInputDest *)v98,
                  (__int64)v2);
          CInputDest::operator=(v98, v45);
          CInputDest::SetEmpty((CInputDest *)v108);
        }
        if ( !LODWORD(v98[0]) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v46, v48, v49);
        ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
          (unsigned int)v98,
          (unsigned int)v106,
          v79.x,
          v78.x,
          (__int64)&v78);
        v29 = LOWORD(v78.x) | (LOWORD(v78.y) << 16);
      }
      else if ( *((_DWORD *)v2 + 8) == 1 )
      {
        if ( !CMouseProcessor::HandleCapture_MakeNoMouseOwner(
                this,
                (const struct CInputDest *)v98,
                v2,
                v29,
                v79,
                ButtonMessage) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v30) = 3;
            WPP_RECORDER_SF_(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v30,
              6,
              31,
              (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
          }
          v73 = 17LL;
          goto LABEL_114;
        }
      }
      else
      {
        v74 = *((_DWORD *)v2 + 7);
        if ( !v74 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, v30, v31, v32);
          v74 = *((_DWORD *)v2 + 7);
        }
        *((_DWORD *)this + 891) &= ~v74;
      }
      v33 = *((_DWORD *)v2 + 8) == 2;
      CMouseProcessor::CButtonEvent::GetVKey(v2, v30, v31, v32);
      v34 = CInputDest::GetThreadInfo((CInputDest *)v98);
      UpdateAsyncKeyState(*((_QWORD *)v34 + 54), v35, v33);
      if ( *((_DWORD *)v2 + 8) == 1 )
      {
        v91[3] = v99;
        v37 = *((_QWORD *)v2 + 1);
        v94 = 0;
        v92 = 4;
        v38 = *(_QWORD *)(v37 + 8);
        LODWORD(v81) = (__int16)v29;
        HIDWORD(v81) = SWORD1(v29);
        v93 = v81;
        v91[4] = v38;
        InputExtensibilityCallout::CoreMsgSendMessage(v38, 6);
      }
      if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 112LL) & 0x100) != 0
        || CInputDest::ShouldSkipForegroundActivation((CInputDest *)v98) )
      {
        v40 = 1;
        goto LABEL_23;
      }
      v40 = 0;
      if ( CMouseProcessor::UpdateForegroundForInput(this, (struct CInputDest *)v98, v2, v39) )
      {
LABEL_23:
        if ( !LODWORD(v98[0]) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_106:
            v73 = 18LL;
            goto LABEL_114;
          }
          v76 = 33;
LABEL_105:
          LOBYTE(v36) = 3;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v36,
            6,
            v76,
            (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
          goto LABEL_106;
        }
        if ( v28 )
        {
          PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(v98, 2LL);
          if ( PtiFromInputDest )
          {
            if ( (*(_DWORD *)(PtiFromInputDest + 488) & 1) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_106;
              v76 = 34;
              goto LABEL_105;
            }
          }
        }
        if ( !(unsigned __int8)anonymous_namespace_::InMouseRawInputMode(v98, 1LL, 1LL) )
        {
          v91[0] = v40;
          v91[1] = v29;
          v91[2] = 0LL;
          v44 = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v2, v41, v42, v43);
          if ( (unsigned int)CMouseProcessor::ForwardInputToISM(
                               (__int64)this,
                               v98,
                               v2,
                               (const struct CMouseProcessor::InputDeliveryContext *)v91,
                               &v79,
                               0,
                               ButtonMessage,
                               v44) == 1 )
            CMouseProcessor::DeliverMouseButtonToInputDest(
              this,
              v2,
              (const struct CInputDest *)v98,
              (const struct CMouseProcessor::InputDeliveryContext *)v91);
          goto LABEL_28;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v41) = 3;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v41,
            6,
            35,
            (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
        }
        v73 = 12LL;
LABEL_114:
        InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), v73);
LABEL_28:
        CInputDest::SetEmpty((CInputDest *)v98);
        return;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v36) = 3;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v36,
          6,
          32,
          (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
      }
LABEL_88:
      v73 = 10LL;
      goto LABEL_114;
    }
    if ( ButtonMessage == 513 )
    {
      if ( *((_BYTE *)this + 3556) )
      {
        v53 = 0;
      }
      else
      {
        v53 = 1;
        *((_DWORD *)this + 890) = *(_DWORD *)(*((_QWORD *)v2 + 1) + 80LL);
      }
      *((_BYTE *)this + 3556) = v53;
      v54 = v53;
    }
    else
    {
      if ( ButtonMessage != 514 )
        goto LABEL_8;
      v55 = *((_BYTE *)this + 3556);
      if ( v55 )
      {
        v11 = *(_DWORD *)(*((_QWORD *)v2 + 1) + 80LL) - *((_DWORD *)this + 890);
        if ( v11 <= dword_1C0245200 )
        {
          *((_BYTE *)this + 3556) = 0;
          v55 = 0;
        }
        if ( v55 )
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
              (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
          }
          v50 = 16LL;
          goto LABEL_42;
        }
      }
      v54 = 1;
    }
    if ( v54 )
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
      (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
  }
}
