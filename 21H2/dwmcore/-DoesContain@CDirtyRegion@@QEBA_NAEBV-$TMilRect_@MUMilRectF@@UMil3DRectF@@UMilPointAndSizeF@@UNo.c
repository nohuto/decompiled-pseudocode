/*
 * XREFs of ?DoesContain@CDirtyRegion@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180007C7C
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006CA8 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AD06C (-DoesContain@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

char __fastcall CDirtyRegion::DoesContain(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // r8d
  int v3; // r8d
  unsigned int v4; // r10d

  v1 = a1;
  if ( !*(_BYTE *)(a1 + 4424) )
  {
    v2 = 0;
    if ( !*(_DWORD *)(a1 + 2820) )
      return 0;
    while ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(16LL * v2 + v1 + 2660) )
    {
      v2 = v3 + 1;
      if ( v2 >= v4 )
        return 0;
    }
  }
  return 1;
}
