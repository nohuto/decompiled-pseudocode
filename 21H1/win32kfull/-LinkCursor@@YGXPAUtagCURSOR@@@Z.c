/*
 * XREFs of ?LinkCursor@@YGXPAUtagCURSOR@@@Z @ 0x77AC2
 * Callers:
 *     ?_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z @ 0x775F8 (-_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall LinkCursor(_DWORD *this)
{
  int v1; // eax
  int v2; // edx

  v1 = this[11];
  this[6] = this;
  if ( (v1 & 0x40) == 0 )
  {
    v2 = this[3];
    if ( v2 )
    {
      if ( (v1 & 4) == 0 )
        return;
      this[4] = *(_DWORD *)(v2 + 400);
      *(_DWORD *)(v2 + 400) = this;
    }
    else
    {
      this[4] = gpcurFirst;
      gpcurFirst = (int)this;
    }
    this[11] |= 0x100u;
  }
}
