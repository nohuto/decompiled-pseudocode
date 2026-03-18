/*
 * XREFs of ?bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z @ 0xDD364
 * Callers:
 *     ?vInitializeFontAssocStatus@@YGXXZ @ 0xD67C2 (-vInitializeFontAssocStatus@@YGXXZ.c)
 *     bAddAllFlEntry @ 0xDBBB8 (bAddAllFlEntry.c)
 *     bAddFlEntry @ 0xDCD78 (bAddFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YGHXZ @ 0x1F7794 (-bSetupDefaultFlEntry@@YGHXZ.c)
 *     GreEudcLoadLinkW @ 0x1F7AA9 (GreEudcLoadLinkW.c)
 *     _vInitEmergencyStockFont@4 @ 0x29229C (_vInitEmergencyStockFont@4.c)
 *     _bInitOneStockFontInternal@16 @ 0x2925F6 (_bInitOneStockFontInternal@16.c)
 *     _bInitSystemFont@8 @ 0x293D42 (_bInitSystemFont@8.c)
 * Callees:
 *     _cCapString@12 @ 0x89EC2 (_cCapString@12.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 */

int __thiscall PUBLIC_PFTOBJ::bLoadAFont(
        PUBLIC_PFTOBJ *this,
        unsigned __int16 *a2,
        unsigned int *a3,
        unsigned int a4,
        struct PFF **a5,
        struct _EUDCLOAD *a6,
        int a7)
{
  unsigned int v8; // esi
  WCHAR *v9; // eax
  unsigned __int16 *v10; // edi
  int Fonts; // esi

  v8 = wcslen(a2) + 1;
  if ( v8 > 0x1388000 )
    return 0;
  v9 = (WCHAR *)AllocFreeTmpBuffer(2 * v8);
  v10 = v9;
  if ( !v9 )
    return 0;
  cCapString(v9, a2, v8);
  Fonts = PUBLIC_PFTOBJ::bLoadFonts(this, v10, v8, 1u, 0, 0, a3, a4, a5, 0, 0, a6, a7, 0);
  FreeTmpBuffer(v10);
  return Fonts;
}
