/*
 * XREFs of ?CreateSingleAdapter@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180030710
 * Callers:
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAUEffectInput@@@Z @ 0x1800303C0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 * Callees:
 *     ??4?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z @ 0x180006838 (--4-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z @ 0x1800325C8 (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTarget@@@Z.c)
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x18003268C (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CRenderTargetBitmap::CreateSingleAdapter(struct IDeviceTarget *a1, struct IRenderTargetBitmap **a2)
{
  unsigned int v3; // edi
  CRenderTargetBitmap *v5; // rax
  __int64 v6; // rcx
  CRenderTargetBitmap *v7; // rbx
  CRenderTargetBitmap *v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v9 = 0LL;
  v5 = (CRenderTargetBitmap *)DefaultHeap::Alloc(0x100uLL);
  if ( v5 )
    v5 = CRenderTargetBitmap::CRenderTargetBitmap(v5, 1);
  wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=((__int64 *)&v9, (__int64)v5);
  v7 = v9;
  if ( v9 )
  {
    CRenderTargetBitmap::Initialize(v9, a1);
    *a2 = (struct IRenderTargetBitmap *)(((unsigned __int64)v7 + 120) & -(__int64)(v7 != 0LL));
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x2Cu, 0LL);
  }
  return v3;
}
