/*
 * XREFs of _CallerCanSeeImmersiveWindows@0 @ 0x2A4A8
 * Callers:
 *     _NtUserBuildHwndList@32 @ 0x2A632 (_NtUserBuildHwndList@32.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall CallerCanSeeImmersiveWindows()
{
  _DWORD *CurrentProcessWin32Process; // esi
  int CurrentProcess; // eax
  BOOL result; // eax

  CurrentProcessWin32Process = (_DWORD *)PsGetCurrentProcessWin32Process();
  result = 1;
  if ( (CurrentProcessWin32Process[116] & 0x30) == 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    if ( !IsProcessDwm(CurrentProcess)
      && (int)CurrentProcessWin32Process[2] >= 0
      && *CurrentProcessWin32Process != _gpepCSRSS
      && (CurrentProcessWin32Process[116] & 0x800) == 0 )
    {
      return 0;
    }
  }
  return result;
}
