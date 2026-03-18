/*
 * XREFs of ?ShouldGoMonitorMaximizedMoveSizeData@@YG_NPAU_MOVESIZEDATA@@@Z @ 0x1721B1
 * Callers:
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

char __thiscall ShouldGoMonitorMaximizedMoveSizeData(_DWORD *this)
{
  char v1; // dl

  v1 = 1;
  if ( this[52] || (this[46] & 0x300) != 0 )
    return 0;
  if ( (*(_BYTE *)(*(_DWORD *)(this[2] + 20) + 22) & 1) == 0 )
  {
    this[46] |= (unsigned int)&loc_80000;
    return 0;
  }
  return v1;
}
