/*
 * XREFs of _xxxInvalidateWallpaperWindow@0 @ 0xEB0C4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 */

void __stdcall xxxInvalidateWallpaperWindow()
{
  int v0; // ecx
  int v1; // ecx
  int v2; // eax

  v0 = *(_DWORD *)(_gptiCurrent + 248);
  if ( v0 )
  {
    v1 = *(_DWORD *)(v0 + 4);
    v2 = *(_DWORD *)(v1 + 92);
    if ( v2 || (v2 = *(_DWORD *)(v1 + 12)) != 0 )
      xxxInternalInvalidate(v2, 1, 1029);
  }
}
