/*
 * XREFs of _GreAddFontMemResourceEx@20 @ 0x1E9227
 * Callers:
 *     _NtGdiAddFontMemResourceEx@20 @ 0x21201C (_NtGdiAddFontMemResourceEx@20.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bInitPrivatePFT@@YGHXZ @ 0x1D0823 (-bInitPrivatePFT@@YGHXZ.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z @ 0x1D0D40 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z.c)
 *     ?bCreateFontFileView@@YGHPBU_FONTFILEVIEW@@PBUtagDOWNLOADFONTHEADER@@KPAPAPAU1@K@Z @ 0x1E8DAB (-bCreateFontFileView@@YGHPBU_FONTFILEVIEW@@PBUtagDOWNLOADFONTHEADER@@KPAPAPAU1@K@Z.c)
 *     _cMapRemoteFonts@16 @ 0x1E949B (_cMapRemoteFonts@16.c)
 *     _vUnmapRemoteFonts@4 @ 0x1E9844 (_vUnmapRemoteFonts@4.c)
 */

int __fastcall GreAddFontMemResourceEx(unsigned int a1, int a2, void **a3, size_t a4, unsigned int *a5)
{
  int v5; // edi
  const struct _FONTFILEVIEW *v8; // ebx
  int v9; // eax
  struct _FONTFILEVIEW ***v11; // [esp+0h] [ebp-68h]
  unsigned int v12; // [esp+4h] [ebp-64h]
  unsigned int v13; // [esp+10h] [ebp-58h] BYREF
  struct _FONTFILEVIEW **v14; // [esp+14h] [ebp-54h] BYREF
  int v15; // [esp+18h] [ebp-50h] BYREF
  struct PFT *v16; // [esp+1Ch] [ebp-4Ch] BYREF
  unsigned __int64 v17[9]; // [esp+20h] [ebp-48h] BYREF

  v5 = 0;
  memset(v17, 0, sizeof(v17));
  v14 = 0;
  v13 = a1;
  v8 = (const struct _FONTFILEVIEW *)(a2 + 16);
  v9 = cMapRemoteFonts(v17, 2);
  if ( a1 && v9 )
  {
    v15 = 1;
    if ( bCreateFontFileView(a1, v17, v8, (const struct tagDOWNLOADFONTHEADER *)&v14, 1u, v11, v12)
      && (gpPFTPrivate || bInitPrivatePFT()) )
    {
      v13 = 0;
      v16 = gpPFTPrivate;
      v5 = PUBLIC_PFTOBJ::hLoadMemFonts((PUBLIC_PFTOBJ *)&v16, v14, a3, a4, &v13, &v15);
      if ( v5 )
      {
        *a5 = v13;
        return v5;
      }
      if ( !v15 )
        return v5;
    }
    vUnmapRemoteFonts(v17);
  }
  return v5;
}
