/*
 * XREFs of ?vUnmapFileFD@@YGXPAU_FILEVIEW@@E@Z @ 0x8CCEA
 * Callers:
 *     _EngUnmapFontFileFD@4 @ 0x8B56C (_EngUnmapFontFileFD@4.c)
 *     _EngMapFontFileFDInternal@16 @ 0x8BDE8 (_EngMapFontFileFDInternal@16.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z @ 0x8CD1A (-vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z.c)
 *     ?MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SGJPAX_K@Z @ 0xA7832 (-MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SGJPAX_K@Z.c)
 */

void __fastcall vUnmapFileFD(int a1, char a2)
{
  unsigned __int64 v4; // [esp-4h] [ebp-10h]
  struct _FILEVIEW *v5; // [esp+0h] [ebp-Ch]

  LODWORD(v4) = *(_DWORD *)(a1 + 44);
  UmfdHostLifeTimeManager::MmUnmapViewOfSection(*(void **)(a1 + 40), v4);
  if ( !*(_DWORD *)(a1 + 8) && a2 )
    vUnreferenceFileviewSection(v5);
  *(_DWORD *)(a1 + 24) &= ~1u;
}
