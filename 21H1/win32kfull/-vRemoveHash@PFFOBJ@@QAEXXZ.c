/*
 * XREFs of ?vRemoveHash@PFFOBJ@@QAEXXZ @ 0xCE2F8
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z @ 0xCDA6C (-bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QAEHH@Z @ 0xCDD06 (-bUnloadAllButPermanentFonts@PFTOBJ@@QAEHH@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QAEHPAVPDEVOBJ@@@Z @ 0x1D08B0 (-bLoadFonts@DEVICE_PFTOBJ@@QAEHPAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNIVERSAL_FONT_ID@@PAH@Z @ 0x1D0A09 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNI.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z @ 0x1D0D40 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z.c)
 * Callees:
 *     ?bValid@FHOBJ@@QBEHXZ @ 0x88B7E (-bValid@FHOBJ@@QBEHXZ.c)
 *     ?bInPrivatePFT@PFFOBJ@@QBEHXZ @ 0x88E46 (-bInPrivatePFT@PFFOBJ@@QBEHXZ.c)
 *     ?vFree@FHOBJ@@QAEXXZ @ 0xCD6B8 (-vFree@FHOBJ@@QAEXXZ.c)
 *     ?vDelete@FHOBJ@@QAEXAAVPFEOBJ@@@Z @ 0xCE3DA (-vDelete@FHOBJ@@QAEXAAVPFEOBJ@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __thiscall PFFOBJ::vRemoveHash(PFFOBJ *this)
{
  int v2; // edx
  _DWORD *v3; // edx
  struct _FONTHASH **v4; // ecx
  unsigned int v5; // ebx
  int v6; // edi
  int v7; // edx
  int v8; // edx
  _DWORD v9[2]; // [esp+10h] [ebp-20h] BYREF
  _DWORD v10[2]; // [esp+18h] [ebp-18h] BYREF
  _DWORD v11[2]; // [esp+20h] [ebp-10h] BYREF
  int v12; // [esp+28h] [ebp-8h] BYREF
  int v13; // [esp+2Ch] [ebp-4h] BYREF

  ++*(_DWORD *)(_gpGdiSharedMemory + 1048728);
  v2 = *(_DWORD *)this;
  if ( *(_DWORD *)(*(_DWORD *)this + 56) )
  {
    if ( PFFOBJ::bInPrivatePFT(this) )
      v4 = (struct _FONTHASH **)gpPFTPrivate;
    else
      v4 = gpPFTPublic;
    v10[0] = v4;
    v11[0] = v4 + 1;
    v5 = 0;
    v11[1] = v4[1];
    v10[1] = *v4;
    v9[0] = v4 + 2;
    v9[1] = v4[2];
    if ( v3[31] )
    {
      v6 = 33;
      do
      {
        v13 = v3[v6];
        if ( (*(_BYTE *)(v13 + 8) & 8) == 0 )
        {
          if ( FHOBJ::bValid((FHOBJ *)v11) )
            FHOBJ::vDelete((FHOBJ *)v11, (struct PFEOBJ *)&v13);
          if ( FHOBJ::bValid((FHOBJ *)v10) )
            FHOBJ::vDelete((FHOBJ *)v10, (struct PFEOBJ *)&v13);
        }
        if ( FHOBJ::bValid((FHOBJ *)v9) )
          FHOBJ::vDelete((FHOBJ *)v9, (struct PFEOBJ *)&v13);
        v3 = *(_DWORD **)this;
        ++v5;
        ++v6;
      }
      while ( v5 < *(_DWORD *)(*(_DWORD *)this + 124) );
    }
    if ( v3[15] == dword_2785B8 && !*(_DWORD *)(v3[14] + 4) )
      --_gcTrueTypeFonts;
  }
  else
  {
    v12 = v2 + 68;
    v13 = *(_DWORD *)(v2 + 68);
    if ( FHOBJ::bValid((FHOBJ *)&v12) )
    {
      FHOBJ::vFree((FHOBJ *)&v12);
      v7 = *(_DWORD *)this;
    }
    v12 = v7 + 72;
    v13 = *(_DWORD *)(v7 + 72);
    if ( FHOBJ::bValid((FHOBJ *)&v12) )
    {
      FHOBJ::vFree((FHOBJ *)&v12);
      v8 = *(_DWORD *)this;
    }
    v12 = v8 + 76;
    v13 = *(_DWORD *)(v8 + 76);
    if ( FHOBJ::bValid((FHOBJ *)&v12) )
      FHOBJ::vFree((FHOBJ *)&v12);
  }
}
