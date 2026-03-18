/*
 * XREFs of _NtUserEndMenu@0 @ 0xD4B30
 * Callers:
 *     <none>
 * Callees:
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _GetMenuStateWindow@4 @ 0x1974A5 (_GetMenuStateWindow@4.c)
 */

int __stdcall NtUserEndMenu()
{
  int MenuStateWindow; // eax
  int v2; // edx

  EnterCrit(0, 1);
  if ( *(_DWORD *)(_gptiCurrent + 328) )
  {
    MenuStateWindow = GetMenuStateWindow(*(_DWORD *)(_gptiCurrent + 328));
    if ( MenuStateWindow )
      _PostMessage(MenuStateWindow, 499, 0, 0);
    else
      *(_DWORD *)(v2 + 4) &= ~4u;
  }
  UserSessionSwitchLeaveCrit();
  return 1;
}
