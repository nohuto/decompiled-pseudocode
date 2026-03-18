/*
 * XREFs of ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801F4270
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800058CC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800091A4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003E144 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180049DF0 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18004A66C (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18004A6D4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x18004C428 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180053280 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowBackdropBrush::GetBrushParameters(
        CWindowBackdropBrush *this,
        struct CBrushDrawListGenerator *a2)
{
  int WindowBackgroundTreatmentEffectInput; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // edi
  CSurfaceDrawListBrush *v7; // r8
  CSurfaceDrawListBrush *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // r8d
  CSurfaceDrawListBrush *v11; // rcx
  unsigned int v12; // r8d
  __int16 v14; // [rsp+30h] [rbp-79h] BYREF
  char v15; // [rsp+32h] [rbp-77h]
  CSurfaceDrawListBrush *v16; // [rsp+40h] [rbp-69h] BYREF
  CSurfaceDrawListBrush *v17; // [rsp+48h] [rbp-61h] BYREF
  CSurfaceDrawListBrush **v18; // [rsp+50h] [rbp-59h]
  CSurfaceDrawListBrush *v19; // [rsp+58h] [rbp-51h] BYREF
  char v20; // [rsp+60h] [rbp-49h]
  __int128 v21; // [rsp+70h] [rbp-39h] BYREF
  __int64 v22; // [rsp+80h] [rbp-29h]
  int v23; // [rsp+88h] [rbp-21h]
  __int64 v24; // [rsp+8Ch] [rbp-1Dh]
  int v25; // [rsp+94h] [rbp-15h]
  char v26; // [rsp+98h] [rbp-11h]
  __int128 v27; // [rsp+A0h] [rbp-9h]
  char v28; // [rsp+B5h] [rbp+Ch]
  _OWORD v29[3]; // [rsp+B8h] [rbp+Fh] BYREF

  CBrushDrawListGenerator::Reset(a2);
  v23 = 0;
  v21 = 0LL;
  v24 = 0LL;
  v25 = 0;
  v22 = 0LL;
  v26 = 0;
  v29[0] = 0LL;
  EffectInput::Reset((struct EffectInput *)&v21);
  WindowBackgroundTreatmentEffectInput = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                           *(const struct IDeviceTarget ***)a2,
                                           (const struct D2D_SIZE_F *)a2 + 1,
                                           (struct EffectInput *)&v21);
  if ( WindowBackgroundTreatmentEffectInput < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, WindowBackgroundTreatmentEffectInput, 0x30u, 0LL);
LABEL_15:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_16;
  }
  if ( v28 )
  {
    *(_OWORD *)((char *)a2 + 20) = v27;
    *((_BYTE *)a2 + 76) = 0;
    goto LABEL_16;
  }
  v16 = 0LL;
  v19 = 0LL;
  v18 = &v16;
  v14 = SamplerMode::k_ClampClampLinear;
  v15 = 1;
  v20 = 1;
  v6 = CSurfaceDrawListBrush::CreateWithTextureTransform((struct CSurfaceDrawListBrush *)&v21, &v14, (__int64)v29, &v19);
  if ( v20 )
  {
    v5 = (__int64)v19;
    v7 = *v18;
    *v18 = v19;
    if ( v7 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v7, 1, (unsigned int)v7);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v6, 0x3Au, 0LL);
    if ( v16 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v16, 1, v12);
    goto LABEL_15;
  }
  v8 = v16;
  v16 = 0LL;
  v17 = v8;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, &v17);
  if ( v17 )
    std::default_delete<CShape>::operator()(v9, (__int64 (__fastcall ***)(_QWORD, __int64))v17);
  v11 = v16;
  *((_DWORD *)a2 + 4) = 128;
  if ( v11 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v11, 1, v10);
LABEL_16:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v21 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v21);
  return 0LL;
}
