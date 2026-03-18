/*
 * XREFs of ??0MALLOCOBJ@@QAE@K@Z @ 0xDD190
 * Callers:
 *     bUnloadEudcFont @ 0xCD8F6 (bUnloadEudcFont.c)
 *     bReadUserSystemEUDCRegistry @ 0xDB9B6 (bReadUserSystemEUDCRegistry.c)
 *     bAddAllFlEntry @ 0xDBBB8 (bAddAllFlEntry.c)
 *     bAddFlEntry @ 0xDCD78 (bAddFlEntry.c)
 *     ?bAppendSysDirectory@@YGHPAGPBGI@Z @ 0xDD06C (-bAppendSysDirectory@@YGHPAGPBGI@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YGJPAU_UNICODE_STRING@@PAU_FILEVIEW@@PAU_OBJECT_ATTRIBUTES@@PAT_LARGE_INTEGER@@_N@Z @ 0x1E89E2 (-ObtainSectionForNetworkedFontFile@@YGJPAU_UNICODE_STRING@@PAU_FILEVIEW@@PAU_OBJECT_ATTRIBUTES@@.c)
 *     GreEudcLoadLinkW @ 0x1F7AA9 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1F84B8 (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1F8DC4 (bWriteUserSystemEUDCRegistry.c)
 *     ?bAttemptReload@PFFOBJ@@QAEHXZ @ 0x221621 (-bAttemptReload@PFFOBJ@@QAEHXZ.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CG_NKPAVPFF@@@Z @ 0x228F12 (-TryResurrectHff@UmfdHostLifeTimeManager@@CG_NKPAVPFF@@@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

MALLOCOBJ *__thiscall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this, size_t Size)
{
  void *v3; // eax

  *(_DWORD *)this = 0;
  v3 = PALLOCMEM2(Size, 1886221383, 1);
  *(_DWORD *)this = v3;
  if ( !v3 )
    EngSetLastError(8u);
  return this;
}
