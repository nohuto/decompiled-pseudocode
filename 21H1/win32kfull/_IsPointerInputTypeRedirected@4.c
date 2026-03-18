/*
 * XREFs of _IsPointerInputTypeRedirected@4 @ 0x15BB03
 * Callers:
 *     <none>
 * Callees:
 *     _IsPointerInputRedirected@16 @ 0x15BAA0 (_IsPointerInputRedirected@16.c)
 */

BOOL __stdcall IsPointerInputTypeRedirected(int a1)
{
  int CurrentProcessWin32Process; // eax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  return IsPointerInputRedirected(CurrentProcessWin32Process, *(int **)(_grpdeskRitInput + 4), a1, 0);
}
