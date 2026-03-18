/*
 * XREFs of ?UnmapMappedViews@UmfdClientSideFileViewMapper@@AAEXXZ @ 0xD47CC
 * Callers:
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ?vInitializeFontAssocStatus@@YGXXZ @ 0xD67C2 (-vInitializeFontAssocStatus@@YGXXZ.c)
 *     bAddAllFlEntry @ 0xDBBB8 (bAddAllFlEntry.c)
 *     ?bComputeGISET@@YGHPAU_IFIMETRICS@@PAVPFE@@PAPAU_GISET@@@Z @ 0xDCAD6 (-bComputeGISET@@YGHPAU_IFIMETRICS@@PAVPFE@@PAPAU_GISET@@@Z.c)
 *     GreEudcLoadLinkW @ 0x1F7AA9 (GreEudcLoadLinkW.c)
 * Callees:
 *     _EngUnmapFontFileFD@4 @ 0x8B56C (_EngUnmapFontFileFD@4.c)
 */

void __thiscall UmfdClientSideFileViewMapper::UnmapMappedViews(UmfdClientSideFileViewMapper *this)
{
  unsigned int i; // esi

  for ( i = 0; i < *((_DWORD *)this + 2); EngUnmapFontFileFD(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 120) + 4 * i++)) )
  {
    if ( i >= *(_DWORD *)(*(_DWORD *)this + 20) )
      break;
  }
}
