/*
 * XREFs of ?CreateBitmapFromWicBitmap@CD2DContext@@QEAAJPEAUIWICBitmapSource@@PEAPEAUID2D1Bitmap@@@Z @ 0x1802778D0
 * Callers:
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180268E4C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateBitmapFromWicBitmap(
        CD2DContext *this,
        struct IWICBitmapSource *a2,
        struct ID2D1Bitmap **a3)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ebx

  v4 = (*(__int64 (__fastcall **)(_QWORD, struct IWICBitmapSource *, _QWORD, struct ID2D1Bitmap **))(**((_QWORD **)this + 25) + 40LL))(
         *((_QWORD *)this + 25),
         a2,
         0LL,
         a3);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_18038D950, 10LL, v4, 0x10Eu);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this - 16, v6, 0);
}
