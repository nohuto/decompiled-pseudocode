/*
 * XREFs of _UserIsCurrentThreadDesktopComposed@0 @ 0xA540E
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

int __stdcall UserIsCurrentThreadDesktopComposed()
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  return IsThreadDesktopComposed(ThreadWin32Thread);
}
