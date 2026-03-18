/*
 * XREFs of _xxxLoadUserApiHook@0 @ 0x16798
 * Callers:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     _xxxLoadHmodIndex@4 @ 0x16802 (_xxxLoadHmodIndex@4.c)
 */

BOOL __stdcall xxxLoadUserApiHook()
{
  int CurrentProcess; // eax
  BOOL result; // eax

  if ( gihmodUserApiHook < 0 )
    return 0;
  CurrentProcess = PsGetCurrentProcess();
  if ( PsIsProtectedProcess(CurrentProcess) || PsGetWin32KFilterSet() == 5 )
    return 0;
  result = 1;
  if ( ((1 << gihmodUserApiHook) & *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 224)) == 0 )
  {
    if ( (*(_DWORD *)(_gptiCurrent + 264) & 0x1000000D) == 0 )
      return xxxLoadHmodIndex(gihmodUserApiHook) != 0;
    return 0;
  }
  return result;
}
