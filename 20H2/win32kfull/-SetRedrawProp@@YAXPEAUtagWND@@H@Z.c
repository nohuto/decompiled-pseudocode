/*
 * XREFs of ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C00F3278
 * Callers:
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00F31AC (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     InternalSetProp @ 0x1C00C7238 (InternalSetProp.c)
 *     UserGetGlobalAtomTableOfWindow @ 0x1C00F34B8 (UserGetGlobalAtomTableOfWindow.c)
 */

void __fastcall SetRedrawProp(struct tagWND *a1, int a2)
{
  __int64 v2; // rdi
  __int64 GlobalAtomTableOfWindow; // rax
  unsigned __int16 AtomFromAtomTable; // ax

  v2 = a2;
  GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(a1);
  if ( GlobalAtomTableOfWindow )
  {
    AtomFromAtomTable = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"SysSetRedraw");
    InternalSetProp((__int64)a1, AtomFromAtomTable, v2, 0);
  }
}
