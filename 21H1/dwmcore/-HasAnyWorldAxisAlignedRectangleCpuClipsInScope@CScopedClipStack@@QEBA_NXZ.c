/*
 * XREFs of ?HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180192B88
 * Callers:
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x18017BDA8 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800BC3E4 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x1800D3474 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 */

bool __fastcall CScopedClipStack::HasAnyWorldAxisAlignedRectangleCpuClipsInScope(CScopedClipStack *this)
{
  __int64 v1; // rcx
  char v2; // r8

  if ( !CScopedClipStack::HasCpuClipsInScope(this)
    || TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)(136LL
                                                                                         * (unsigned int)(*(_DWORD *)(v1 + 896) - 1)
                                                                                         + *(_QWORD *)(v1 + 872)
                                                                                         + 96LL)) )
  {
    return 0;
  }
  return v2;
}
