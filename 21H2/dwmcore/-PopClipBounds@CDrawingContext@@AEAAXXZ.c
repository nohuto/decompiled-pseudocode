/*
 * XREFs of ?PopClipBounds@CDrawingContext@@AEAAXXZ @ 0x180011FDC
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800C55B0 (-Pop@CDrawingContext@@UEAAJXZ.c)
 * Callees:
 *     ?PopClipBoundsFromScope@CScopedClipStack@@QEAAXXZ @ 0x180012060 (-PopClipBoundsFromScope@CScopedClipStack@@QEAAXXZ.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18008A11C (-GetTopGpuClipInScope@CScopedClipStack@@QEBAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AD06C (-DoesContain@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800D5558 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CDrawingContext::PopClipBounds(CDrawingContext *this)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 336, &v4);
  CScopedClipStack::PopClipBoundsFromScope((CDrawingContext *)((char *)this + 864));
  LOBYTE(v2) = 1;
  v4 = 0LL;
  ((void (__fastcall *)(__int64, _QWORD, __int64, __int128 *))CScopedClipStack::GetTopGpuClipInScope)(v3, 0LL, v2, &v4);
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain((char *)this + 196) )
    *((_BYTE *)this + 8041) = 1;
}
