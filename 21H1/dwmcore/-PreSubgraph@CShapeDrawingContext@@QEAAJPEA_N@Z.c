/*
 * XREFs of ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x1802623C8
 * Callers:
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x1802619E4 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AC3B0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801F0BE4 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ??$_Emplace_reallocate@AEBVCShapeRenderTask@@@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAPEAVCShapeRenderTask@@QEAV2@AEBV2@@Z @ 0x180261C10 (--$_Emplace_reallocate@AEBVCShapeRenderTask@@@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRe.c)
 *     ?GetShapeToWorldTransform@CShapeDrawingContext@@AEAAAEBVCMILMatrix@@XZ @ 0x180262050 (-GetShapeToWorldTransform@CShapeDrawingContext@@AEAAAEBVCMILMatrix@@XZ.c)
 *     ?Push@CMatrixStack2D@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18026CE88 (-Push@CMatrixStack2D@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CShapeDrawingContext::PreSubgraph(CShapeDrawingContext *this, bool *a2)
{
  CSpriteVectorShape *v3; // rsi
  unsigned int v5; // edi
  bool DoesIntersectUnsafe; // r12
  __int64 *v7; // r14
  char v8; // r13
  CMILMatrix *ShapeToWorldTransform; // rax
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // xmm1_8
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  int RenderTasks; // eax
  __int64 v18; // rcx
  __int128 v20; // [rsp+30h] [rbp-49h] BYREF
  __m256i v21; // [rsp+40h] [rbp-39h] BYREF
  __int128 v22; // [rsp+60h] [rbp-19h]
  __int64 v23; // [rsp+70h] [rbp-9h]
  struct D2D_MATRIX_3X2_F v24; // [rsp+78h] [rbp-1h] BYREF

  *a2 = 1;
  v3 = (CSpriteVectorShape *)*((_QWORD *)this + 1);
  v5 = 0;
  DoesIntersectUnsafe = 0;
  v7 = (__int64 *)*((_QWORD *)v3 + 8);
  v8 = (*(__int64 (__fastcall **)(CSpriteVectorShape *, __int64))(*(_QWORD *)v3 + 56LL))(v3, 177LL);
  if ( v8 )
  {
    *a2 = 0;
    v20 = *(_OWORD *)((char *)v3 + 72);
    if ( *((_BYTE *)v3 + 89) )
    {
      ShapeToWorldTransform = CShapeDrawingContext::GetShapeToWorldTransform(this);
      CMILMatrix::Transform2DBoundsHelper<0>(ShapeToWorldTransform, (__int64)&v20, (float *)&v20);
      DoesIntersectUnsafe = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                              (float *)&v20,
                              (float *)this + 86);
    }
  }
  if ( v7 )
  {
    v10 = *((_QWORD *)this + 2) ? _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0] : *((_QWORD *)this + 42);
    v11 = *v7;
    *(_QWORD *)&v20 = v10;
    (*(void (__fastcall **)(__int64 *, __int128 *, struct D2D_MATRIX_3X2_F *))(v11 + 224))(v7, &v20, &v24);
    CMatrixStack2D::Push((CShapeDrawingContext *)((char *)this + 64), &v24);
    *((_BYTE *)this + 528) = 1;
    if ( !v8 )
      *((_BYTE *)this + 529) = 1;
  }
  if ( DoesIntersectUnsafe )
  {
    if ( *((_BYTE *)this + 528) )
    {
      v12 = *((_QWORD *)this + 9);
      v13 = *((_QWORD *)this + 64);
      v21.m256i_i32[0] = 1;
      v14 = *(_QWORD *)(v12 - 8);
      *(_OWORD *)&v21.m256i_u64[1] = *(_OWORD *)(v12 - 24);
      v21.m256i_i64[3] = v14;
      if ( *((_QWORD *)this + 65) == v13 )
      {
        std::vector<CShapeRenderTask>::_Emplace_reallocate<CShapeRenderTask const &>(
          (__int64 *)this + 63,
          v13,
          (__int64)&v21);
      }
      else
      {
        v15 = *(_OWORD *)&v21.m256i_u64[2];
        *(_OWORD *)v13 = *(_OWORD *)v21.m256i_i8;
        v16 = v22;
        *(_OWORD *)(v13 + 16) = v15;
        *(_QWORD *)&v15 = v23;
        *(_OWORD *)(v13 + 32) = v16;
        *(_QWORD *)(v13 + 48) = v15;
        *((_QWORD *)this + 64) += 56LL;
      }
      *((_BYTE *)this + 528) = 0;
    }
    RenderTasks = CSpriteVectorShape::CreateRenderTasks(v3, this);
    v5 = RenderTasks;
    if ( RenderTasks < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, RenderTasks, 0x148u, 0LL);
  }
  return v5;
}
