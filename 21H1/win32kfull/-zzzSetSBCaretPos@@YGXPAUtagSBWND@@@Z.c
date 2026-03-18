/*
 * XREFs of ?zzzSetSBCaretPos@@YGXPAUtagSBWND@@@Z @ 0x1A3529
 * Callers:
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     _zzzSetCaretPos@8 @ 0x820C0 (_zzzSetCaretPos@8.c)
 */

void __thiscall zzzSetSBCaretPos(_DWORD *this)
{
  int v1; // eax
  int v2; // edx
  int v3; // ecx

  if ( *this == *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 60) )
  {
    v1 = this[1];
    if ( v1 )
      v2 = this[16];
    else
      v2 = this[9];
    if ( v1 )
      v3 = this[9];
    else
      v3 = this[16];
    zzzSetCaretPos(v3 + 2, v2 + 2);
  }
}
