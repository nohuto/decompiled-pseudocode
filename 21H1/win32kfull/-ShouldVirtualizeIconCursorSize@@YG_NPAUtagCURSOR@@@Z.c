/*
 * XREFs of ?ShouldVirtualizeIconCursorSize@@YG_NPAUtagCURSOR@@@Z @ 0x752C8
 * Callers:
 *     ?GetVirtualizedCursorSize@@YGXPAUtagCURSOR@@PAH1@Z @ 0x750D8 (-GetVirtualizedCursorSize@@YGXPAUtagCURSOR@@PAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x7528E (-GetVirtualizedDpiCursor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 * Callees:
 *     <none>
 */

char __thiscall ShouldVirtualizeIconCursorSize(_WORD *this)
{
  char v2; // cl

  v2 = 1;
  if ( this[19] != 1 )
    return this[18] == _atomUSER32;
  return v2;
}
