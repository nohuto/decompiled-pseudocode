/*
 * XREFs of ?SetRedrawProp@@YGXPAUtagWND@@H@Z @ 0xC3DF4
 * Callers:
 *     ?xxxDWP_SetRedraw@@YGXPAUtagWND@@H@Z @ 0xC3D5A (-xxxDWP_SetRedraw@@YGXPAUtagWND@@H@Z.c)
 * Callees:
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 *     _UserGetGlobalAtomTableOfWindow@4 @ 0xB50D8 (_UserGetGlobalAtomTableOfWindow@4.c)
 */

void __fastcall SetRedrawProp(_DWORD *a1, int a2)
{
  int GlobalAtomTableOfWindow; // eax
  unsigned __int16 AtomFromAtomTable; // ax

  GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(a1);
  if ( GlobalAtomTableOfWindow )
  {
    AtomFromAtomTable = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"SysSetRedraw");
    InternalSetProp((int)a1, AtomFromAtomTable, a2, 0);
  }
}
