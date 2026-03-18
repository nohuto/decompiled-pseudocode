/*
 * XREFs of PhysicalToLogicalDPIPoint @ 0x1C0011B80
 * Callers:
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0011690 (TransformPointBetweenCoordinateSpaces.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C0011AB0 (LogicalCursorPosFromDpiAwarenessContext.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C0046968 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00472D0 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0071D64 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     GetMonitorRectForDpiContext @ 0x1C0011DC8 (GetMonitorRectForDpiContext.c)
 *     EngMulDiv @ 0x1C0011F10 (EngMulDiv.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0083EF8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PhysicalToLogicalDPIPoint(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  int v8; // ebp
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r14
  unsigned __int16 v13; // bp
  __int64 v14; // rbx
  __int64 *MonitorRectForDpiContext; // rax
  INT v16; // esi
  __int64 v17; // rdi
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v19[40]; // [rsp+30h] [rbp-28h] BYREF

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v8 = CurrentThreadDpiAwarenessContext & 0xF;
  if ( v8 == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) == 0
    || (!qword_1C0252B18 ? (v10 = -1073741637) : (v10 = qword_1C0252B18()), v10 < 0) )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    return 0LL;
  }
  else
  {
    if ( a4 )
      v11 = *a4;
    else
      v11 = 0LL;
    if ( !v11 )
    {
      if ( qword_1C0252B20 )
        v11 = qword_1C0252B20(*(_QWORD *)a2, 2LL, 18LL);
      else
        v11 = 0LL;
    }
    if ( a4 )
      *a4 = v11;
    if ( v8 == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) != 0 )
    {
      v12 = *(_QWORD *)(v11 + 40);
      v13 = *(_WORD *)(v12 + 68);
    }
    else
    {
      v12 = *(_QWORD *)(v11 + 40);
      v13 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    }
    v14 = *(_QWORD *)GetMonitorRectForDpiContext(&v18, v11, 18LL);
    v18 = v14;
    MonitorRectForDpiContext = (__int64 *)GetMonitorRectForDpiContext(v19, v11, CurrentThreadDpiAwarenessContext);
    v16 = *(unsigned __int16 *)(v12 + 64);
    v17 = *MonitorRectForDpiContext;
    *(_DWORD *)a1 = v17 + EngMulDiv(*(_DWORD *)a2 - v14, v13, v16);
    *(_DWORD *)(a1 + 4) = HIDWORD(v17) + EngMulDiv(*(_DWORD *)(a2 + 4) - HIDWORD(v18), v13, v16);
    return 1LL;
  }
}
