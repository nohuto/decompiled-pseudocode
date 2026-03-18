/*
 * XREFs of ?vLoadFontFileView@@YGXPAGKPAPAU_FONTFILEVIEW@@KPAPAXPAKPAUtagDESIGNVECTOR@@K3PAPAVPDEV@@PAU_FNTCHECKSUM@@HPAH@Z @ 0xDDDEA
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNIVERSAL_FONT_ID@@PAH@Z @ 0x1D0A09 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNI.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z @ 0x1D0D40 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     UmfdLoadFontFileView @ 0xDDE4C (UmfdLoadFontFileView.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0xDE13E (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ.c)
 */

void __userpurge vLoadFontFileView(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned __int16 *a3,
        unsigned int a4,
        struct _FONTFILEVIEW **a5,
        unsigned int a6,
        void **a7,
        unsigned int *a8,
        struct tagDESIGNVECTOR *a9,
        unsigned int a10,
        unsigned int *a11,
        struct PDEV **a12,
        struct _FNTCHECKSUM *a13,
        int a14,
        int *a15)
{
  int v17; // [esp+8h] [ebp-4h] BYREF

  UmfdHostLifeTimeManager::EnsureUmfdHost();
  v17 = _ghsemFntCache;
  GreAcquireSemaphore(_ghsemFntCache);
  a11[1] = 0;
  *a11 = 0;
  UmfdLoadFontFileView(a2, a1, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
}
