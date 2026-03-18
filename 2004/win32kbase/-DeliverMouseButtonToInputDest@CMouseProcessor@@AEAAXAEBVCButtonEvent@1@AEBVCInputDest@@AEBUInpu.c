/*
 * XREFs of ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C006B88C
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006C024 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01BD540 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 * Callees:
 *     ApiSetEditionReportMouseBreakToAccessibility @ 0x1C004F51C (ApiSetEditionReportMouseBreakToAccessibility.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C0051558 (ApiSetEditionHandleHungWindow.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C006B7A4 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C006B860 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C006BA8C (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C006BFC0 (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C006BFFC (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C006C95C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     ApiSetEditionPostInputMessage @ 0x1C006CDA4 (ApiSetEditionPostInputMessage.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C006FC64 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C007477C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0074948 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  unsigned int v28; // edx
  unsigned int v29; // r9d
  int v30; // eax
  int v31; // edx
  int v32; // [rsp+60h] [rbp-29h]
  __int64 v33; // [rsp+70h] [rbp-19h] BYREF
  int v34; // [rsp+78h] [rbp-11h]
  _BYTE v35[8]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v36; // [rsp+88h] [rbp-1h] BYREF
  __int64 v37; // [rsp+90h] [rbp+7h]
  _QWORD v38[9]; // [rsp+98h] [rbp+Fh] BYREF

  if ( *(_DWORD *)a3 )
  {
    if ( !CMouseProcessor::BufferInputDestinedForContainer(this, a2, a3) )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v35);
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
      v36 = *(_QWORD *)(v11 + 132);
      if ( (v13 & 4) == 0 )
        v16 = v15;
      v38[0] = v11;
      v17 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
      v19 = v18 + 104;
      v38[2] = 0LL;
      v20 = *((_DWORD *)a3 + 23) == 2;
      v38[1] = (unsigned __int64)&v36 & -(__int64)v17;
      v37 = *(unsigned int *)(v18 + 40);
      v33 = *(_QWORD *)(v18 + 88);
      v32 = *(_DWORD *)(v18 + 80);
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
        v32,
        v33,
        v37,
        v16,
        v19,
        (__int64)v38);
      if ( *((_DWORD *)a2 + 8) == 2
        && (v27 = *((_QWORD *)a2 + 1),
            v28 = *((_DWORD *)a2 + 6),
            v29 = *(_DWORD *)(v27 + 112),
            v30 = *(_DWORD *)(v27 + 140),
            v33 = *(_QWORD *)(v27 + 132),
            v34 = v30,
            !(unsigned int)ApiSetEditionReportMouseBreakToAccessibility((__int64)a3, v28, &v33, (v29 >> 7) & 1)) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v23) = 3;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v23,
            6,
            36,
            (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
        }
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v35);
      }
      else
      {
        if ( ButtonMessage == 513 )
        {
          if ( !*(_DWORD *)a3 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25, v26);
          ApiSetEditionHandleHungWindow((__int64)a3);
        }
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v35);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v31) = 4;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v31,
            6,
            37,
            (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
        }
      }
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  }
}
