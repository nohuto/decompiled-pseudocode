/*
 * XREFs of ?PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x18001063C
 * Callers:
 *     ?PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800105E0 (-PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800956F0 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CBaseClipStack::PushExact(CBaseClipStack *this, const struct MilRectF *a2)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_OWORD *)a2;
  return CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
           this,
           &v3);
}
