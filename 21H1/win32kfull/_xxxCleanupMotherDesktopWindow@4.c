/*
 * XREFs of _xxxCleanupMotherDesktopWindow@4 @ 0xD4B02
 * Callers:
 *     ?DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0x7CC38 (-DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     _xxxCreateWindowStation@40 @ 0x8199E (_xxxCreateWindowStation@40.c)
 *     ?xxxHandleDesktopMessages@@YGHPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0xA18FA (-xxxHandleDesktopMessages@@YGHPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     _xxxDesktopThread@4 @ 0xE3DD4 (_xxxDesktopThread@4.c)
 * Callees:
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 */

int __thiscall xxxCleanupMotherDesktopWindow(_DWORD *this)
{
  _DWORD *v1; // esi
  struct tagVWPL **v2; // edi
  int result; // eax

  v1 = this + 1;
  v2 = (struct tagVWPL **)this[1];
  SetVisible(v2, 0);
  result = HMAssignmentUnlock(v1);
  if ( result )
    return xxxDestroyWindow(v2);
  return result;
}
