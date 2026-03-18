/*
 * XREFs of ?GetCurrentThreadCompositedDpiContext@@YGKXZ @ 0xB49EE
 * Callers:
 *     _GetMonitorWorkRect@4 @ 0xB498E (_GetMonitorWorkRect@4.c)
 *     _GetMonitorRect@4 @ 0xB49BE (_GetMonitorRect@4.c)
 *     _GetMonitorMenuRect@4 @ 0x1B71FD (_GetMonitorMenuRect@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 */

int __stdcall GetCurrentThreadCompositedDpiContext()
{
  int CurrentThreadDpiAwarenessContext; // esi
  PKTHREAD CurrentThread; // eax
  PKTHREAD v3; // eax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 248) )
      return 18;
    v3 = KeGetCurrentThread();
    if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v3) + 248) + 4) + 32) & 1) == 0 )
      return 18;
  }
  return CurrentThreadDpiAwarenessContext;
}
