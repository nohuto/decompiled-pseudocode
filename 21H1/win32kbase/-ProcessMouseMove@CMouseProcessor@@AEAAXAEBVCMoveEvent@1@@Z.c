/*
 * XREFs of ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0066094
 * Callers:
 *     ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0064E70 (-ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C003993C (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     ?AnalyzeNewMousePosition@CMouseProcessor@@AEBA?AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z @ 0x1C003CD30 (-AnalyzeNewMousePosition@CMouseProcessor@@AEBA-AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0048FC8 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C004B084 (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C005F524 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C005F894 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C0062758 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0063334 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0064EF0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0069A84 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069AA8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C0069ADC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C0069B84 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     IsPointerPromotedMouseMessage @ 0x1C0069BA8 (IsPointerPromotedMouseMessage.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C006C050 (PhysicalToLogicalDPIPoint.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C006E240 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ProcessMouseMove(CMouseProcessor *this, const struct CMouseProcessor::CMoveEvent *a2)
{
  const struct CMouseProcessor::CMoveEvent *v2; // rbx
  char v4; // r14
  int v5; // edx
  __int64 v6; // r8
  unsigned int v7; // eax
  unsigned int v8; // esi
  int v9; // esi
  __int64 v10; // r10
  int v11; // r11d
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned int DpiAwarenessContext; // eax
  int v18; // edx
  unsigned int v19; // edx
  int v20; // edx
  __int64 PtiFromInputDest; // rax
  int v22; // edx
  int v23; // esi
  struct tagPOINT *v24; // r9
  int v25; // r9d
  struct tagPOINT v26; // [rsp+40h] [rbp-C0h] BYREF
  struct tagPOINT v27; // [rsp+48h] [rbp-B8h] BYREF
  LONG x; // [rsp+58h] [rbp-A8h] BYREF
  LONG y; // [rsp+5Ch] [rbp-A4h] BYREF
  struct tagPOINT v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  HWND WindowHandle; // [rsp+78h] [rbp-88h] BYREF
  struct tagPOINT v34; // [rsp+80h] [rbp-80h] BYREF
  struct tagPOINT v35; // [rsp+88h] [rbp-78h]
  unsigned int v36; // [rsp+90h] [rbp-70h]
  int v37; // [rsp+94h] [rbp-6Ch]
  _DWORD v38[32]; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+120h] [rbp+20h] BYREF
  struct tagPOINT *v40; // [rsp+140h] [rbp+40h]
  __int64 v41; // [rsp+148h] [rbp+48h]
  LONG *p_y; // [rsp+150h] [rbp+50h]
  __int64 v43; // [rsp+158h] [rbp+58h]
  LONG *p_x; // [rsp+160h] [rbp+60h]
  __int64 v45; // [rsp+168h] [rbp+68h]
  HWND *p_WindowHandle; // [rsp+170h] [rbp+70h]
  __int64 v47; // [rsp+178h] [rbp+78h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      6,
      44,
      (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
  }
  v4 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 112LL) & 0x800) != 0 )
  {
    *((_QWORD *)this + 440) = 0LL;
LABEL_5:
    if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 112LL) & 0x800) == 0
      && anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 1) )
    {
      PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1);
      if ( PtiFromInputDest )
      {
        v23 = *(_DWORD *)(PtiFromInputDest + 340);
        v30 = 0LL;
        if ( v23 < 0 )
          v23 = *(_DWORD *)(*(_QWORD *)(PtiFromInputDest + 416) + 280LL);
        PhysicalToLogicalDPIPoint(&v30, (char *)gpsi + 4960, (unsigned int)v23, 0LL);
        v27 = v30;
        *(struct tagPOINT *)((char *)this + 68) = v30;
        *((_DWORD *)this + 19) = v23;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 3;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v22,
          6,
          46,
          (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
      }
      v14 = *((_QWORD *)v2 + 1);
      v15 = 12;
      goto LABEL_25;
    }
    v26 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
    v32 = *((_QWORD *)gpsi + 619);
    _InterlockedCompareExchange((volatile signed __int32 *)this + 940, 1, 1);
    CMouseProcessor::MouseHitTest(this, v38, &v26, &v32, v2);
    if ( (unsigned int)dword_1C024C960 > 4
      && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 64LL, v6, *((_QWORD *)v2 + 1)) )
    {
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v38);
      x = v24[7].x;
      y = v24[6].y;
      v27 = v24[11];
      p_WindowHandle = &WindowHandle;
      p_x = &x;
      p_y = &y;
      v40 = &v27;
      v47 = 8LL;
      v45 = 4LL;
      v43 = 4LL;
      v41 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C024C960,
        (unsigned __int8 *)dword_1C0221285,
        0LL,
        0LL,
        6u,
        &v39);
    }
    if ( !v38[0] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v5,
          6,
          47,
          (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
      }
      v19 = 13;
      goto LABEL_34;
    }
    if ( v4 )
    {
      DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v38);
      CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(this, (__int64)&v31, DpiAwarenessContext);
      if ( v31 == v26 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v18) = 4;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v18,
            6,
            48,
            (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
        }
        v19 = 11;
        goto LABEL_34;
      }
    }
    v27 = v26;
    v7 = CInputDest::GetDpiAwarenessContext((CInputDest *)v38);
    *(struct tagPOINT *)((char *)this + 68) = v27;
    *((_DWORD *)this + 19) = v7;
    v8 = v7;
    if ( !(unsigned int)IsPointerPromotedMouseMessage(512LL, *((_QWORD *)v2 + 1) + 104LL)
      || anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 880LL), v38) )
    {
      if ( !CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v2)
        || anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*((_QWORD *)v2 + 1) + 132LL), v38) )
      {
        v34 = v26;
        v37 = 0;
        v35 = v27;
        v36 = v8;
        if ( (unsigned int)CMouseProcessor::ForwardInputToISM(this, v38, v2, &v34, &v26, 0, 512LL, 0LL) == 1 )
          CMouseProcessor::DeliverMouseMoveToInputDest(this, v2, (const struct CInputDest *)v38, &v34, 0LL);
        goto LABEL_13;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
      v25 = 50;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_55:
        v19 = 10;
LABEL_34:
        InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), v19);
LABEL_13:
        CInputDest::SetEmpty((CInputDest *)v38);
        return;
      }
      v25 = 49;
    }
    LOBYTE(v20) = 3;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v20,
      6,
      v25,
      (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
    goto LABEL_55;
  }
  v9 = CMouseProcessor::AnalyzeNewMousePosition(this, (__int64)v2);
  if ( v9 == v11 )
  {
    v4 = v11;
    *((_QWORD *)gpsi + 619) = *(_QWORD *)(v10 + 60);
  }
  else if ( v9 - v11 == v11 )
  {
    *((_QWORD *)gpsi + 620) = *(_QWORD *)(v10 + 52);
    *((_QWORD *)gpsi + 619) = *(_QWORD *)(*((_QWORD *)v2 + 1) + 60LL);
  }
  CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3528, 0, 0);
  v13 = *((_QWORD *)v2 + 1);
  if ( (*(_DWORD *)(v13 + 112) & 0x4000) != 0 )
    CMouseProcessor::InformUMObservers(
      this,
      v2,
      (const struct tagPOINT *)(v13 + 52),
      (const struct tagPOINT *)(v13 + 68));
  if ( v9 )
  {
    *((_QWORD *)this + 440) = *(unsigned int *)(*((_QWORD *)v2 + 1) + 40LL);
    v16 = *((_QWORD *)v2 + 1);
    *((_QWORD *)this + 438) = *(_QWORD *)(v16 + 52);
    *((_QWORD *)this + 439) = *(_QWORD *)(v16 + 60);
    goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 3;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v12,
      6,
      45,
      (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
  }
  v14 = *((_QWORD *)v2 + 1);
  if ( (*(_DWORD *)(v14 + 112) & 0x2000) == 0 )
  {
    v15 = 11;
LABEL_25:
    InputTraceLogging::Mouse::DropMove(*(_QWORD *)(v14 + 88), v15);
  }
}
