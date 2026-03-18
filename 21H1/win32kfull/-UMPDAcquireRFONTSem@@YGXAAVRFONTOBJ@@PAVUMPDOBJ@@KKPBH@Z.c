/*
 * XREFs of ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z @ 0x210A97
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QAE@XZ @ 0xF6F23 (--1UMPDReleaseAcquireRFONTSem@@QAE@XZ.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QAEHAAVXDCOBJ@@AAVRFONTOBJ@@PAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1E5583 (-bTextOutSimpleFill@EPATHOBJ@@QAEHAAVXDCOBJ@@AAVRFONTOBJ@@PAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@P.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QAEHAAVXDCOBJ@@AAVRFONTOBJ@@PAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@K@Z @ 0x1E5662 (-bTextOutSimpleStroke1@EPATHOBJ@@QAEHAAVXDCOBJ@@AAVRFONTOBJ@@PAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QAEPAU_XFORMOBJ@@PAU_FONTOBJ@@@Z @ 0x1F3B64 (-GetFONTOBJXform@UMPDOBJ@@QAEPAU_XFORMOBJ@@PAU_FONTOBJ@@@Z.c)
 *     ?bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@AAVRFONTOBJ@@PAVPDEVOBJ@@K4@Z @ 0x1F86ED (-bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@.c)
 *     ?UMPDDrvFontManagement@@YGKPAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z @ 0x20C60A (-UMPDDrvFontManagement@@YGKPAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YGHPAUDHPDEV__@@PAU_FONTOBJ@@KPAKPAXK@Z @ 0x20D7AC (-UMPDDrvQueryAdvanceWidths@@YGHPAUDHPDEV__@@PAU_FONTOBJ@@KPAKPAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YGJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z @ 0x20DD7A (-UMPDDrvQueryFontData@@YGJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z.c)
 *     ?UMPDDrvTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x20F625 (-UMPDDrvTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@.c)
 *     ?GetETMFontManagement@@YGHAAVRFONTOBJ@@VPDEVOBJ@@PAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK4@Z @ 0x210654 (-GetETMFontManagement@@YGHAAVRFONTOBJ@@VPDEVOBJ@@PAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK4@Z.c)
 *     ?TextOutBitBlt@@YGXPAVSURFACE@@AAVRFONTOBJ@@PAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@6PAU_BRUSHOBJ@@6K@Z @ 0x2109B2 (-TextOutBitBlt@@YGXPAVSURFACE@@AAVRFONTOBJ@@PAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@.c)
 *     _NtGdiEngTextOut@40 @ 0x21998C (_NtGdiEngTextOut@40.c)
 *     _NtGdiFONTOBJ_cGetGlyphs@20 @ 0x219EAF (_NtGdiFONTOBJ_cGetGlyphs@20.c)
 *     _NtGdiFONTOBJ_pQueryGlyphAttrs@8 @ 0x21A080 (_NtGdiFONTOBJ_pQueryGlyphAttrs@8.c)
 *     _NtGdiFONTOBJ_pfdg@4 @ 0x21A194 (_NtGdiFONTOBJ_pfdg@4.c)
 *     _NtGdiFONTOBJ_pifi@4 @ 0x21A29C (_NtGdiFONTOBJ_pifi@4.c)
 * Callees:
 *     <none>
 */

