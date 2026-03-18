/*
 * XREFs of ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x180277950
 * Callers:
 *     ?CreateResource@CFilterEffect@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x1802044F0 (-CreateResource@CFilterEffect@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x180204EE0 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagR.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180268E4C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007F688 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x18028DBAC (-Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD2DContext::CreateD2DEffect(CD2DContext *this, const struct _GUID *a2, struct CD2DEffect **a3)
{
  __int64 v3; // rax
  bool v5; // zf
  __int64 v6; // rcx
  int v8; // ebx
  int v9; // eax
  int v10; // r9d
  unsigned int v12; // [rsp+20h] [rbp-18h]
  struct ID2D1Effect *v13; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = (__int64)this + 1072;
  v13 = 0LL;
  v5 = this == 0LL;
  v6 = 1088LL;
  if ( v5 )
    v3 = 1088LL;
  v8 = *(_DWORD *)v3;
  if ( *(int *)v3 < 0 )
  {
    v10 = *(_DWORD *)v3;
    v12 = 1556;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, struct ID2D1Effect **))(**((_QWORD **)this + 25)
                                                                                        + 504LL))(
           *((_QWORD *)this + 25),
           a2,
           &v13);
    v8 = v9;
    if ( v9 < 0 )
    {
      v12 = 1558;
    }
    else
    {
      v9 = CD2DEffect::Create(*((struct CD2DResourceManager **)this + 21), v13, a3);
      v8 = v9;
      if ( v9 >= 0 )
        goto LABEL_11;
      v12 = 1559;
    }
    v10 = v9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v10, v12);
  *a3 = 0LL;
LABEL_11:
  if ( v13 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v13 + 16LL))(v13);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(((unsigned __int64)this - 16) & -(__int64)(this != 0LL), v8, 0);
}
