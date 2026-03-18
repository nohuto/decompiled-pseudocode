/*
 * XREFs of __GetInputDesktop@0 @ 0x1549CC
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     <none>
 */

int __stdcall _GetInputDesktop()
{
  int CurrentProcess; // eax
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0;
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned __int8)ObFindHandleForObject(CurrentProcess, _grpdeskRitInput, 0, 0, &v2) && SetHandleFlag(v2, 1, 1) )
    return v2;
  else
    return 0;
}
