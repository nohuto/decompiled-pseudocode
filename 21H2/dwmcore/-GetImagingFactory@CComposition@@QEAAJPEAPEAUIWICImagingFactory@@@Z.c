/*
 * XREFs of ?GetImagingFactory@CComposition@@QEAAJPEAPEAUIWICImagingFactory@@@Z @ 0x180193244
 * Callers:
 *     ?RotateShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE_ROTATION@@@Z @ 0x18026A4F8 (-RotateShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE.c)
 *     ?ScaleShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z @ 0x18026A7DC (-ScaleShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x1802A6ADC (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::GetImagingFactory(CComposition *this, struct IWICImagingFactory **a2)
{
  struct IWICImagingFactory **v2; // rbx
  struct IWICImagingFactory *v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct IWICImagingFactory **)((char *)this + 1336);
  v4 = (struct IWICImagingFactory *)*((_QWORD *)this + 167);
  if ( !v4 )
  {
    *v2 = 0LL;
    v5 = WICCreateImagingFactory_Proxy(567LL, v2);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEFF,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\composition.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    v4 = *v2;
  }
  ((void (__fastcall *)(struct IWICImagingFactory *))v4->lpVtbl->AddRef)(v4);
  *a2 = *v2;
  return 0LL;
}
