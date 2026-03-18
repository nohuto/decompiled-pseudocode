/*
 * XREFs of __ClientToScreen@8 @ 0x1B7000
 * Callers:
 *     ?xxxTrackInitSize@@YGHPAUtagWND@@IIJPAU_MOVESIZEDATA@@@Z @ 0x176158 (-xxxTrackInitSize@@YGHPAUtagWND@@IIJPAU_MOVESIZEDATA@@@Z.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 *     ?xxxQueryDropObject@@YGPAUtagCURSOR@@PAUtagWND@@PAUtagDROPSTRUCT@@@Z @ 0x1A61CC (-xxxQueryDropObject@@YGPAUtagCURSOR@@PAUtagWND@@PAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall _ClientToScreen(int a1, int *a2)
{
  int v2; // ecx
  int result; // eax
  int v4; // esi
  int v5; // eax

  v2 = *(_DWORD *)(a1 + 20);
  result = *(_WORD *)(v2 + 30) & 0x3FFF;
  if ( result != 669 )
  {
    v4 = *a2;
    if ( (*(_BYTE *)(v2 + 18) & 0x40) != 0 )
      v5 = *(_DWORD *)(v2 + 76) - v4;
    else
      v5 = v4 + *(_DWORD *)(v2 + 68);
    *a2 = v5;
    result = *(_DWORD *)(v2 + 72);
    a2[1] += result;
  }
  return result;
}
