/*
 * XREFs of _NtUserSetMagnificationDesktopMagnifierOffsetsDWMUpdated@4 @ 0x169842
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated@12 @ 0x1D1CF2 (_DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated@12.c)
 */

BOOL __stdcall NtUserSetMagnificationDesktopMagnifierOffsetsDWMUpdated(int a1)
{
  PKTHREAD CurrentThread; // eax
  void *v2; // eax

  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  v2 = (void *)ReferenceDwmApiPort();
  return DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated(v2, a1) >= 0;
}
