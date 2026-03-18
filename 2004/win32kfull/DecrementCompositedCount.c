/*
 * XREFs of DecrementCompositedCount @ 0x1C01E816C
 * Callers:
 *     SetVisible @ 0x1C0020760 (SetVisible.c)
 *     ?DecComposited@@YAXPEAUtagWND@@@Z @ 0x1C023EA90 (-DecComposited@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 */

__int64 DecrementCompositedCount()
{
  int v0; // ecx

  v0 = g_cVisibleComposited--;
  if ( v0 == 1 )
    FindTimer(gTermIO[1], 65525LL, 2u, 1, 0LL);
  return 1LL;
}
