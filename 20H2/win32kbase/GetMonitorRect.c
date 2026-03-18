/*
 * XREFs of GetMonitorRect @ 0x1C0031BC4
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C002F2E0 (xxxEnumDisplayMonitors.c)
 *     GetMonitorDC @ 0x1C004D710 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C00A2BEC (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C00BE33C (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 * Callees:
 *     GetMonitorRectForDpiContext @ 0x1C0032208 (GetMonitorRectForDpiContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003265C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 */

_OWORD *__fastcall GetMonitorRect(_OWORD *a1, __int64 a2)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int128 v5; // xmm0
  _OWORD *result; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2
    && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456)
     || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) == 0) )
  {
    CurrentThreadDpiAwarenessContext = 18;
  }
  v5 = *(_OWORD *)GetMonitorRectForDpiContext(v7, a2, CurrentThreadDpiAwarenessContext);
  result = a1;
  *a1 = v5;
  return result;
}
