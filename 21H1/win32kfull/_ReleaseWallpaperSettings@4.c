/*
 * XREFs of _ReleaseWallpaperSettings@4 @ 0xD4C28
 * Callers:
 *     ?SetGlobalWallpaperSettings@@YGHPBUtagWALLPAPERSETTINGS@@@Z @ 0xE6526 (-SetGlobalWallpaperSettings@@YGHPBUtagWALLPAPERSETTINGS@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall ReleaseWallpaperSettings(int *a1)
{
  bool v1; // zf
  int v2; // esi

  v2 = *a1 - 1;
  v1 = *a1 == 1;
  *a1 = v2;
  if ( v1 )
    Win32FreePool(a1);
  return v2 == 0;
}
