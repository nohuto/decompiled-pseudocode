/*
 * XREFs of __DoUninitMessagePumpHook@0 @ 0x152739
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     <none>
 */

int __stdcall _DoUninitMessagePumpHook()
{
  int v0; // ecx
  int v1; // eax

  v0 = *(_DWORD *)(_gptiCurrent + 244);
  v1 = *(_DWORD *)(v0 + 20);
  if ( v1 <= 0 )
    return 0;
  *(_DWORD *)(v0 + 20) = v1 - 1;
  return 1;
}
