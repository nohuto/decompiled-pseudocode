/*
 * XREFs of UserIsCurrentThreadDesktopComposed @ 0x1C00D7230
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     IsThreadDesktopComposed @ 0x1C00D7258 (IsThreadDesktopComposed.c)
 */

__int64 UserIsCurrentThreadDesktopComposed()
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return IsThreadDesktopComposed(ThreadWin32Thread);
}
