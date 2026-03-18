/*
 * XREFs of ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180178E44
 * Callers:
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18000DF50 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000E6D0 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18002F788 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008F6EC (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

char __fastcall CDrawingContext::CalcLocalSpaceClippedBounds(__int64 a1, _OWORD *a2, __int64 a3)
{
  CMILMatrix *TopByReference; // rax
  char result; // al
  float v7; // xmm0_4
  float v8; // xmm1_4
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  *(_OWORD *)a3 = *a2;
  v9 = 0LL;
  CDrawingContext::GetClipBoundsWorld(a1, (__int64)&v9);
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 408));
  result = CMILMatrix::Get2DBoundsUsing2DInverse(TopByReference, (float *)&v9);
  if ( result )
  {
    if ( *(float *)a3 < 0.0 )
      *(_DWORD *)a3 = 0;
    if ( *(float *)(a3 + 4) < 0.0 )
      *(_DWORD *)(a3 + 4) = 0;
    v7 = *(float *)(a3 + 8);
    if ( v7 > 0.0 )
    {
      *(_DWORD *)(a3 + 8) = 0;
      v7 = 0.0;
    }
    v8 = *(float *)(a3 + 12);
    if ( v8 > 0.0 )
    {
      *(_DWORD *)(a3 + 12) = 0;
      v8 = 0.0;
      v7 = *(float *)(a3 + 8);
    }
    if ( v7 <= *(float *)a3 || v8 <= *(float *)(a3 + 4) )
    {
      *(_QWORD *)(a3 + 8) = 0LL;
      *(_QWORD *)a3 = 0LL;
    }
  }
  return result;
}
