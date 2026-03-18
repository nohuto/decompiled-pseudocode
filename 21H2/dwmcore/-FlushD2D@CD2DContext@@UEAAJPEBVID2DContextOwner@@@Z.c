/*
 * XREFs of ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x180278C80
 * Callers:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x1801B21B8 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180268E4C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z @ 0x180290238 (-LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?FlushD2DInternal@CD2DContext@@AEAAJXZ @ 0x180019EC8 (-FlushD2DInternal@CD2DContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007FAC8 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 */

__int64 __fastcall CD2DContext::FlushD2D(CD2DContext *this, const struct ID2DContextOwner *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  int v5; // edi

  CD2DContext::FlushDrawList(this);
  v3 = CD2DContext::FlushD2DInternal(this);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, v3, 0x315u);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(((unsigned __int64)this - 16) & -(__int64)(this != 0LL), v5, 0);
}
