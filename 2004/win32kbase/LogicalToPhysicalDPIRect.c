/*
 * XREFs of LogicalToPhysicalDPIRect @ 0x1C0011820
 * Callers:
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C001163C (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     NtUserLockCursor @ 0x1C0046100 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C00C63A0 (NtUserClipCursor.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C0011CE8 (ScaleDPIRect.c)
 *     GetMonitorRectForDpiContext @ 0x1C0011DC8 (GetMonitorRectForDpiContext.c)
 *     Is_MonitorFromRectSupported @ 0x1C0011FC8 (Is_MonitorFromRectSupported.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0083EF8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LogicalToPhysicalDPIRect(_OWORD *a1, _OWORD *a2, __int64 a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  int v8; // ebp
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int16 v12; // r12
  unsigned __int16 v13; // si
  __int64 v14; // rbx
  __int64 *MonitorRectForDpiContext; // rax
  _BYTE v16[40]; // [rsp+30h] [rbp-28h] BYREF

  CurrentThreadDpiAwarenessContext = a3;
  if ( !(_DWORD)a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v8 = CurrentThreadDpiAwarenessContext & 0xF;
  if ( v8 == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) == 0
    || (int)Is_MonitorFromRectSupported(a1, a2, a3) < 0 )
  {
    result = 0LL;
    *a1 = *a2;
  }
  else
  {
    if ( a4 )
      v10 = *a4;
    else
      v10 = 0LL;
    if ( !v10 )
    {
      if ( qword_1C0252B40 )
        v10 = qword_1C0252B40(a2, 2LL, CurrentThreadDpiAwarenessContext);
      else
        v10 = 0LL;
    }
    if ( a4 )
      *a4 = v10;
    v11 = *(_QWORD *)(v10 + 40);
    v12 = *(_WORD *)(v11 + 64);
    if ( v8 == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) != 0 )
      v13 = *(_WORD *)(v11 + 68);
    else
      v13 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    v14 = *(_QWORD *)GetMonitorRectForDpiContext(v16, v10, CurrentThreadDpiAwarenessContext);
    MonitorRectForDpiContext = (__int64 *)GetMonitorRectForDpiContext(v16, v10, 18LL);
    ScaleDPIRect((_DWORD)a1, (_DWORD)a2, v12, v13, *MonitorRectForDpiContext, v14);
    return 1LL;
  }
  return result;
}
