/*
 * XREFs of ?pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z @ 0xDDADA
 * Callers:
 *     ?bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z @ 0xCD9B6 (-bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z @ 0xCDA6C (-bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z.c)
 *     bAddAllFlEntry @ 0xDBBB8 (bAddAllFlEntry.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNIVERSAL_FONT_ID@@PAH@Z @ 0x1D0A09 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNI.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z @ 0x1D0D40 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z.c)
 *     _GreRemoveFontResourceW@28 @ 0x1EBD13 (_GreRemoveFontResourceW@28.c)
 *     GreEudcLoadLinkW @ 0x1F7AA9 (GreEudcLoadLinkW.c)
 *     ?bAttemptReload@PFFOBJ@@QAEHXZ @ 0x221621 (-bAttemptReload@PFFOBJ@@QAEHXZ.c)
 *     _GetFontResourceInfoInternalW@28 @ 0x24757E (_GetFontResourceInfoInternalW@28.c)
 * Callees:
 *     ?iHash@@YGIPBGI@Z @ 0x89CAC (-iHash@@YGIPBGI@Z.c)
 *     _memcmp @ 0xF9295 (_memcmp.c)
 */

struct PFF *__thiscall PUBLIC_PFTOBJ::pPFFGet(
        PUBLIC_PFTOBJ *this,
        unsigned __int16 *Buf2,
        unsigned int a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *Buf1,
        unsigned int a6,
        struct PFF ***a7,
        int a8)
{
  int v8; // esi
  struct PFF **v9; // esi
  struct PFF *i; // esi

  v8 = *(_DWORD *)this;
  v9 = (struct PFF **)(v8 + 4 * iHash(Buf2, *(_DWORD *)(*(_DWORD *)this + 12)) + 24);
  if ( a7 )
    *a7 = v9;
  for ( i = *v9; i; i = (struct PFF *)*((_DWORD *)i + 1) )
  {
    if ( a8 == ((*((_DWORD *)i + 8) >> 3) & 1)
      && a3 == *((_DWORD *)i + 4)
      && a4 == *((_DWORD *)i + 5)
      && !memcmp(*((const void **)i + 3), Buf2, 2 * a3)
      && a6 == *((_DWORD *)i + 7)
      && (!a6 || !memcmp(Buf1, *((const void **)i + 6), *((_DWORD *)i + 7))) )
    {
      break;
    }
  }
  return i;
}
