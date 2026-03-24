/*
 * XREFs of ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x1800C51F4
 * Callers:
 *     ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180064010 (-IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUn.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N@Z @ 0x18017A340 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x18017CCC4 (-PaddingsIntersectWithDestRect@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180183324 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?Intersects@CStripe@Internal@FastRegion@@SA_NPEBV123@0@Z @ 0x1800C52A4 (-Intersects@CStripe@Internal@FastRegion@@SA_NPEBV123@0@Z.c)
 */

char __fastcall FastRegion::Internal::CRgnData::Intersects(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // rax
  _DWORD *v3; // r11
  int v4; // ecx
  const struct FastRegion::Internal::CStripe *v5; // r8
  const struct FastRegion::Internal::CStripe *v6; // r12
  char *v7; // r15
  char *v8; // rbx
  const struct FastRegion::Internal::CStripe *v9; // rcx
  const struct FastRegion::Internal::CStripe *v10; // rdi
  const struct FastRegion::Internal::CStripe *v11; // r11
  const struct FastRegion::Internal::CStripe *v13; // r11
  int v14; // ebp
  bool v15; // zf
  int v16; // eax
  int v17; // esi

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *((_DWORD *)a2 + 3);
  v5 = (const struct FastRegion::Internal::CStripe *)v3;
  v6 = (const struct FastRegion::Internal::CStripe *)&v3[2 * v2];
  v7 = (char *)a2 + 8 * *(int *)a2 + 12;
  if ( *v3 < v4 )
  {
    v13 = (const struct FastRegion::Internal::CStripe *)(v3 + 2);
    while ( *(_DWORD *)v13 < v4 )
    {
      v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
      if ( v13 == v6 )
        return 0;
    }
    v5 = v13;
    v8 = (char *)a2 + 20;
    if ( *(_DWORD *)v13 > v4 )
    {
      v9 = (const struct FastRegion::Internal::CStripe *)((char *)v13 - 8);
      goto LABEL_4;
    }
    v15 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8) == v6;
LABEL_19:
    if ( v15 )
      return 0;
  }
  else
  {
    v8 = (char *)a2 + 20;
    if ( *v3 > v4 )
    {
      while ( 1 )
      {
        v16 = *(_DWORD *)v8;
        if ( *v3 < *(_DWORD *)v8 )
          break;
        v8 += 8;
        if ( *v3 <= v16 )
        {
          v15 = v8 == v7;
          goto LABEL_19;
        }
        if ( v8 == v7 )
          return 0;
      }
    }
  }
  v9 = v5;
LABEL_4:
  v10 = (const struct FastRegion::Internal::CStripe *)(v8 - 8);
  if ( FastRegion::Internal::CStripe::Intersects(v9, (const struct FastRegion::Internal::CStripe *)(v8 - 8)) )
    return 1;
  v14 = *(_DWORD *)v8;
  while ( 1 )
  {
    v17 = *(_DWORD *)v11;
    while ( v17 >= v14 )
    {
      v8 += 8;
      if ( v17 <= v14 )
      {
        if ( (const struct FastRegion::Internal::CStripe *)((char *)v11 + 8) == v6 || v8 == v7 )
          return 0;
        v10 = (const struct FastRegion::Internal::CStripe *)(v8 - 8);
        if ( FastRegion::Internal::CStripe::Intersects(v11, (const struct FastRegion::Internal::CStripe *)(v8 - 8)) )
          return 1;
        v17 = *(_DWORD *)v11;
      }
      else
      {
        if ( v8 == v7 )
          return 0;
        v10 = (const struct FastRegion::Internal::CStripe *)(v8 - 8);
        if ( FastRegion::Internal::CStripe::Intersects(
               (const struct FastRegion::Internal::CStripe *)((char *)v11 - 8),
               (const struct FastRegion::Internal::CStripe *)(v8 - 8)) )
        {
          return 1;
        }
      }
      v14 = *(_DWORD *)v8;
    }
    if ( (const struct FastRegion::Internal::CStripe *)((char *)v11 + 8) == v6 )
      break;
    if ( FastRegion::Internal::CStripe::Intersects(v11, v10) )
      return 1;
  }
  return 0;
}
