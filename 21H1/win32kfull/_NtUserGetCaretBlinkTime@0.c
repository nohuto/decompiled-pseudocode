/*
 * XREFs of _NtUserGetCaretBlinkTime@0 @ 0xA23AC
 * Callers:
 *     <none>
 * Callees:
 *     _CheckGrantedAccess@8 @ 0x2A3D4 (_CheckGrantedAccess@8.c)
 */

int __stdcall NtUserGetCaretBlinkTime()
{
  int v0; // esi
  int CurrentProcessWin32Process; // eax

  v0 = 0;
  EnterSharedCrit(0, 1);
  if ( *(_DWORD *)PsGetCurrentProcessWin32Process() == _gpepCSRSS
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(),
        CheckGrantedAccess(*(_DWORD *)(CurrentProcessWin32Process + 364), 2u)) )
  {
    v0 = *(_DWORD *)(_gpsi + 4452);
  }
  UserSessionSwitchLeaveCrit();
  return v0;
}
