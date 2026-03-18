/*
 * XREFs of ??0UmfdClientSideFileViewMapper@@QAE@AAVPFFOBJ@@@Z @ 0xD3126
 * Callers:
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ?vInitializeFontAssocStatus@@YGXXZ @ 0xD67C2 (-vInitializeFontAssocStatus@@YGXXZ.c)
 *     bAddAllFlEntry @ 0xDBBB8 (bAddAllFlEntry.c)
 *     ?bComputeGISET@@YGHPAU_IFIMETRICS@@PAVPFE@@PAPAU_GISET@@@Z @ 0xDCAD6 (-bComputeGISET@@YGHPAU_IFIMETRICS@@PAVPFE@@PAPAU_GISET@@@Z.c)
 *     GreEudcLoadLinkW @ 0x1F7AA9 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?TryMapAllFileViews@UmfdClientSideFileViewMapper@@AAEIXZ @ 0xD315A (-TryMapAllFileViews@UmfdClientSideFileViewMapper@@AAEIXZ.c)
 *     ?IsUnmappedSystemFolderFont@UmfdClientSideFileViewMapper@@AAE_NXZ @ 0xD31A4 (-IsUnmappedSystemFolderFont@UmfdClientSideFileViewMapper@@AAE_NXZ.c)
 */

UmfdClientSideFileViewMapper *__thiscall UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
        UmfdClientSideFileViewMapper *this,
        struct PFFOBJ *a2)
{
  int v3; // eax

  *(_DWORD *)this = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 1) = v3;
  if ( UmfdClientSideFileViewMapper::IsUnmappedSystemFolderFont(this) )
    *((_DWORD *)this + 2) = UmfdClientSideFileViewMapper::TryMapAllFileViews(this);
  return this;
}
