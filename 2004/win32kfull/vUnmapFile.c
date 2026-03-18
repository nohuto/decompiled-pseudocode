/*
 * XREFs of vUnmapFile @ 0x1C000992C
 * Callers:
 *     vUnmapFontCacheFile @ 0x1C00098CC (vUnmapFontCacheFile.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C0289CA0 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     EngFreeModule @ 0x1C028AAC0 (EngFreeModule.c)
 *     EngUnmapFontFile @ 0x1C028AD50 (EngUnmapFontFile.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C0016CE4 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 */

void __fastcall vUnmapFile(PVOID *a1)
{
  MmUnmapViewInSessionSpace(a1[1]);
  if ( !a1[2] )
    vUnreferenceFileviewSection((struct _FILEVIEW *)a1);
  *((_DWORD *)a1 + 10) &= ~1u;
}
