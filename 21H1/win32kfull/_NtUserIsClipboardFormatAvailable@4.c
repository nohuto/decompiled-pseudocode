/*
 * XREFs of _NtUserIsClipboardFormatAvailable@4 @ 0x1159A
 * Callers:
 *     <none>
 * Callees:
 *     ?FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z @ 0x115FE (-FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96 (-CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ.c)
 */

BOOL __stdcall NtUserIsClipboardFormatAvailable(int a1)
{
  BOOL v1; // esi
  PKTHREAD CurrentThread; // eax
  unsigned int v4; // [esp+0h] [ebp-8h]
  unsigned int v5; // [esp+4h] [ebp-4h]

  v1 = 0;
  EnterSharedCrit(0, 1);
  if ( CheckClipboardAccess() )
  {
    if ( !_gbLockScreenActive )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *(PVOID *)(W32GetThreadWin32Thread(CurrentThread) + 248) != grpdeskLogon )
        v1 = FindClipFormat((struct tagWINDOWSTATION *)1, v4, v5) != 0;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
