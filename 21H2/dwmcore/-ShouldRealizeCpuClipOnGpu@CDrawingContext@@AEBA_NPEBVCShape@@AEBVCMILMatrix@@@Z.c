/*
 * XREFs of ?ShouldRealizeCpuClipOnGpu@CDrawingContext@@AEBA_NPEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18008B19C
 * Callers:
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008A438 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180063700 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18008B268 (-HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800AE2B4 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x1800B34A0 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B5DF4 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CDrawingContext::ShouldRealizeCpuClipOnGpu(
        CDrawingContext *this,
        const struct CShape *a2,
        const struct CMILMatrix *a3)
{
  bool result; // al
  __int64 v6; // rax
  double v7; // xmm0_8
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  result = 0;
  if ( !CScopedClipStack::HasAnyWorldAxisAlignedRectangleCpuClipsInScope((CDrawingContext *)((char *)this + 864)) )
  {
    if ( CShape::IsAxisAlignedRectangle(a2) )
    {
      if ( CMILMatrix::Is2DAxisAlignedPreserving(a3) )
      {
        v6 = *(_QWORD *)a2;
        v8 = 0LL;
        if ( (*(int (__fastcall **)(const struct CShape *, __int128 *, const struct CMILMatrix *))(v6 + 48))(
               a2,
               &v8,
               a3) >= 0
          && !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(&v8) )
        {
          v7 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(&v8);
          if ( *(float *)&v7 >= (float)CCommonRegistryData::CpuClipAreaThreshold )
            return 1;
        }
      }
    }
  }
  return result;
}
