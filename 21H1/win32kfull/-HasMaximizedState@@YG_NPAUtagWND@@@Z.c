/*
 * XREFs of ?HasMaximizedState@@YG_NPAUtagWND@@@Z @ 0x171595
 * Callers:
 *     _xxxInheritWindowMonitor@12 @ 0x26E0E (_xxxInheritWindowMonitor@12.c)
 *     _xxxAppAdjustDpiCandidateRect@16 @ 0x151E6B (_xxxAppAdjustDpiCandidateRect@16.c)
 * Callees:
 *     ?IsSemiMaximized@@YG_NPBUtagWND@@@Z @ 0x35818 (-IsSemiMaximized@@YG_NPBUtagWND@@@Z.c)
 */

bool __thiscall HasMaximizedState(_DWORD *this)
{
  int v1; // ecx
  int v2; // eax
  bool result; // al

  result = 1;
  if ( !IsSemiMaximized(this) )
  {
    v2 = *(_DWORD *)(v1 + 20);
    if ( (*(_BYTE *)(v2 + 23) & 1) == 0 && (*(_BYTE *)(v2 + 12) & 0x40) == 0 )
      return 0;
  }
  return result;
}