void __userpurge UMPDAcquireRFONTSem(
        _DWORD *a1@<edx>,
        int *a2@<ecx>,
        struct RFONTOBJ *a3,
        struct UMPDOBJ *a4,
        unsigned int a5,
        unsigned int a6,
        const int *a7)
{
  int v9; // edx
  struct UMPDOBJ *v10; // eax
  struct UMPDOBJ *v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  char v16; // cl
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  struct UMPDOBJ *v21; // eax
  unsigned int v22; // edi
  int v23; // ecx
  bool v24; // zf
  int v25; // eax
  struct UMPDOBJ *v26; // [esp+8h] [ebp-8h]
  int v27; // [esp+Ch] [ebp-4h]
  int v28; // [esp+18h] [ebp+8h]
  struct UMPDOBJ *v29; // [esp+1Ch] [ebp+Ch]
  struct UMPDOBJ *v30; // [esp+1Ch] [ebp+Ch]

  v27 = 0;
  v9 = *a2;
  if ( !*a2 )
    return;
  if ( a1 )
  {
    v10 = (struct UMPDOBJ *)a1[55];
    v27 = 1;
    v29 = v10;
    if ( a1[51] )
      v11 = (struct UMPDOBJ *)a1[56];
    else
      v11 = 0;
  }
  else
  {
    v11 = a4;
    LOBYTE(v10) = (_BYTE)a3;
    v29 = a3;
  }
  v26 = v11;
  if ( ((unsigned __int8)v10 & 0x10) != 0 )
  {
    v12 = *(_DWORD *)(v9 + 548);
    if ( v12 )
    {
      GreAcquireSemaphore(v12);
      if ( v27 )
        a1[55] &= ~0x10u;
    }
  }
  v13 = *(_DWORD *)(*a2 + 788);
  if ( !v13 )
    return;
  GreAcquireSemaphore(v13);
  v28 = 0;
  v14 = v27;
  if ( !v27 )
  {
    v15 = *(_DWORD *)(*a2 + 708);
    if ( (v15 & 0x200) != 0 )
    {
      v28 = 1;
      *(_DWORD *)(*a2 + 708) = v15 & 0xFFFFFDFF;
      *(_DWORD *)(*a2 + 708) = (unsigned int)v29 >> 16;
    }
  }
  v16 = (char)v29;
  if ( ((unsigned __int8)v29 & 0x20) != 0 )
  {
    v17 = *(_DWORD *)(*a2 + 716);
    if ( v17 )
    {
      GreAcquireSemaphore(*(_DWORD *)(v17 + 548));
      v14 = v27;
      v16 = (char)v29;
      if ( v27 )
        a1[55] &= ~0x20u;
    }
  }
  if ( (v16 & 0x40) != 0 )
  {
    v18 = *(_DWORD *)(*a2 + 720);
    if ( v18 )
    {
      if ( v14 )
      {
        GreAcquireSemaphore(*(_DWORD *)(v18 + 548));
        a1[55] &= ~0x40u;
LABEL_25:
        v16 = (char)v29;
        goto LABEL_26;
      }
      if ( v28 )
      {
        GreAcquireSemaphore(*(_DWORD *)(v18 + 548));
        goto LABEL_25;
      }
    }
  }
LABEL_26:
  v19 = v27;
  if ( v16 < 0 )
  {
    v20 = *(_DWORD *)(*a2 + 724);
    if ( v20 )
    {
      if ( v27 )
      {
        GreAcquireSemaphore(*(_DWORD *)(v20 + 548));
        a1[55] &= ~0x80u;
      }
      else
      {
        if ( !v28 )
          goto LABEL_33;
        GreAcquireSemaphore(*(_DWORD *)(v20 + 548));
      }
      v19 = v27;
    }
  }
LABEL_33:
  if ( v26 )
  {
    v21 = *(struct UMPDOBJ **)(*a2 + 780);
    v30 = v21;
    if ( v26 <= v21 )
    {
      v21 = v26;
      v30 = v26;
    }
    v22 = 0;
    if ( v21 )
    {
      do
      {
        v23 = *(_DWORD *)(*(_DWORD *)(*a2 + 728) + 4 * v22);
        if ( v23 )
        {
          if ( !v19 )
          {
            v24 = *(_DWORD *)(a5 + 4 * v22) == 0;
LABEL_42:
            if ( !v24 )
            {
              if ( v19 )
              {
                GreAcquireSemaphore(*(_DWORD *)(v23 + 548));
                if ( v22 < a1[56] )
                {
                  v25 = a1[51];
                  if ( v25 )
                    *(_DWORD *)(v25 + 4 * v22) = 0;
                }
              }
              else if ( v28 )
              {
                GreAcquireSemaphore(*(_DWORD *)(v23 + 548));
              }
            }
            goto LABEL_49;
          }
          if ( v22 < a1[56] )
          {
            v24 = *(_DWORD *)(a1[51] + 4 * v22) == 0;
            goto LABEL_42;
          }
        }
LABEL_49:
        v19 = v27;
        ++v22;
      }
      while ( v22 < (unsigned int)v30 );
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemEUDC", *(_DWORD *)(*a2 + 788));
  GreReleaseSemaphoreInternal(*(_DWORD *)(*a2 + 788));
}
