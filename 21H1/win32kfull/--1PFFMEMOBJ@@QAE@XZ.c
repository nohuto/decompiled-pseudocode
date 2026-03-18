/*
 * XREFs of ??1PFFMEMOBJ@@QAE@XZ @ 0xDE54C
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QAEHPAVPDEVOBJ@@@Z @ 0x1D08B0 (-bLoadFonts@DEVICE_PFTOBJ@@QAEHPAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNIVERSAL_FONT_ID@@PAH@Z @ 0x1D0A09 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNI.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z @ 0x1D0D40 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z.c)
 * Callees:
 *     ?bRemovePvtData@PFFOBJ@@QAEHPAUtagPvtData@@@Z @ 0x221D05 (-bRemovePvtData@PFFOBJ@@QAEHPAUtagPvtData@@@Z.c)
 */

void __thiscall PFFMEMOBJ::~PFFMEMOBJ(PFFMEMOBJ *this)
{
  int v2; // eax
  int v3; // ecx

  if ( (*((_BYTE *)this + 8) & 2) == 0 && *(_DWORD *)this )
  {
    PopThreadGuardedObject(*(_DWORD *)this + 100);
    if ( *((_DWORD *)this + 1) )
    {
      v2 = *(_DWORD *)(*(_DWORD *)this + 92);
      v3 = *(_DWORD *)(v2 + 4);
      if ( (*((_BYTE *)this + 12) & 0x2C) != 0 )
        *(_DWORD *)(v2 + 4) = --v3;
      else
        --*(_DWORD *)v2;
      if ( !v3 && !*(_DWORD *)v2 )
        PFFOBJ::bRemovePvtData(this, (struct tagPvtData *)v2);
    }
    PFFOBJ::vPFFC_DeleteAndCleanup(this);
  }
}
