/*
 * XREFs of ?_GhostOwnerWindowAndOwnees@@YGHPAUtagWND@@@Z @ 0xC2514
 * Callers:
 *     _ProcessHungWindow@4 @ 0xC2576 (_ProcessHungWindow@4.c)
 * Callees:
 *     _IsNonImmersiveBand@4 @ 0x2D3DC (_IsNonImmersiveBand@4.c)
 *     ?_GhostWindow@@YGHPAUtagWND@@@Z @ 0xC1FAA (-_GhostWindow@@YGHPAUtagWND@@@Z.c)
 *     _ShouldProcessHungWindow@4 @ 0xC25A4 (_ShouldProcessHungWindow@4.c)
 */

int __thiscall _GhostOwnerWindowAndOwnees(_DWORD *this)
{
  int v2; // ebx
  _DWORD *i; // esi
  _DWORD *j; // eax

  v2 = 0;
  if ( ShouldProcessHungWindow(this) )
    v2 = _GhostWindow(this);
  if ( IsNonImmersiveBand(this) )
  {
    for ( i = (_DWORD *)this[13]; i; i = (_DWORD *)i[13] )
    {
      for ( j = (_DWORD *)i[16]; j; j = (_DWORD *)j[16] )
      {
        if ( j == this )
        {
          if ( (_DWORD *)ShouldProcessHungWindow(i) == i )
            v2 |= _GhostWindow(i);
          break;
        }
      }
    }
  }
  return v2;
}
