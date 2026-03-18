/*
 * XREFs of _DecrementCompositedCount@8 @ 0x1536D1
 * Callers:
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     ?DecComposited@@YGXPAUtagWND@@@Z @ 0x19C6C4 (-DecComposited@@YGXPAUtagWND@@@Z.c)
 * Callees:
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 */

int DecrementCompositedCount()
{
  int v0; // ecx

  v0 = g_cVisibleComposited--;
  if ( v0 == 1 )
    FindTimer(_gTermIO[1], 65525, 2u, 1, 0);
  return 1;
}
