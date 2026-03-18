/*
 * XREFs of ?UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x180212B8C
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000F744 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 * Callees:
 *     ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000FB3C (-GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x18005D034 (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z @ 0x1802125D8 (-DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::UpdateBlurIntermediate(
        CDropShadow::ShadowIntermediates *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        double a4)
{
  __int64 *v4; // rdi
  __int64 v8; // rdx
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
  void (__fastcall ***v19)(_QWORD, _DWORD *); // rcx
  int (__fastcall ***v20)(_QWORD); // rcx
  __int64 v21; // rdx
  struct IBitmapRealization *v22; // r8
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // edi
  _DWORD v27[2]; // [rsp+30h] [rbp-48h] BYREF
  struct D2D_SIZE_F v28; // [rsp+38h] [rbp-40h] BYREF

  v4 = (__int64 *)((char *)this + 24);
  if ( *(float *)&a4 == 0.0 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(v4, *((_QWORD *)this + 2));
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
    v27[0] = _mm_cmplt_ss(v15, v14).m128_u32[0];
    v15.m128_f32[0] = v12;
    v16 = (float)(v13 - v27[0]);
    v28.height = v16;
    v17 = (float)(int)((int)v12 - _mm_cmplt_ss(v10, v15).m128_u32[0]);
    v28.width = v17;
    if ( v8 )
    {
      v18 = (int (__fastcall ***)(_QWORD))(v8 + 8 + *(int *)(*(_QWORD *)(v8 + 8) + 8LL));
      if ( (**v18)(v18) >= 0 )
      {
        v19 = (void (__fastcall ***)(_QWORD, _DWORD *))(*v4 + 8 + *(int *)(*(_QWORD *)(*v4 + 8) + 16LL));
        (**v19)(v19, v27);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - (float)v27[0]) & _xmm) > 0.015625
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 - (float)v27[1]) & _xmm) > 0.015625 )
        {
          CDropShadow::ShadowIntermediates::DestroyIntermediates(this, 0);
        }
      }
    }
    if ( !*v4
      || (v20 = (int (__fastcall ***)(_QWORD))(*v4 + 8 + *(int *)(*(_QWORD *)(*v4 + 8) + 8LL)), (**v20)(v20) < 0) )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v4);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v4);
      v21 = *((_QWORD *)this + 2);
      if ( v21 )
        v22 = (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v21 + 8) + 16LL) + v21 + 8);
      else
        v22 = 0LL;
      v23 = CDropShadow::ShadowIntermediates::GenerateBlurIntermediate(
              a2,
              &v28,
              v22,
              a4,
              (struct IRenderTargetBitmap **)v4);
      v25 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v23, 0x3A2u);
        return v25;
      }
      *((_DWORD *)this + 8) = LODWORD(a4);
    }
  }
  return 0;
}
