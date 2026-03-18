/*
 * XREFs of ?uiCookie@SFMLOGICALSURFACE@@QBEIXZ @ 0xAA996
 * Callers:
 *     ?vSpDwmFlushSpriteClipRgnChange@@YGXPAVSFMLOGICALSURFACE@@@Z @ 0x25234 (-vSpDwmFlushSpriteClipRgnChange@@YGXPAVSFMLOGICALSURFACE@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall SFMLOGICALSURFACE::uiCookie(SFMLOGICALSURFACE *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 28);
  if ( v1 )
    return *(_DWORD *)(v1 + 4);
  else
    return 0;
}
