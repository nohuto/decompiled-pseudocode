/*
 * XREFs of __SetCaretBlinkTime@4 @ 0x7DA40
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     ?RemoveCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z @ 0x7DBAC (-RemoveCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z.c)
 *     _CheckWinstaAttributeAccess@4 @ 0x7FB22 (_CheckWinstaAttributeAccess@4.c)
 *     ?CreateCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z @ 0xBA7AE (-CreateCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z.c)
 */

int __stdcall _SetCaretBlinkTime(int a1)
{
  struct tagWND *v2; // [esp+0h] [ebp-4h]
  struct tagWND *v3; // [esp+0h] [ebp-4h]
  struct tagQ *savedregs; // [esp+4h] [ebp+0h]
  struct tagQ *savedregsa; // [esp+4h] [ebp+0h]

  if ( !CheckWinstaAttributeAccess(0x10u) || CheckDesktopPolicy(0, 4) )
    return 0;
  *(_DWORD *)(_gpsi + 4452) = a1;
  if ( *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 252) )
  {
    RemoveCaretTimer(v2, savedregs);
    CreateCaretTimer(v3, savedregsa);
  }
  return 1;
}
