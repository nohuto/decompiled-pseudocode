/*
 * XREFs of ?UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x1801C0B80
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000A754 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 * Callees:
 *     ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800115F8 (-GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x18004718C (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z @ 0x1801C05DC (-DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::UpdateBlurIntermediate(
        CDropShadow::ShadowIntermediates *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        double a4)
{
  struct IRenderTargetBitmap **v4; // rbx
  struct IRenderTargetBitmap *v8; // rdx
  float v9; // xmm3_4
  __m128 v10; // xmm2
  float v11; // xmm0_4
  float v12; // xmm3_4
  int v13; // ecx
  __m128 v14; // xmm1
  __m128 v15; // xmm0
  float v16; // xmm6_4
  float v17; // xmm8_4
  int (__fastcall ***v18)(_QWORD); // rcx
  struct IRenderTargetBitmap *v19; // rcx
  int (__fastcall ***v20)(_QWORD); // rcx
  struct IRenderTargetBitmap *v21; // rdx
  __int64 v22; // rcx
  struct IRenderTargetBitmap *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  struct IBitmapRealization *v26; // r8
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // ebx
  _DWORD v31[2]; // [rsp+30h] [rbp-48h] BYREF
  struct D2D_SIZE_F v32; // [rsp+38h] [rbp-40h] BYREF

  v4 = (struct IRenderTargetBitmap **)((char *)this + 24);
  if ( *(float *)&a4 == 0.0 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(
      (__int64 *)this + 3,
      *((_QWORD *)this + 2));
    *((_DWORD *)this + 8) = 0;
  }
  else
  {
    v8 = *v4;
    v9 = *(float *)&a4 + *(float *)&a4;
    v10 = 0LL;
    v11 = v9 + a3->height;
    v12 = v9 + a3->width;
    v13 = (int)v11;
    v14.m128_f32[0] = v11;
    v15 = 0LL;
    v15.m128_f32[0] = (float)v13;
    v10.m128_f32[0] = (float)(int)v12;
    v31[0] = _mm_cmplt_ss(v15, v14).m128_u32[0];
    v15.m128_f32[0] = v12;
    v16 = (float)(v13 - v31[0]);
    v32.height = v16;
    v17 = (float)(int)((int)v12 - _mm_cmplt_ss(v10, v15).m128_u32[0]);
    v32.width = v17;
    if ( v8 )
    {
      v18 = (int (__fastcall ***)(_QWORD))((char *)v8 + *(int *)(*((_QWORD *)v8 + 1) + 8LL) + 8);
      if ( (**v18)(v18) >= 0 )
      {
        v19 = (struct IRenderTargetBitmap *)((char *)*v4 + *(int *)(*((_QWORD *)*v4 + 1) + 16LL) + 8);
        (**(void (__fastcall ***)(struct IRenderTargetBitmap *, _DWORD *))v19)(v19, v31);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - (float)v31[0]) & _xmm) > 0.015625
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 - (float)v31[1]) & _xmm) > 0.015625 )
        {
          CDropShadow::ShadowIntermediates::DestroyIntermediates(this, 0);
        }
      }
    }
    if ( !*v4
      || (v20 = (int (__fastcall ***)(_QWORD))((char *)*v4 + *(int *)(*((_QWORD *)*v4 + 1) + 8LL) + 8), (**v20)(v20) < 0) )
    {
      v21 = *v4;
      *v4 = 0LL;
      if ( v21 )
      {
        v22 = (__int64)v21 + *(int *)(*((_QWORD *)v21 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      v23 = *v4;
      *v4 = 0LL;
      if ( v23 )
      {
        v24 = (__int64)v23 + *(int *)(*((_QWORD *)v23 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v25 = *((_QWORD *)this + 2);
      if ( v25 )
        v26 = (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v25 + 8) + 16LL) + v25 + 8);
      else
        v26 = 0LL;
      v27 = CDropShadow::ShadowIntermediates::GenerateBlurIntermediate(a2, &v32, v26, a4, v4);
      v29 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x373u, 0LL);
        return v29;
      }
      *((_DWORD *)this + 8) = LODWORD(a4);
    }
  }
  return 0;
}
