/*
 * XREFs of _UserGetGlobalAtomTableOfWindow@4 @ 0xB50D8
 * Callers:
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 *     ?SetRedrawProp@@YGXPAUtagWND@@H@Z @ 0xC3DF4 (-SetRedrawProp@@YGXPAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall UserGetGlobalAtomTableOfWindow(_DWORD *this)
{
  int v1; // eax

  v1 = *(_DWORD *)(*(_DWORD *)(this[2] + 232) + 356);
  if ( v1 )
    return *(_DWORD *)(v1 + 88);
  else
    return 0;
}
