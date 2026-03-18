/*
 * XREFs of ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x180179198
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800CA070 (-Pop@CDrawingContext@@UEAAJXZ.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18003C0BC (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180066654 (-DoesContain@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DBBA4 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18018FFB8 (-HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x180190004 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 */

void __fastcall CDrawingContext::PopCpuClip(CDrawingContext *this)
{
  bool v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h] BYREF

  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 94, &v3);
  CScopedClipStack::PopCpuClipFromScope((CDrawingContext *)((char *)this + 936), &v2);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 5955)
      && !CScopedClipStack::HasAnyWorldAxisAlignedRectangleCpuClipsInScope((CDrawingContext *)((char *)this + 936)) )
    {
      *((_BYTE *)this + 5955) = 0;
    }
    v3 = 0LL;
    CScopedClipStack::GetTopGpuClipInScope((CDrawingContext *)((char *)this + 936), 1);
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain((float *)this + 42, (float *)&v3) )
      *((_BYTE *)this + 5954) = 1;
  }
}
