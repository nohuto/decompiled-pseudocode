/*
 * XREFs of _bInitSystemFont@8 @ 0x293D42
 * Callers:
 *     _bInitStockFontsInternal@4 @ 0x2922C4 (_bInitStockFontsInternal@4.c)
 * Callees:
 *     _hfontCreate@20 @ 0x89DF2 (_hfontCreate@20.c)
 *     ?bSetStockFont@@YGHPAXHH@Z @ 0xDBF22 (-bSetStockFont@@YGHPAXHH@Z.c)
 *     _vIFIMetricsToEnumLogFontExDvW@8 @ 0xDBF4C (_vIFIMetricsToEnumLogFontExDvW@8.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z @ 0xDD364 (-bLoadAFont@PUBLIC_PFTOBJ@@QAEHPAGPAKKPAPAVPFF@@PAU_EUDCLOAD@@H@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

BOOL __fastcall bInitSystemFont(unsigned __int16 *a1, int a2)
{
  int v2; // esi
  unsigned int v5; // ebx
  struct PFF *v6; // eax
  int v7; // edi
  int *v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  struct HOBJ__ *v12; // eax
  int v14; // [esp+0h] [ebp-1D8h]
  int v15; // [esp+4h] [ebp-1D4h]
  struct _FONTHASH **v16; // [esp+14h] [ebp-1C4h] BYREF
  int v17; // [esp+18h] [ebp-1C0h]
  int v18; // [esp+1Ch] [ebp-1BCh]
  struct PFF *v19; // [esp+20h] [ebp-1B8h] BYREF
  unsigned int i; // [esp+24h] [ebp-1B4h] BYREF
  _DWORD Src[107]; // [esp+28h] [ebp-1B0h] BYREF

  v2 = 0;
  i = 0;
  v17 = a2;
  memset(Src, 0, 0x1A4u);
  if ( !a1 )
    return v2;
  if ( !*a1 )
    return v2;
  if ( !a2 )
    return v2;
  v16 = gpPFTPublic;
  v19 = 0;
  if ( !PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v16, a1, &i, 2u, &v19, 0, 0) )
    return v2;
  v5 = i;
  if ( !i )
    return v2;
  v6 = v19;
  if ( !v19 )
    return v2;
  v19 = (struct PFF *)0x7FFFFFFF;
  v7 = 0;
  v18 = 0;
  v8 = (int *)((char *)v6 + 132);
  for ( i = (unsigned int)v8; ; v8 = (int *)i )
  {
    v9 = *v8;
    if ( !v9 )
      goto LABEL_14;
    v10 = *(_DWORD *)(v9 + 20);
    if ( (*(_DWORD *)(v10 + 48) & 0x3000010) != 0 )
      break;
    v11 = v17 - *(__int16 *)(v10 + 62) - *(__int16 *)(v10 + 60);
    if ( v11 >= 0 && v11 < (int)v19 )
    {
      v19 = (struct PFF *)(v17 - *(__int16 *)(v10 + 62) - *(__int16 *)(v10 + 60));
      v7 = v9;
      if ( !v11 )
        goto LABEL_17;
    }
LABEL_14:
    i += 4;
    if ( ++v18 >= v5 )
      goto LABEL_17;
  }
  v7 = v9;
LABEL_17:
  if ( v7 )
  {
    vIFIMetricsToEnumLogFontExDvW((int)Src, *(_DWORD *)(v7 + 20));
    if ( (*(_DWORD *)(*(_DWORD *)(v7 + 20) + 48) & 0x3000010) != 0 )
    {
      Src[0] = v17;
      Src[1] = 0;
    }
    gppfeMapperDefault = (struct PFE *)v7;
    BYTE2(Src[6]) = 2;
    v12 = hfontCreate(Src, 1, 2, 0, 72);
    return bSetStockFont(13, (int)v12, 0, v14, v15);
  }
  return v2;
}
