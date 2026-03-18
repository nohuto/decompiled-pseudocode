/*
 * XREFs of ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x180068B30
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006CA8 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1800074D8 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x1800686F0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 *     ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18006CF68 (-IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUn.c)
 * Callees:
 *     ?Intersects@CStripe@Internal@FastRegion@@SA_NPEBV123@0@Z @ 0x180068BE8 (-Intersects@CStripe@Internal@FastRegion@@SA_NPEBV123@0@Z.c)
 */

char __fastcall FastRegion::Internal::CRgnData::Intersects(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // rax
  _DWORD *v3; // r11
  const struct FastRegion::Internal::CStripe *v4; // r9
  int v5; // ecx
  const struct FastRegion::Internal::CStripe *v6; // r15
  const struct FastRegion::Internal::CStripe *v7; // rbp
  const struct FastRegion::Internal::CStripe *v8; // r11
  const struct FastRegion::Internal::CStripe *v9; // rbx
  const struct FastRegion::Internal::CStripe *v10; // rcx
  const struct FastRegion::Internal::CStripe *v11; // rdx
  const struct FastRegion::Internal::CStripe *v12; // r11
  int v14; // eax
  int v15; // esi
  int v16; // edi
  const struct FastRegion::Internal::CStripe *v17; // rdx

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = (const struct FastRegion::Internal::CStripe *)v3;
  v5 = *((_DWORD *)a2 + 3);
  v6 = (const struct FastRegion::Internal::CStripe *)&v3[2 * v2];
  v7 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 8 * *(int *)a2 + 12);
  if ( *v3 >= v5 )
  {
    v9 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    if ( *v3 > v5 )
    {
      while ( 1 )
      {
        v14 = *(_DWORD *)v9;
        if ( *v3 < *(_DWORD *)v9 )
        {
          v11 = (const struct FastRegion::Internal::CStripe *)((char *)v9 - 8);
          goto LABEL_10;
        }
        v11 = v9;
        v9 = (const struct FastRegion::Internal::CStripe *)((char *)v9 + 8);
        if ( *v3 <= v14 )
          break;
        if ( v9 == v7 )
          return 0;
      }
      if ( v9 == v7 )
        return 0;
      goto LABEL_10;
    }
LABEL_9:
    v11 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
LABEL_10:
    v10 = v4;
    goto LABEL_6;
  }
  v8 = (const struct FastRegion::Internal::CStripe *)(v3 + 2);
  while ( *(_DWORD *)v8 < v5 )
  {
    v8 = (const struct FastRegion::Internal::CStripe *)((char *)v8 + 8);
    if ( v8 == v6 )
      return 0;
  }
  v4 = v8;
  v9 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
  if ( *(_DWORD *)v8 <= v5 )
  {
    if ( (const struct FastRegion::Internal::CStripe *)((char *)v8 + 8) == v6 )
      return 0;
    goto LABEL_9;
  }
  v10 = (const struct FastRegion::Internal::CStripe *)((char *)v8 - 8);
  v11 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
LABEL_6:
  if ( FastRegion::Internal::CStripe::Intersects(v10, v11) )
    return 1;
  v15 = *(_DWORD *)v9;
  while ( 1 )
  {
    v16 = *(_DWORD *)v12;
    while ( 1 )
    {
      v17 = v9;
      if ( v16 < v15 )
        break;
      v9 = (const struct FastRegion::Internal::CStripe *)((char *)v9 + 8);
      if ( v16 <= v15 )
      {
        if ( (const struct FastRegion::Internal::CStripe *)((char *)v12 + 8) == v6 || v9 == v7 )
          return 0;
        if ( FastRegion::Internal::CStripe::Intersects(v12, v17) )
          return 1;
        v16 = *(_DWORD *)v12;
      }
      else
      {
        if ( v9 == v7 )
          return 0;
        if ( FastRegion::Internal::CStripe::Intersects(
               (const struct FastRegion::Internal::CStripe *)((char *)v12 - 8),
               v17) )
        {
          return 1;
        }
      }
      v15 = *(_DWORD *)v9;
    }
    if ( (const struct FastRegion::Internal::CStripe *)((char *)v12 + 8) == v6 )
      break;
    if ( FastRegion::Internal::CStripe::Intersects(v12, (const struct FastRegion::Internal::CStripe *)((char *)v9 - 8)) )
      return 1;
  }
  return 0;
}
