/*
 * XREFs of ?bAddHash@PFFOBJ@@QAEHH@Z @ 0xDE594
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QAEHPAVPDEVOBJ@@@Z @ 0x1D08B0 (-bLoadFonts@DEVICE_PFTOBJ@@QAEHPAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNIVERSAL_FONT_ID@@PAH@Z @ 0x1D0A09 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNI.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z @ 0x1D0D40 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z.c)
 * Callees:
 *     ?bValid@FHOBJ@@QBEHXZ @ 0x88B7E (-bValid@FHOBJ@@QBEHXZ.c)
 *     ?bInPrivatePFT@PFFOBJ@@QBEHXZ @ 0x88E46 (-bInPrivatePFT@PFFOBJ@@QBEHXZ.c)
 *     ?bInsert@FHOBJ@@QAEHAAVPFEOBJ@@@Z @ 0xDE69E (-bInsert@FHOBJ@@QAEHAAVPFEOBJ@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __thiscall PFFOBJ::bAddHash(PFFOBJ *this, int a2)
{
  int v3; // esi
  int v4; // edx
  int v5; // edi
  int v6; // edx
  struct _FONTHASH **v7; // ecx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // ecx
  _DWORD v12[2]; // [esp+10h] [ebp-24h] BYREF
  _DWORD v13[2]; // [esp+18h] [ebp-1Ch] BYREF
  _DWORD v14[2]; // [esp+20h] [ebp-14h] BYREF
  int v15; // [esp+28h] [ebp-Ch]
  _DWORD v16[2]; // [esp+2Ch] [ebp-8h] BYREF

  ++*(_DWORD *)(_gpGdiSharedMemory + 1048728);
  v3 = 0;
  v4 = *(_DWORD *)this;
  v5 = *(_DWORD *)(*(_DWORD *)this + 56);
  if ( v5 )
  {
    if ( PFFOBJ::bInPrivatePFT(this) )
      v7 = (struct _FONTHASH **)gpPFTPrivate;
    else
      v7 = gpPFTPublic;
    v16[0] = v7 + 1;
    v15 = (int)(v7 + 2);
    if ( *(_DWORD *)(v6 + 60) == dword_2785B8 && !*(_DWORD *)(v5 + 4) )
      ++_gcTrueTypeFonts;
  }
  else
  {
    v16[0] = v4 + 68;
    v7 = (struct _FONTHASH **)(v4 + 72);
    v15 = v4 + 76;
  }
  v13[1] = *v7;
  v12[0] = v16[0];
  v13[0] = v7;
  v12[1] = *(_DWORD *)v16[0];
  v14[0] = v15;
  v14[1] = *(_DWORD *)v15;
  if ( FHOBJ::bValid((FHOBJ *)v14) && FHOBJ::bValid((FHOBJ *)v13) && FHOBJ::bValid((FHOBJ *)v12) )
  {
    v8 = *(_DWORD *)this;
    v9 = 0;
    if ( *(_DWORD *)(*(_DWORD *)this + 124) )
    {
      v10 = 132;
      v15 = 132;
      while ( 1 )
      {
        v16[0] = *(_DWORD *)(v10 + v8);
        if ( !FHOBJ::bInsert((FHOBJ *)v14, (struct PFEOBJ *)v16)
          || !a2
          && (!FHOBJ::bInsert((FHOBJ *)v13, (struct PFEOBJ *)v16) || !FHOBJ::bInsert((FHOBJ *)v12, (struct PFEOBJ *)v16)) )
        {
          break;
        }
        v8 = *(_DWORD *)this;
        ++v9;
        v10 = v15 + 4;
        v15 += 4;
        if ( v9 >= *(_DWORD *)(v8 + 124) )
          return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  return v3;
}
