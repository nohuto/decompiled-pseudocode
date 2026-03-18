/*
 * XREFs of ?DrawYCbCrBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x18025B770
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800C9D10 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E2B78 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataBounds::DrawYCbCrBitmap(
        CRenderDataBounds *this,
        struct CResource *a2,
        struct CResource *a3,
        __int64 a4)
{
  __int64 v7; // r8
  __int64 v8; // r9
  struct IBitmapRealization *v10; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v11[2]; // [rsp+28h] [rbp-28h] BYREF
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64, struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(
         a2,
         40LL,
         a3,
         a4)
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 56LL))(a3, 40LL) )
  {
    v10 = 0LL;
    if ( (int)CCompositionSurfaceBitmap::GetCurrentRenderingRealization((struct CResource *)((char *)a2 + 72), &v10) >= 0 )
    {
      (**(void (__fastcall ***)(struct IBitmapRealization *, _DWORD *))v10)(v10, v11);
      *(_QWORD *)&v12 = 0LL;
      *((float *)&v12 + 2) = (float)v11[0];
      *((float *)&v12 + 3) = (float)v11[1];
      CRenderDataBounds::AddBounds((__int64)this, &v12, v7, v8);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v10);
  }
  return 0LL;
}
