/*
 * XREFs of ?GetSize@CCachedVisualImage@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180060600
 * Callers:
 *     ?GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005FBC0 (-GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005FCDC (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 * Callees:
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x180077274 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@IEAAJXZ @ 0x1800D7DE0 (-EnsureVisualTree@CCachedVisualImage@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

struct D2D_SIZE_U __fastcall CCachedVisualImage::GetSize(CCachedVisualImage *this, __int64 a2)
{
  __int64 v3; // rax
  double v4; // xmm0_8
  double v5; // xmm3_8
  __int64 v6; // rax
  __int128 v7; // xmm0
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // r8d
  unsigned int v16; // r10d
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // r8d
  float v21; // [rsp+20h] [rbp-28h]

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
      PixelAlign(v12, 1LL);
      v14 = PixelAlign(v13, 0LL);
      *(_DWORD *)a2 = v15 - v14;
      PixelAlign(v17, v16);
      v19 = PixelAlign(v18, 0LL);
      *(_DWORD *)(a2 + 4) = v20 - v19;
    }
  }
  else
  {
    v3 = *((_QWORD *)this + 8);
    if ( v3 )
    {
      v4 = *(double *)(v3 + 56);
      v5 = *(double *)(v3 + 64);
    }
    else
    {
      v4 = *((double *)this + 6);
      v5 = *((double *)this + 7);
    }
    if ( v4 == 0.0 && v5 == 0.0 )
    {
      v6 = *((_QWORD *)this + 5);
      if ( v6 )
        v7 = *(_OWORD *)(v6 + 56);
      else
        v7 = *(_OWORD *)((char *)this + 24);
      v8 = *((float *)&v7 + 3) - *((float *)&v7 + 1);
      v4 = (float)(*((float *)&v7 + 2) - *(float *)&v7);
      v5 = v8;
    }
    v9 = v4;
    v10 = v9 + 6291456.25;
    *(_DWORD *)a2 = (int)(LODWORD(v10) << 10) >> 11;
    v21 = (float)v5 + 6291456.25;
    *(_DWORD *)(a2 + 4) = (int)(LODWORD(v21) << 10) >> 11;
  }
  return (struct D2D_SIZE_U)a2;
}
