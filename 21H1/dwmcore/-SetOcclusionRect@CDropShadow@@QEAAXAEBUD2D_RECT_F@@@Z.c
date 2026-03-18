/*
 * XREFs of ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1801C3358
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800486A0 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x18007055C (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDropShadow::SetOcclusionRect(CDropShadow *this, const struct D2D_RECT_F *a2)
{
  float bottom; // xmm4_4
  float v3; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm3_4
  float *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // xmm4_4
  struct D2D_RECT_F v10; // [rsp+20h] [rbp-18h] BYREF

  bottom = a2->bottom;
  v3 = a2->left - -0.5;
  v4 = a2->top - -0.5;
  v5 = a2->right - 0.5;
  v10.left = v3;
  v10.top = v4;
  v10.right = v5;
  v10.bottom = bottom - 0.5;
  if ( !AreEqual((const struct D2D_RECT_F *)((char *)this + 116), &v10)
    && (!TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v6)
     || !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v10.left)) )
  {
    *(float *)v7 = v3;
    *(float *)(v7 + 4) = v4;
    *(float *)(v7 + 8) = v5;
    *(_DWORD *)(v7 + 12) = v9;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 72LL))(v8, 5LL);
  }
}
