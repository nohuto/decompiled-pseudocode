/*
 * XREFs of ?SENDMSG_LPK@@YGHQAUtagTHREADINFO@@@Z @ 0x15C687
 * Callers:
 *     ?DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z @ 0x15C04A (-DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall SENDMSG_LPK(int this)
{
  return (*(_BYTE *)(*(_DWORD *)(this + 232) + 412) & 0xF) != 0 && (*(_BYTE *)(this + 264) & 1) == 0;
}
