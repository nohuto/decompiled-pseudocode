/*
 * XREFs of _vUnmapRemoteFonts@4 @ 0x1E9844
 * Callers:
 *     _FreeFileView@8 @ 0xCE1EE (_FreeFileView@8.c)
 *     _GreAddFontMemResourceEx@20 @ 0x1E9227 (_GreAddFontMemResourceEx@20.c)
 *     _NtGdiAddRemoteFontToDC@16 @ 0x1E92FF (_NtGdiAddRemoteFontToDC@16.c)
 * Callees:
 *     ?MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SGJPAX_K@Z @ 0xA7832 (-MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SGJPAX_K@Z.c)
 */

void __stdcall vUnmapRemoteFonts(int a1)
{
  int v1; // eax
  int v2; // eax
  void *v3; // ecx
  int v4; // eax
  unsigned __int64 v5; // [esp-4h] [ebp-8h]

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 60);
    if ( !v1 || (v2 = v1 - 1, (*(_DWORD *)(a1 + 60) = v2) == 0) )
    {
      v3 = *(void **)(a1 + 20);
      if ( v3 )
      {
        v4 = *(_DWORD *)(a1 + 64);
        if ( v4 )
        {
          LODWORD(v5) = *(_DWORD *)(a1 + 44);
          UmfdHostLifeTimeManager::MmUnmapViewOfSection(v4, *(void **)(a1 + 40), v5);
          *(_DWORD *)(a1 + 64) = 0;
          v3 = *(void **)(a1 + 20);
        }
        ObfDereferenceObject(v3);
        *(_DWORD *)(a1 + 20) = 0;
        if ( *(_DWORD *)(a1 + 28) )
        {
          ZwClose(*(HANDLE *)(a1 + 28));
          *(_DWORD *)(a1 + 28) = 0;
        }
      }
    }
  }
}
