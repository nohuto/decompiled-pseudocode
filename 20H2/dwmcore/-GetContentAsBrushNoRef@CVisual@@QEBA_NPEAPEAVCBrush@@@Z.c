/*
 * XREFs of ?GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z @ 0x1800A8644
 * Callers:
 *     ?PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180009ED0 (-PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?IsReadyToDraw@CDropShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180016C20 (-IsReadyToDraw@CDropShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x1800A84FC (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800B4750 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::GetContentAsBrushNoRef(CVisual *this, struct CBrush **a2)
{
  char v3; // bl
  __int64 v4; // rcx

  v3 = 0;
  v4 = *((_QWORD *)this + 31);
  if ( v4 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 56LL))(v4, 14LL) )
  {
    v3 = 1;
    *a2 = (struct CBrush *)*((_QWORD *)this + 31);
  }
  return v3;
}
