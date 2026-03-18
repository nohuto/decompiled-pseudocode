/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00D8F4C
 * Callers:
 *     bAddAllFlEntry @ 0x1C000F6D0 (bAddAllFlEntry.c)
 *     bUnloadEudcFont @ 0x1C0011CF8 (bUnloadEudcFont.c)
 *     bAddFlEntry @ 0x1C0011ED4 (bAddFlEntry.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0012250 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C00D8FE8 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C0125544 (bReadUserSystemEUDCRegistry.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C028A18C (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 *     GreEudcLoadLinkW @ 0x1C02985A0 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C0298E50 (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C029906C (bWriteUserSystemEUDCRegistry.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02BB3FC (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02C2200 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 */

MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this, unsigned int a2)
{
  __int64 v3; // rax

  *(_QWORD *)this = 0LL;
  v3 = PALLOCMEM2(a2);
  *(_QWORD *)this = v3;
  if ( !v3 )
    EngSetLastError(8u);
  return this;
}
