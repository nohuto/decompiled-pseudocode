/*
 * XREFs of _NtUserEnableSoftwareCursorForScreenCapture@4 @ 0x1614BE
 * Callers:
 *     <none>
 * Callees:
 *     _ChangeComposableCursor@4 @ 0x143332 (_ChangeComposableCursor@4.c)
 */

int __stdcall NtUserEnableSoftwareCursorForScreenCapture(void *a1)
{
  int v1; // esi
  int CurrentProcess; // eax

  v1 = 0;
  EnterCrit(0, 1);
  CurrentProcess = PsGetCurrentProcess();
  if ( IsProcessDwm(CurrentProcess) )
  {
    if ( a1 != (void *)gbScreenCaptureSoftwareCursorEnabled )
    {
      ChangeComposableCursor(a1);
      gbScreenCaptureSoftwareCursorEnabled = (int)a1;
    }
    v1 = 1;
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
