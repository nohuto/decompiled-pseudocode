/*
 * XREFs of _bInitOneStockFontInternal@16 @ 0x2925F6
 * Callers:
 *     ?FinishStockFontInitInternal@@YGXPBGH@Z @ 0xDBCEC (-FinishStockFontInitInternal@@YGXPBGH@Z.c)
 *     _bInitStockFontsInternal@4 @ 0x2922C4 (_bInitStockFontsInternal@4.c)
 * Callees:
 *     _hfontCreate@20 @ 0x89DF2 (_hfontCreate@20.c)
 *     ?bSetStockFont@@YGHPAXHH@Z @ 0xDBF22 (-bSetStockFont@@YGHPAXHH@Z.c)
 *     _vIFIMetricsToEnumLogFontExDvW@8 @ 0xDBF4C (_vIFIMetricsToEnumLogFontExDvW@8.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z @ 0xDD364 (-bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

BOOL __fastcall bInitOneStockFontInternal(unsigned __int16 *a1, int a2, int a3, void *a4)
{
  int v4; // edi
  int v6; // esi
  struct HOBJ__ *v7; // eax
  int v9; // [esp+0h] [ebp-1D0h]
  int v10; // [esp+4h] [ebp-1CCh]
  struct _FONTHASH **v12; // [esp+14h] [ebp-1BCh] BYREF
  struct PFF *v13; // [esp+18h] [ebp-1B8h] BYREF
  unsigned int v14; // [esp+1Ch] [ebp-1B4h] BYREF
  _DWORD Src[107]; // [esp+20h] [ebp-1B0h] BYREF

  v4 = 0;
  v12 = gpPFTPublic;
  v14 = 0;
  v13 = 0;
  memset(Src, 0, 0x1A4u);
  if ( PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v12, a1, &v14, 2u, &v13, 0, 0) )
  {
    if ( v14 )
    {
      if ( v13 )
      {
        v6 = *((_DWORD *)v13 + 33);
        if ( v6 )
        {
          vIFIMetricsToEnumLogFontExDvW((int)Src, *(_DWORD *)(v6 + 20));
          if ( a3 == 13 )
          {
            gppfeMapperDefault = (struct PFE *)v6;
            HIBYTE(Src[5]) = _gjCurCharset;
          }
          BYTE2(Src[6]) = 2;
          v7 = hfontCreate(Src, a2, 2, 0, 72);
          return bSetStockFont(a3, (int)v7, a4, v9, v10);
        }
      }
    }
  }
  return v4;
}
