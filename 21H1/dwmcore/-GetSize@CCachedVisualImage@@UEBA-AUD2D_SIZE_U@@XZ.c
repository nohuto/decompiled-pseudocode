/*
 * XREFs of ?GetSize@CCachedVisualImage@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180033B30
 * Callers:
 *     ?GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180032AD0 (-GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800341CC (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@IEAAJXZ @ 0x18008DED4 (-EnsureVisualTree@CCachedVisualImage@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

struct D2D_SIZE_U __fastcall CCachedVisualImage::GetSize(CCachedVisualImage *this, __int64 a2)
{
  __int64 v4; // rax
  double v5; // xmm0_8
  double v6; // xmm3_8
  __int64 v7; // rax
  __int128 v8; // xmm0
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v13; // [rsp+20h] [rbp-20h]
  _DWORD v14[4]; // [rsp+28h] [rbp-18h] BYREF

  *(_QWORD *)a2 = 0LL;
  if ( *((_BYTE *)this + 1737) )
  {
    *(_QWORD *)a2 = *((_QWORD *)this + 216);
  }
  else if ( *((_BYTE *)this + 1738) )
  {
    if ( *((_QWORD *)this + 9)
      && (int)CCachedVisualImage::EnsureVisualTree((CCachedVisualImage *)((char *)this - 64)) >= 0 )
    {
      PixelAlign(v14, *((_QWORD *)this + 14) + 64LL);
      *(_DWORD *)a2 = v14[2] - v14[0];
      *(_DWORD *)(a2 + 4) = v14[3] - v14[1];
    }
  }
  else
  {
    v4 = *((_QWORD *)this + 8);
    if ( v4 )
    {
      v5 = *(double *)(v4 + 56);
      v6 = *(double *)(v4 + 64);
    }
    else
    {
      v5 = *((double *)this + 6);
      v6 = *((double *)this + 7);
    }
    if ( v5 == 0.0 && v6 == 0.0 )
    {
      v7 = *((_QWORD *)this + 5);
      if ( v7 )
        v8 = *(_OWORD *)(v7 + 56);
      else
        v8 = *(_OWORD *)((char *)this + 24);
      v9 = *((float *)&v8 + 3) - *((float *)&v8 + 1);
      v5 = (float)(*((float *)&v8 + 2) - *(float *)&v8);
      v6 = v9;
    }
    v10 = v5;
    v11 = v10 + 6291456.25;
    *(_DWORD *)a2 = (int)(LODWORD(v11) << 10) >> 11;
    v13 = (float)v6 + 6291456.25;
    *(_DWORD *)(a2 + 4) = (int)(LODWORD(v13) << 10) >> 11;
  }
  return (struct D2D_SIZE_U)a2;
}
