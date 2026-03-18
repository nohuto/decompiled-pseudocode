/*
 * XREFs of ?bAddRemoteFont@XDCOBJ@@QAEHPAVPFF@@@Z @ 0x2111EC
 * Callers:
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNIVERSAL_FONT_ID@@PAH@Z @ 0x1D0A09 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNI.c)
 *     _NtGdiAddEmbFontToDC@8 @ 0x1D9099 (_NtGdiAddEmbFontToDC@8.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

int __thiscall XDCOBJ::bAddRemoteFont(XDCOBJ *this, struct PFF *a2)
{
  int v3; // esi
  _DWORD *v4; // eax

  v3 = 0;
  v4 = PALLOCMEM2(8u, 1684300103, 1);
  if ( v4 )
  {
    v4[1] = *(_DWORD *)(*(_DWORD *)this + 1816);
    *(_DWORD *)(*(_DWORD *)this + 1816) = v4;
    *v4 = a2;
    ++*((_DWORD *)a2 + 11);
    return 1;
  }
  return v3;
}
