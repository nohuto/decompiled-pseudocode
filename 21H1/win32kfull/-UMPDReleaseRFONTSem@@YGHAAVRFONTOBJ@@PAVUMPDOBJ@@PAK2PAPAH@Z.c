/*
 * XREFs of ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QAE@PAVSURFACE@@PAU_FONTOBJ@@H@Z @ 0xF6EBC (--0UMPDReleaseAcquireRFONTSem@@QAE@PAVSURFACE@@PAU_FONTOBJ@@H@Z.c)
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
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bAllocFontLinks@UMPDOBJ@@QAEHI@Z @ 0x21113A (-bAllocFontLinks@UMPDOBJ@@QAEHI@Z.c)
 */

int __userpurge UMPDReleaseRFONTSem@<eax>(
        UMPDOBJ *a1@<edx>,
        int *a2@<ecx>,
        struct RFONTOBJ *a3,
        struct UMPDOBJ *a4,
        unsigned int *a5,
        unsigned int *a6,
        int **a7)
{
  unsigned int v8; // ebx
  int v9; // ecx
  struct RFONTOBJ *v10; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // edx
  UMPDOBJ *v19; // ecx
  unsigned int v20; // eax
  int v21; // eax
  void *v22; // eax
  unsigned int *v23; // ecx
  void *v24; // edx
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // eax
  int Size; // [esp+Ch] [ebp-14h]
  unsigned int v30; // [esp+10h] [ebp-10h]
  unsigned int v31; // [esp+14h] [ebp-Ch]
  int v33; // [esp+1Ch] [ebp-4h]

  v8 = 0;
  v31 = 0;
  v9 = *a2;
  if ( !v9 )
    return 0;
  v10 = a3;
  if ( a1 )
  {
    if ( !a3 && !a4 && !a5 )
    {
      v33 = 1;
      goto LABEL_11;
    }
    return 0;
  }
  if ( !a3 || !a4 || !a5 )
    return 0;
  *(_DWORD *)a3 = 0;
  *(_DWORD *)a4 = 0;
  v9 = *a2;
  v33 = 0;
LABEL_11:
  v11 = *(_DWORD *)(v9 + 788);
  if ( !v11 )
    goto LABEL_56;
  GreAcquireSemaphore(v11);
  v12 = *(_DWORD *)(*a2 + 716);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 + 548);
    if ( v13 )
    {
      if ( GreIsSemaphoreOwnedByCurrentThread(v13) )
      {
        EtwTraceGreLockReleaseSemaphore(
          L"rfo.prfnt->prfntSystemTT->hsemCache",
          *(_DWORD *)(*(_DWORD *)(*a2 + 716) + 548));
        GreReleaseSemaphoreInternal(*(_DWORD *)(*(_DWORD *)(*a2 + 716) + 548));
        if ( v33 )
          *((_DWORD *)a1 + 55) |= 0x20u;
        else
          *(_DWORD *)a3 |= 0x20u;
      }
    }
  }
  v14 = *(_DWORD *)(*a2 + 720);
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 548);
    if ( v15 )
    {
      if ( GreIsSemaphoreOwnedByCurrentThread(v15) )
      {
        EtwTraceGreLockReleaseSemaphore(
          L"rfo.prfnt->prfntSysEUDC->hsemCache",
          *(_DWORD *)(*(_DWORD *)(*a2 + 720) + 548));
        GreReleaseSemaphoreInternal(*(_DWORD *)(*(_DWORD *)(*a2 + 720) + 548));
        if ( v33 )
          *((_DWORD *)a1 + 55) |= 0x40u;
        else
          *(_DWORD *)a3 |= 0x40u;
      }
    }
  }
  v16 = *(_DWORD *)(*a2 + 724);
  if ( v16 && (v17 = *(_DWORD *)(v16 + 548)) != 0 && GreIsSemaphoreOwnedByCurrentThread(v17) )
  {
    EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->prfntDefEUDC->hsemCache", *(_DWORD *)(*(_DWORD *)(*a2 + 724) + 548));
    GreReleaseSemaphoreInternal(*(_DWORD *)(*(_DWORD *)(*a2 + 724) + 548));
    v18 = v33;
    v19 = a1;
    if ( v33 )
      *((_DWORD *)a1 + 55) |= 0x80u;
    else
      *(_DWORD *)a3 |= 0x80u;
  }
  else
  {
    v19 = a1;
    v18 = v33;
  }
  v20 = *(_DWORD *)(*a2 + 780);
  v30 = v20;
  if ( v20 )
  {
    if ( v18 )
    {
      v21 = UMPDOBJ::bAllocFontLinks(v19, v20);
    }
    else
    {
      Size = 4 * v20;
      if ( v20 <= 0xA )
      {
        v23 = a5;
        v24 = (void *)*a5;
        v31 = *a5;
      }
      else
      {
        v22 = PALLOCMEM2(4 * v20, 1886221639, 0);
        v23 = a5;
        v24 = v22;
        v31 = (unsigned int)v22;
        v20 = v30;
      }
      *v23 = (unsigned int)v24;
      if ( !v24 )
        goto LABEL_54;
      *(_DWORD *)a4 = v20;
      memset(v24, 0, Size);
      v21 = 1;
    }
    if ( v21 && v30 )
    {
      while ( 1 )
      {
        v25 = *(_DWORD *)(*(_DWORD *)(*a2 + 728) + 4 * v8);
        if ( !v25 )
          goto LABEL_50;
        v26 = *(_DWORD *)(v25 + 548);
        if ( !v26 || !GreIsSemaphoreOwnedByCurrentThread(v26) )
          goto LABEL_50;
        EtwTraceGreLockReleaseSemaphore(
          L"rfo.prfnt->paprfntFaceName[ii]->hsemCache",
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*a2 + 728) + 4 * v8) + 548));
        GreReleaseSemaphoreInternal(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*a2 + 728) + 4 * v8) + 548));
        if ( v33 )
        {
          if ( v8 >= *((_DWORD *)a1 + 56) )
            goto LABEL_50;
          v27 = (_DWORD *)*((_DWORD *)a1 + 51);
          if ( !v27 )
            goto LABEL_50;
        }
        else
        {
          v27 = (_DWORD *)v31;
        }
        v27[v8] = 1;
LABEL_50:
        if ( ++v8 >= v30 )
        {
          v10 = a3;
          break;
        }
      }
    }
    v18 = v33;
  }
  if ( !v18 )
  {
LABEL_54:
    *(_DWORD *)v10 |= *(_DWORD *)(*a2 + 708) << 16;
    *(_DWORD *)(*a2 + 708) |= 0x200u;
  }
  EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemEUDC", *(_DWORD *)(*a2 + 788));
  GreReleaseSemaphoreInternal(*(_DWORD *)(*a2 + 788));
LABEL_56:
  if ( *(_DWORD *)(*a2 + 548) && GreIsSemaphoreOwnedByCurrentThread(*(_DWORD *)(*a2 + 548)) )
  {
    EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemCache", *(_DWORD *)(*a2 + 548));
    GreReleaseSemaphoreInternal(*(_DWORD *)(*a2 + 548));
    if ( v33 )
      *((_DWORD *)a1 + 55) |= 0x10u;
    else
      *(_DWORD *)v10 |= 0x10u;
  }
  return 1;
}
