/*
 * XREFs of ?ExpandWindowList@@YGHPAPAUtagBWL@@@Z @ 0xA71F0
 * Callers:
 *     ?InternalBuildHwndList@@YGPAUtagBWL@@PAU1@PAUtagWND@@I@Z @ 0x2B0B4 (-InternalBuildHwndList@@YGPAUtagBWL@@PAU1@PAUtagWND@@I@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall ExpandWindowList(_DWORD *this)
{
  int v2; // esi
  int v3; // eax
  int v4; // esi

  v2 = *(_DWORD *)(*this + 4) - *this;
  v3 = UserReAllocPool(*this, v2 + 4, v2 + 36, 1819767637);
  if ( !v3 )
    return 0;
  v4 = v3 + v2;
  *(_DWORD *)(v3 + 4) = v4;
  *(_DWORD *)(v3 + 8) = v4 + 32;
  *this = v3;
  return 1;
}
