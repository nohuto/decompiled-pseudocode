/*
 * XREFs of _NtUserSetFullscreenMagnifierOffsetsDWMUpdated@12 @ 0xF2BB6
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated@20 @ 0xF5FCA (_DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated@20.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

BOOL __stdcall NtUserSetFullscreenMagnifierOffsetsDWMUpdated(int a1, float a2, float a3)
{
  PKTHREAD CurrentThread; // eax
  void *v4; // eax

  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  v4 = (void *)ReferenceDwmApiPort();
  return DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated(v4, a1, a2, a3) >= 0;
}
