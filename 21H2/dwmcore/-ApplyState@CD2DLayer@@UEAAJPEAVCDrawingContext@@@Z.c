/*
 * XREFs of ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800DC340
 * Callers:
 *     ?ApplyDeferredD2DClipLayers@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z @ 0x1800977D4 (-ApplyDeferredD2DClipLayers@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?PushLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800DC3F0 (-PushLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1801121E8 (McTemplateU0qqqq_EventWriteTransfer.c)
 */

__int64 __fastcall CD2DLayer::ApplyState(CD2DLayer *this, struct CDrawingContext *a2)
{
  const struct D2D_RECT_F *v2; // rdi

  v2 = (const struct D2D_RECT_F *)((char *)this + 8);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qqqq_EventWriteTransfer(
      (_DWORD)this,
      (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start,
      (int)v2->left,
      (int)*((float *)this + 3),
      (int)*((float *)this + 4),
      (int)*((float *)this + 5));
  CD2DContext::PushLayer(
    (CD2DContext *)(*((_QWORD *)a2 + 5) + 16LL),
    (const struct ID2DContextOwner *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL)),
    v2,
    *((struct ID2D1Geometry **)this + 3),
    (struct D2D_MATRIX_3X2_F *)(((unsigned __int64)this + 32) & -(__int64)(*((_BYTE *)this + 56) != 0)),
    *((float *)this + 15),
    *((enum D2D1_ANTIALIAS_MODE *)this + 16),
    *((enum D2D1_LAYER_OPTIONS1 *)this + 17),
    *((enum D2D1_PRIMITIVE_BLEND *)this + 18));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qqqq_EventWriteTransfer(
      (int)*((float *)this + 4),
      (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Stop,
      (int)v2->left,
      (int)*((float *)this + 3),
      (int)*((float *)this + 4),
      (int)*((float *)this + 5));
  return 0LL;
}
