/*
 * XREFs of _ZapActiveAndFocus@0 @ 0x1A6BDA
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     _zzzInputFocusLostWindowEvent@8 @ 0x1768E (_zzzInputFocusLostWindowEvent@8.c)
 */

int __stdcall ZapActiveAndFocus()
{
  int v0; // edi
  int v1; // eax

  v0 = *(_DWORD *)(_gptiCurrent + 236);
  HMAssignmentUnlock(v0 + 64);
  v1 = HMAssignmentUnlock(v0 + 60);
  if ( v1 && v0 == _gpqForeground )
    zzzInputFocusLostWindowEvent(v1, 11);
  return 1;
}
