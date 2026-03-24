/*
 * XREFs of ?RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x180190A58
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180004D18 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NH@Z @ 0x180174DBC (-DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUMilRectF@.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderMask(
        CTreeEffectLayer *this,
        const struct D2D_SIZE_F *a2,
        struct CDrawingContext *a3,
        struct IRenderTargetBitmap *a4)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  float width; // xmm1_4
  float height; // xmm2_4
  float v13; // xmm0_4
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  float v18[4]; // [rsp+30h] [rbp-48h] BYREF
  float v19[4]; // [rsp+40h] [rbp-38h] BYREF

  if ( !a4 )
    return 0LL;
  if ( g_LockAndReadLayer )
  {
    v9 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)a4 + 64LL))(a4);
    v10 = *(int *)(*(_QWORD *)(v9 + 8) + 16LL) + v9 + 8;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 24LL))(
      v10,
      ((unsigned __int64)a3 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a3 >> 64));
  }
  width = a2->width;
  height = a2->height;
  v13 = *((float *)this + 70);
  v14 = *((_QWORD *)a4 + 1);
  v18[0] = 0.0;
  v18[1] = 0.0;
  v19[0] = 0.0;
  v19[1] = 0.0;
  v19[2] = width;
  v19[3] = height;
  v18[2] = width / v13;
  v18[3] = height / v13;
  v15 = CDrawingContext::DrawBitmapRealization(
          a3,
          (struct IRenderTargetBitmap *)((char *)a4 + *(int *)(v14 + 16) + 8),
          v19,
          v18,
          0,
          0);
  v17 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x34Cu, 0LL);
  return v17;
}
