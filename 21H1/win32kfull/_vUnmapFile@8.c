/*
 * XREFs of _vUnmapFile@8 @ 0xD6388
 * Callers:
 *     vUnmapFontCacheFile @ 0xD6348 (vUnmapFontCacheFile.c)
 *     ?EngMapFontFileInternal@@YGHKPAPAKPAK@Z @ 0x1E869E (-EngMapFontFileInternal@@YGHKPAPAKPAK@Z.c)
 *     _EngFreeModule@4 @ 0x1E8FF7 (_EngFreeModule@4.c)
 *     _EngUnmapFontFile@4 @ 0x1E91A8 (_EngUnmapFontFile@4.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z @ 0x8CD1A (-vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z.c)
 */

void __thiscall vUnmapFile(int this)
{
  MmUnmapViewInSessionSpace(*(PVOID *)(this + 8));
  if ( !*(_DWORD *)(this + 12) )
    vUnreferenceFileviewSection(this);
  *(_DWORD *)(this + 24) &= ~1u;
}
