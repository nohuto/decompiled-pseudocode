/*
 * XREFs of ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C006BBD4
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0032DA8 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1C00908A8 (GetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C00A6620 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C006DC9C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetCurrentThreadCompositedDpi(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // bx

  v2 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1, a2) >> 8) & 0x1FF;
  if ( v2
    && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448)
     || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) == 0) )
  {
    return 0;
  }
  return v2;
}
