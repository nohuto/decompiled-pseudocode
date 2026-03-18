/*
 * XREFs of _IsMessageParentWindow@4 @ 0x21F92
 * Callers:
 *     ?GetNextLayeredWindow@@YGPAUtagWND@@PAU1@@Z @ 0x21F40 (-GetNextLayeredWindow@@YGPAUtagWND@@PAU1@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z @ 0xE1968 (-DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsMessageParentWindow(_DWORD *this)
{
  int v1; // eax
  _DWORD *v2; // edx

  v1 = this[3];
  v2 = 0;
  if ( v1 )
    v2 = *(_DWORD **)(v1 + 52);
  return this == v2;
}
