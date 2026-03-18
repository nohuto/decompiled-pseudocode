/*
 * XREFs of _IncrementCompositedCount@4 @ 0x1537FA
 * Callers:
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     ?IncComposited@@YGXPAUtagWND@@@Z @ 0x19C6CC (-IncComposited@@YGXPAUtagWND@@@Z.c)
 * Callees:
 *     __SetSystemTimer@20 @ 0xCA7A8 (__SetSystemTimer@20.c)
 */

int __thiscall IncrementCompositedCount(_DWORD *this)
{
  int v1; // esi
  int v2; // ecx

  v1 = 0;
  if ( (*(_BYTE *)(this[5] + 23) & 0x10) != 0 )
  {
    v2 = g_cVisibleComposited;
    v1 = 1;
    ++g_cVisibleComposited;
    if ( !v2 )
      _SetSystemTimer(_gTermIO[1], (char *)0xFFF5, 0x64u, (int)xxxSystemTimerProc, 1);
  }
  return v1;
}
