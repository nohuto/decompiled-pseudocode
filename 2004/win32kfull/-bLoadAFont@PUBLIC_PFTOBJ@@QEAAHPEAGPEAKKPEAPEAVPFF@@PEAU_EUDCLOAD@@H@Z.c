/*
 * XREFs of ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C00126FC
 * Callers:
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00092A4 (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     FinishStockFontInit @ 0x1C000DD20 (FinishStockFontInit.c)
 *     bAddAllFlEntry @ 0x1C000F6D0 (bAddAllFlEntry.c)
 *     bAddFlEntry @ 0x1C0011ED4 (bAddFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C02981AC (-bSetupDefaultFlEntry@@YAHXZ.c)
 *     GreEudcLoadLinkW @ 0x1C02985A0 (GreEudcLoadLinkW.c)
 *     bInitOneStockFontInternal @ 0x1C0394918 (bInitOneStockFontInternal.c)
 *     bInitSystemFont @ 0x1C039632C (bInitSystemFont.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C00D8FE8 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     cCapString @ 0x1C00D9C0C (cCapString.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadAFont(
        PUBLIC_PFTOBJ *this,
        unsigned __int16 *a2,
        unsigned int *a3,
        unsigned int a4,
        struct PFF **a5,
        struct _EUDCLOAD *a6,
        int a7)
{
  __int64 v7; // rbx
  unsigned int v12; // ebx
  __int64 v13; // rax
  unsigned __int16 *v14; // rdi
  unsigned int Fonts; // ebx
  size_t v17; // [rsp+28h] [rbp-60h]

  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  v12 = v7 + 1;
  if ( v12 > 0x1388000 )
    return 0LL;
  v13 = AllocFreeTmpBuffer(2 * v12);
  v14 = (unsigned __int16 *)v13;
  if ( !v13 )
    return 0LL;
  cCapString(v13, a2, v12);
  LODWORD(v17) = 0;
  Fonts = PUBLIC_PFTOBJ::bLoadFonts(this, v14, v12, 1u, 0LL, v17, a3, a4, a5, 0, 0, a6, a7, 0);
  FreeTmpBuffer(v14);
  return Fonts;
}
