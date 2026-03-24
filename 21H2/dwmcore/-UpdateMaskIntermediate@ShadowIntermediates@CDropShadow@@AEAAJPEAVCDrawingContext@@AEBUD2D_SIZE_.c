/*
 * XREFs of ?UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801BF950
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x180008844 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 * Callees:
 *     ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001F730 (-GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z @ 0x1801BF14C (-DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::UpdateMaskIntermediate(
        CDropShadow::ShadowIntermediates *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  struct IRenderTargetBitmap **v3; // rbx
  int height; // r9d
  __int64 v6; // rdx
  __m128 v8; // xmm1
  __m128 v9; // xmm2
  __m128 v10; // xmm0
  int width; // eax
  int (__fastcall ***v12)(_QWORD); // rcx
  void (__fastcall ***v13)(_QWORD, int *); // rcx
  int (__fastcall ***v14)(_QWORD); // rcx
  struct IRenderTargetBitmap *v15; // rdx
  __int64 v16; // rcx
  struct IRenderTargetBitmap *v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // ebx
  struct D2D_SIZE_F v23; // [rsp+40h] [rbp+8h] BYREF
  int v24; // [rsp+50h] [rbp+18h] BYREF
  int v25; // [rsp+54h] [rbp+1Ch]

  v3 = (struct IRenderTargetBitmap **)((char *)this + 16);
  height = (int)a3->height;
  v6 = *((_QWORD *)this + 2);
  v8.m128_i32[0] = LODWORD(a3->height);
  v9 = 0LL;
  v10 = 0LL;
  v10.m128_f32[0] = (float)height;
  v24 = _mm_cmplt_ss(v10, v8).m128_u32[0];
  v10.m128_i32[0] = LODWORD(a3->width);
  width = (int)a3->width;
  v9.m128_f32[0] = (float)width;
  v23.height = (float)(height - v24);
  v23.width = (float)(int)(width - _mm_cmplt_ss(v9, v10).m128_u32[0]);
  if ( v6 )
  {
    v12 = (int (__fastcall ***)(_QWORD))(v6 + 8 + *(int *)(*(_QWORD *)(v6 + 8) + 8LL));
    if ( (**v12)(v12) >= 0 )
    {
      v13 = (void (__fastcall ***)(_QWORD, int *))((char *)*v3 + *(int *)(*((_QWORD *)*v3 + 1) + 16LL) + 8);
      (**v13)(v13, &v24);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v23.width - (float)v24) & _xmm) > 0.015625
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(v23.height - (float)v25) & _xmm) > 0.015625 )
      {
        CDropShadow::ShadowIntermediates::DestroyIntermediates(this, 1);
      }
    }
  }
  if ( *v3 )
  {
    v14 = (int (__fastcall ***)(_QWORD))((char *)*v3 + *(int *)(*((_QWORD *)*v3 + 1) + 8LL) + 8);
    if ( (**v14)(v14) >= 0 )
      return 0;
  }
  v15 = *v3;
  *v3 = 0LL;
  if ( v15 )
  {
    v16 = (__int64)v15 + *(int *)(*((_QWORD *)v15 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = *v3;
  *v3 = 0LL;
  if ( v17 )
  {
    v18 = (__int64)v17 + *(int *)(*((_QWORD *)v17 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = CDropShadow::ShadowIntermediates::GenerateMaskIntermediate(a2, &v23, *((struct CBrush **)this + 1), v3);
  v21 = v19;
  if ( v19 >= 0 )
    return 0;
  else
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x33Cu, 0LL);
  return v21;
}
