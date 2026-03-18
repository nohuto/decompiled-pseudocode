/*
 * XREFs of ?DrawYCbCrBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x180209CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800AF580 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CA948 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataBounds::DrawYCbCrBitmap(
        CRenderDataBounds *this,
        struct CResource *a2,
        struct CResource *a3,
        __int64 a4)
{
  struct IBitmapRealization *v8; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v9[2]; // [rsp+28h] [rbp-28h] BYREF
  float v10[4]; // [rsp+30h] [rbp-20h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64, struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(
         a2,
         40LL,
         a3,
         a4)
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 56LL))(a3, 40LL) )
  {
    v8 = 0LL;
    if ( (int)CCompositionSurfaceBitmap::GetCurrentRenderingRealization((struct CResource *)((char *)a2 + 64), &v8) >= 0 )
    {
      (**(void (__fastcall ***)(struct IBitmapRealization *, _DWORD *))v8)(v8, v9);
      v10[0] = 0.0;
      v10[1] = 0.0;
      v10[2] = (float)v9[0];
      v10[3] = (float)v9[1];
      CRenderDataBounds::AddBounds((__int64)this, v10);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v8);
  }
  return 0LL;
}
