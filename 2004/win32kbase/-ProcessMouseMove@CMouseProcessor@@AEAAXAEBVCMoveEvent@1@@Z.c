/*
 * XREFs of ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0071D64
 * Callers:
 *     ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C00701A0 (-ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     PhysicalToLogicalDPIPoint @ 0x1C0011B80 (PhysicalToLogicalDPIPoint.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C0046968 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     ?AnalyzeNewMousePosition@CMouseProcessor@@AEBA?AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z @ 0x1C0049F10 (-AnalyzeNewMousePosition@CMouseProcessor@@AEBA-AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0056998 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C0058DAC (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C0069034 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069090 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C00693D8 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     IsPointerPromotedMouseMessage @ 0x1C0069540 (IsPointerPromotedMouseMessage.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C006B6FC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C006BA8C (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C006DA78 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C006E208 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C006E880 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C006F05C (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00708C0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ProcessMouseMove(CMouseProcessor *this, const struct CMouseProcessor::CMoveEvent *a2)
{
  const struct CMouseProcessor::CMoveEvent *v2; // rbx
  char v4; // r14
  int v5; // edx
  int v6; // eax
  int v7; // esi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // esi
  __int64 v13; // r10
  int v14; // r11d
  int v15; // edx
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int DpiAwarenessContext; // eax
  int v23; // edx
  unsigned int v24; // edx
  int v25; // edx
  __int64 PtiFromInputDest; // rax
  int v27; // edx
  signed int v28; // esi
  struct tagPOINT *v29; // r9
  int v30; // r9d
  struct tagPOINT v31; // [rsp+40h] [rbp-C0h] BYREF
  struct tagPOINT v32; // [rsp+48h] [rbp-B8h] BYREF
  LONG x; // [rsp+58h] [rbp-A8h] BYREF
  LONG y; // [rsp+5Ch] [rbp-A4h] BYREF
  struct tagPOINT v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  HWND WindowHandle; // [rsp+78h] [rbp-88h] BYREF
  struct tagPOINT v39; // [rsp+80h] [rbp-80h] BYREF
  struct tagPOINT v40; // [rsp+88h] [rbp-78h]
  int v41; // [rsp+90h] [rbp-70h]
  int v42; // [rsp+94h] [rbp-6Ch]
  __int128 v43[8]; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+120h] [rbp+20h] BYREF
  struct tagPOINT *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  LONG *p_y; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  LONG *p_x; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]
  HWND *p_WindowHandle; // [rsp+170h] [rbp+70h]
  __int64 v52; // [rsp+178h] [rbp+78h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      6,
      44,
      (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
  }
  v4 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 112LL) & 0x800) != 0 )
  {
    *((_QWORD *)this + 431) = 0LL;
LABEL_5:
    if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 112LL) & 0x800) == 0
      && anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 1) )
    {
      PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL, v20, v21);
      if ( PtiFromInputDest )
      {
        v28 = *(_DWORD *)(PtiFromInputDest + 340);
        v35 = 0LL;
        if ( v28 < 0 )
          v28 = *(_DWORD *)(*(_QWORD *)(PtiFromInputDest + 416) + 280LL);
        PhysicalToLogicalDPIPoint((__int64)&v35, (__int64)gpsi + 4960, v28, 0LL);
        v32 = v35;
        *(struct tagPOINT *)((char *)this + 68) = v35;
        *((_DWORD *)this + 19) = v28;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = 3;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v27,
          6,
          46,
          (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
      }
      v17 = *((_QWORD *)v2 + 1);
      v18 = 12;
      goto LABEL_25;
    }
    v31 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
    v37 = *((_QWORD *)gpsi + 619);
    CMouseProcessor::MouseHitTest(
      (__int64)this,
      (__int64)v43,
      &v31,
      (__int64)&v37,
      v2,
      _InterlockedCompareExchange((volatile signed __int32 *)this + 922, 1, 1) != 0,
      0LL);
    if ( (unsigned int)dword_1C0246A70 > 4 && tlgKeywordOn((__int64)&dword_1C0246A70, 64LL) )
    {
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v43);
      x = v29[7].x;
      y = v29[6].y;
      v32 = v29[11];
      p_WindowHandle = &WindowHandle;
      p_x = &x;
      p_y = &y;
      v45 = &v32;
      v52 = 8LL;
      v50 = 4LL;
      v48 = 4LL;
      v46 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0246A70,
        (unsigned __int8 *)dword_1C021B715,
        0LL,
        0LL,
        6u,
        &v44);
    }
    if ( !LODWORD(v43[0]) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v5,
          6,
          47,
          (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
      }
      v24 = 13;
      goto LABEL_34;
    }
    if ( v4 )
    {
      DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v43);
      CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(this, (__int64)&v36, DpiAwarenessContext);
      if ( v36 == v31 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v23) = 4;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v23,
            6,
            48,
            (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
        }
        v24 = 11;
        goto LABEL_34;
      }
    }
    v32 = v31;
    v6 = CInputDest::GetDpiAwarenessContext((CInputDest *)v43);
    *(struct tagPOINT *)((char *)this + 68) = v32;
    *((_DWORD *)this + 19) = v6;
    v7 = v6;
    if ( !(unsigned int)IsPointerPromotedMouseMessage(512, (_DWORD *)(*((_QWORD *)v2 + 1) + 104LL))
      || anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 880LL), v43, v8, v9) )
    {
      if ( !CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v2)
        || anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*((_QWORD *)v2 + 1) + 132LL), v43, v10, v11) )
      {
        v39 = v31;
        v42 = 0;
        v40 = v32;
        v41 = v7;
        if ( (unsigned int)CMouseProcessor::ForwardInputToISM(
                             (__int64)this,
                             v43,
                             v2,
                             (const struct CMouseProcessor::InputDeliveryContext *)&v39,
                             &v31,
                             0,
                             512,
                             0LL) == 1 )
          CMouseProcessor::DeliverMouseMoveToInputDest(this, v2, (const struct CInputDest *)v43, &v39, 0LL);
        goto LABEL_13;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
      v30 = 50;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_55:
        v24 = 10;
LABEL_34:
        InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), v24);
LABEL_13:
        CInputDest::SetEmpty((CInputDest *)v43);
        return;
      }
      v30 = 49;
    }
    LOBYTE(v25) = 3;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v25,
      6,
      v30,
      (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
    goto LABEL_55;
  }
  v12 = CMouseProcessor::AnalyzeNewMousePosition(this, (__int64)v2);
  if ( v12 == v14 )
  {
    v4 = v14;
    *((_QWORD *)gpsi + 619) = *(_QWORD *)(v13 + 60);
  }
  else if ( v12 - v14 == v14 )
  {
    *((_QWORD *)gpsi + 620) = *(_QWORD *)(v13 + 52);
    *((_QWORD *)gpsi + 619) = *(_QWORD *)(*((_QWORD *)v2 + 1) + 60LL);
  }
  CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3456, 0, 0);
  v16 = *((_QWORD *)v2 + 1);
  if ( (*(_DWORD *)(v16 + 112) & 0x4000) != 0 )
    CMouseProcessor::InformUMObservers(
      this,
      v2,
      (const struct tagPOINT *)(v16 + 52),
      (const struct tagPOINT *)(v16 + 68));
  if ( v12 )
  {
    *((_QWORD *)this + 431) = *(unsigned int *)(*((_QWORD *)v2 + 1) + 40LL);
    v19 = *((_QWORD *)v2 + 1);
    *((_QWORD *)this + 429) = *(_QWORD *)(v19 + 52);
    *((_QWORD *)this + 430) = *(_QWORD *)(v19 + 60);
    goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 3;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v15,
      6,
      45,
      (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
  }
  v17 = *((_QWORD *)v2 + 1);
  if ( (*(_DWORD *)(v17 + 112) & 0x2000) == 0 )
  {
    v18 = 11;
LABEL_25:
    InputTraceLogging::Mouse::DropMove(*(_QWORD *)(v17 + 88), v18);
  }
}
