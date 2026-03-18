/*
 * XREFs of ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C005FCCC
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01C32A0 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 * Callees:
 *     ApiSetEditionReportMouseBreakToAccessibility @ 0x1C005D580 (ApiSetEditionReportMouseBreakToAccessibility.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C005D670 (ApiSetEditionHandleHungWindow.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C005FBE4 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C005FCA0 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C005FF5C (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C005FF98 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ApiSetEditionPostInputMessage @ 0x1C0060544 (ApiSetEditionPostInputMessage.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0062B4C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C00646B4 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C0069B84 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0071838 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0071A08 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::DeliverMouseButtonToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2,
        const struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  unsigned int ButtonMessage; // r14d
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  bool v10; // al
  __int64 v11; // r8
  BOOL v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // r12d
  bool v17; // al
  __int64 v18; // r8
  __int64 v19; // r13
  bool v20; // zf
  __int64 v21; // rsi
  int MessageWParamInfo; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // r9d
  int v27; // eax
  int v28; // edx
  int v29; // edx
  int v30; // [rsp+60h] [rbp-29h]
  __int64 v31; // [rsp+70h] [rbp-19h] BYREF
  int v32; // [rsp+78h] [rbp-11h]
  _BYTE v33[8]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v34; // [rsp+88h] [rbp-1h] BYREF
  __int64 v35; // [rsp+90h] [rbp+7h]
  _QWORD v36[9]; // [rsp+98h] [rbp+Fh] BYREF

  if ( *(_DWORD *)a3 )
  {
    if ( !CMouseProcessor::BufferInputDestinedForContainer(this, a2, a3) )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v33);
      ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
      CMouseProcessor::PostPendingMouseMoveToInputDest(this, a3);
      DelegateThreadInfo = CInputDest::GetDelegateThreadInfo(a3);
      if ( DelegateThreadInfo )
        CMouseProcessor::PostPendingMouseMove(this, *((struct tagQ **)DelegateThreadInfo + 53));
      v10 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
      v11 = *((_QWORD *)a2 + 1);
      v12 = v10;
      v13 = *((_DWORD *)a3 + 26);
      v14 = 2 * v12;
      v15 = v14 | 4;
      if ( !*(_BYTE *)a4 )
        v15 = v14;
      v16 = v15 | 0x40;
      v34 = *(_QWORD *)(v11 + 132);
      if ( (v13 & 4) == 0 )
        v16 = v15;
      v36[0] = v11;
      v17 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
      v19 = v18 + 104;
      v36[2] = 0LL;
      v20 = *((_DWORD *)a3 + 23) == 2;
      v36[1] = (unsigned __int64)&v34 & -(__int64)v17;
      v35 = *(unsigned int *)(v18 + 40);
      v31 = *(_QWORD *)(v18 + 88);
      v30 = *(_DWORD *)(v18 + 80);
      if ( v20 )
        v21 = *((_QWORD *)a3 + 10);
      else
        LODWORD(v21) = 0;
      MessageWParamInfo = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
      ApiSetEditionPostInputMessage(
        (_DWORD)a3,
        v21,
        ButtonMessage,
        MessageWParamInfo,
        *((_QWORD *)a4 + 1),
        v30,
        v31,
        v35,
        v16,
        v19,
        (__int64)v36);
      if ( *((_DWORD *)a2 + 8) == 2
        && (v24 = *((_QWORD *)a2 + 1),
            v25 = *((_DWORD *)a2 + 6),
            v26 = *(_DWORD *)(v24 + 112),
            v27 = *(_DWORD *)(v24 + 140),
            v31 = *(_QWORD *)(v24 + 132),
            v32 = v27,
            !(unsigned int)ApiSetEditionReportMouseBreakToAccessibility((__int64)a3, v25, &v31, (v26 >> 7) & 1)) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v28) = 3;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v28,
            6,
            36,
            (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
        }
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v33);
      }
      else
      {
        if ( ButtonMessage == 513 )
        {
          if ( !*(_DWORD *)a3 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
          ApiSetEditionHandleHungWindow((__int64)a3);
        }
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v33);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v29) = 4;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v29,
            6,
            37,
            (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
        }
      }
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  }
}
