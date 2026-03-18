/*
 * XREFs of ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0051710
 * Callers:
 *     ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C00A08C0 (-ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     IsPointerPromotedMouseMessage @ 0x1C002C8BC (IsPointerPromotedMouseMessage.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C002EA6C (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C002EDFC (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0031FC0 (PhysicalToLogicalDPIPoint.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C003297C (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C00330E0 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C003374C (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0033BCC (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C00340E0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C00A5EC4 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C00A7D3C (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     ?AnalyzeNewMousePosition@CMouseProcessor@@AEBA?AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z @ 0x1C00AB220 (-AnalyzeNewMousePosition@CMouseProcessor@@AEBA-AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C00AF7D8 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00B69A8 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C00B8A6C (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ProcessMouseMove(CMouseProcessor *this, const struct CMouseProcessor::CMoveEvent *a2)
{
  const struct CMouseProcessor::CMoveEvent *v2; // rbx
  char v4; // r14
  int v5; // edx
  __int64 v6; // r8
  int DpiAwarenessContext; // eax
  int v8; // esi
  int v9; // esi
  __int64 v10; // r10
  int v11; // r11d
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // edx
  __int64 v20; // rdx
  int v21; // edx
  __int64 PtiFromInputDest; // rax
  int v23; // edx
  signed int v24; // esi
  struct tagPOINT *v25; // r9
  int v26; // r9d
  struct tagPOINT v27; // [rsp+40h] [rbp-C0h] BYREF
  struct tagPOINT v28; // [rsp+48h] [rbp-B8h] BYREF
  LONG x; // [rsp+58h] [rbp-A8h] BYREF
  LONG y; // [rsp+5Ch] [rbp-A4h] BYREF
  struct tagPOINT v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  HWND WindowHandle; // [rsp+78h] [rbp-88h] BYREF
  struct tagPOINT v35; // [rsp+80h] [rbp-80h] BYREF
  struct tagPOINT v36; // [rsp+88h] [rbp-78h]
  int v37; // [rsp+90h] [rbp-70h]
  int v38; // [rsp+94h] [rbp-6Ch]
  __int128 v39[8]; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+120h] [rbp+20h] BYREF
  struct tagPOINT *v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  LONG *p_y; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  LONG *p_x; // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  HWND *p_WindowHandle; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      6,
      44,
      (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
  }
  v4 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 112LL) & 0x800) != 0 )
  {
    *((_QWORD *)this + 431) = 0LL;
LABEL_5:
    if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 112LL) & 0x800) == 0
      && anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 1) )
    {
      PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL, v17, v18);
      if ( PtiFromInputDest )
      {
        v24 = *(_DWORD *)(PtiFromInputDest + 340);
        v31 = 0LL;
        if ( v24 < 0 )
          v24 = *(_DWORD *)(*(_QWORD *)(PtiFromInputDest + 424) + 280LL);
        PhysicalToLogicalDPIPoint((__int64)&v31, (__int64)gpsi + 4960, v24, 0LL);
        v28 = v31;
        *(struct tagPOINT *)((char *)this + 68) = v31;
        *((_DWORD *)this + 19) = v24;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = 3;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v23,
          6,
          46,
          (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
      }
      v14 = *((_QWORD *)v2 + 1);
      v15 = 12LL;
      goto LABEL_25;
    }
    v27 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
    v33 = *((_QWORD *)gpsi + 619);
    CMouseProcessor::MouseHitTest(
      (__int64)this,
      (__int64)v39,
      &v27,
      (__int64)&v33,
      v2,
      _InterlockedCompareExchange((volatile signed __int32 *)this + 922, 1, 1) != 0,
      0LL);
    if ( (unsigned int)dword_1C0244A70 > 4
      && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 64LL, v6, *((_QWORD *)v2 + 1)) )
    {
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v39);
      x = v25[7].x;
      y = v25[6].y;
      v28 = v25[11];
      p_WindowHandle = &WindowHandle;
      p_x = &x;
      p_y = &y;
      v41 = &v28;
      v48 = 8LL;
      v46 = 4LL;
      v44 = 4LL;
      v42 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C02198A6, 0, 0, 6u, &v40);
    }
    if ( !LODWORD(v39[0]) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v5,
          6,
          47,
          (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
      }
      v20 = 13LL;
      goto LABEL_34;
    }
    if ( v4 )
    {
      CInputDest::GetDpiAwarenessContext((CInputDest *)v39);
      CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(this, (unsigned int)&v32);
      if ( v32 == v27 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 4;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v19,
            6,
            48,
            (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
        }
        v20 = 11LL;
        goto LABEL_34;
      }
    }
    v28 = v27;
    DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v39);
    *(struct tagPOINT *)((char *)this + 68) = v28;
    *((_DWORD *)this + 19) = DpiAwarenessContext;
    v8 = DpiAwarenessContext;
    if ( !(unsigned int)IsPointerPromotedMouseMessage(512, (_DWORD *)(*((_QWORD *)v2 + 1) + 104LL))
      || (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v39) )
    {
      if ( !CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v2)
        || (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*((_QWORD *)v2 + 1) + 132LL), v39) )
      {
        v35 = v27;
        v38 = 0;
        v36 = v28;
        v37 = v8;
        if ( (unsigned int)CMouseProcessor::ForwardInputToISM(
                             (__int64)this,
                             v39,
                             v2,
                             (const struct CMouseProcessor::InputDeliveryContext *)&v35,
                             &v27,
                             0,
                             512,
                             0LL) == 1 )
          CMouseProcessor::DeliverMouseMoveToInputDest(this, v2, (const struct CInputDest *)v39, &v35, 0LL);
        goto LABEL_13;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
      v26 = 50;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_55:
        v20 = 10LL;
LABEL_34:
        InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL), v20);
LABEL_13:
        CInputDest::SetEmpty((CInputDest *)v39);
        return;
      }
      v26 = 49;
    }
    LOBYTE(v21) = 3;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v21,
      6,
      v26,
      (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    goto LABEL_55;
  }
  v9 = CMouseProcessor::AnalyzeNewMousePosition(this, v2);
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
  CMouseProcessor::CMouseRawInput::PostRawMouse((char *)this + 3456, 0LL, 0LL);
  v13 = *((_QWORD *)v2 + 1);
  if ( (*(_DWORD *)(v13 + 112) & 0x4000) != 0 )
    CMouseProcessor::InformUMObservers(
      this,
      v2,
      (const struct tagPOINT *)(v13 + 52),
      (const struct tagPOINT *)(v13 + 68));
  if ( v9 )
  {
    *((_QWORD *)this + 431) = *(unsigned int *)(*((_QWORD *)v2 + 1) + 40LL);
    v16 = *((_QWORD *)v2 + 1);
    *((_QWORD *)this + 429) = *(_QWORD *)(v16 + 52);
    *((_QWORD *)this + 430) = *(_QWORD *)(v16 + 60);
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
      (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
  }
  v14 = *((_QWORD *)v2 + 1);
  if ( (*(_DWORD *)(v14 + 112) & 0x2000) == 0 )
  {
    v15 = 11LL;
LABEL_25:
    InputTraceLogging::Mouse::DropMove(*(_QWORD *)(v14 + 88), v15);
  }
}
