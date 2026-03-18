/*
 * XREFs of __DeregisterShellHookWindow@4 @ 0x821A4
 * Callers:
 *     _NtUserCallHwndParamLock@12 @ 0x134DE (_NtUserCallHwndParamLock@12.c)
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 *     _NtUserCallTwoParam@12 @ 0x7FA30 (_NtUserCallTwoParam@12.c)
 *     _NtUserCallHwnd@8 @ 0x80A3A (_NtUserCallHwnd@8.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 *     _NtUserCallHwndSafe@8 @ 0x99D78 (_NtUserCallHwndSafe@8.c)
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 *     _NtUserCallHwndOpt@8 @ 0xE81A0 (_NtUserCallHwndOpt@8.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     ?VWPLRemoveBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@HPAK@Z @ 0x6FCFE (-VWPLRemoveBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@HPAK@Z.c)
 */

int __stdcall _DeregisterShellHookWindow(struct tagVWPL **a1)
{
  struct tagVWPL *v1; // ecx
  int v3; // [esp+0h] [ebp-4h]
  unsigned int *savedregs; // [esp+4h] [ebp+0h]

  v1 = a1[3];
  if ( !v1 )
    return 0;
  if ( VWPLRemoveBase((_DWORD **)(*((_DWORD *)v1 + 1) + 120), a1, *((_DWORD *)v1 + 1), 0, v3, savedregs) )
    SetOrClrWF(0, (int)a1, 0x740u, 1);
  return 1;
}
