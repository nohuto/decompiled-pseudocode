/*
 * XREFs of ?DoesQualifyForResizeOptimization@@YGHPAU_MOVESIZEDATA@@@Z @ 0x171050
 * Callers:
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 * Callees:
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 */

BOOL __thiscall DoesQualifyForResizeOptimization(int this)
{
  int v2; // esi
  _DWORD *v3; // ebx
  _DWORD *v4; // edi

  v2 = 0;
  v3 = *(_DWORD **)(this + 8);
  if ( _IsTopLevelWindow(v3) )
  {
    if ( (*(_BYTE *)(this + 188) & 2) == 0 )
    {
      v4 = (_DWORD *)v3[5];
      if ( !EqualRectInl(v4 + 13, v4 + 17) )
        return v4[27] == 0;
    }
  }
  return v2;
}
