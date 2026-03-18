/*
 * XREFs of ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAUEffectInput@@@Z @ 0x1800303C0
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x1800048EC (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18006DE6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180013EE4 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180028DD0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18002F524 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18002F788 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18002FB48 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18002FEA4 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?CreateSingleAdapter@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180030710 (-CreateSingleAdapter@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180031BE4 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x180045C68 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800469E8 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180048A9C (-IsEmpty@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180049D80 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x1800717E0 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5D44 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetBackdropImageFromRenderTarget(
        struct IDeviceTarget **this,
        float *a2,
        char a3,
        __int64 a4)
{
  float v8; // xmm2_4
  float v9; // xmm1_4
  const struct CMILMatrix *TopByReference; // rax
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  struct IDeviceTarget *v14; // rcx
  void (__fastcall ***v15)(_QWORD, __int64 *); // rcx
  __int64 v16; // rax
  __int64 i; // rax
  int v18; // eax
  __int64 v19; // rcx
  struct IRenderTargetBitmap *v20; // rbx
  struct IBitmapRealization *v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  FLOAT v25; // xmm1_4
  int v26; // eax
  __int64 v27; // rcx
  struct IDeviceTarget *v28; // rdx
  int v29; // r15d
  __int64 v30; // rax
  int v31; // r12d
  struct IDeviceTarget *v32; // rbx
  struct IDeviceTarget *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  struct IDeviceTarget *v37; // rdx
  char *v38; // rdi
  __int64 (__fastcall *v39)(char *, __int64 *, _QWORD); // rbx
  int v40; // eax
  __int64 v41; // rcx
  __int64 (__fastcall *v42)(struct IRenderTargetBitmap *, __int64 *, _QWORD); // rdi
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  void (__fastcall ***v47)(_QWORD, struct D2D_SIZE_F *); // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+48h] [rbp-B8h] BYREF
  struct IRenderTargetBitmap *v54; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+58h] [rbp-A8h] BYREF
  struct D2D_SIZE_F v56; // [rsp+60h] [rbp-A0h] BYREF
  struct IRenderTargetBitmap *v57; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v58[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v59; // [rsp+78h] [rbp-88h] BYREF
  int v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+84h] [rbp-7Ch]
  int v62; // [rsp+8Ch] [rbp-74h]
  __int64 v63; // [rsp+90h] [rbp-70h]
  int v64; // [rsp+98h] [rbp-68h]
  __int128 v65; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v66; // [rsp+B0h] [rbp-50h]
  __int128 v67; // [rsp+C0h] [rbp-40h]
  __int128 v68; // [rsp+D0h] [rbp-30h]
  __int16 v69; // [rsp+E0h] [rbp-20h]
  __int128 v70; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v71; // [rsp+100h] [rbp+0h] BYREF
  float v72; // [rsp+110h] [rbp+10h]
  float v73; // [rsp+114h] [rbp+14h]
  __int128 v74; // [rsp+130h] [rbp+30h] BYREF
  float v75; // [rsp+140h] [rbp+40h]
  float v76; // [rsp+144h] [rbp+44h]
  __int128 v77; // [rsp+150h] [rbp+50h] BYREF

  v57 = 0LL;
  EffectInput::Reset((struct EffectInput *)a4);
  *(_BYTE *)(a4 + 68) = 1;
  v77 = 0LL;
  CDrawingContext::CalcWorldSpaceClippedBounds(this, a2, &v77);
  PixelAlign(&v70, &v77);
  if ( !(unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(&v70) )
  {
    v66 = _xmm;
    v65 = _xmm;
    v68 = _xmm;
    *(_DWORD *)(a4 + 64) = 128;
    v8 = a2[1];
    v9 = *a2;
    v67 = _xmm;
    v69 = 32085;
    CMILMatrix::Translate((CMILMatrix *)&v65, v9, v8);
    TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 51));
    CMILMatrix::Multiply((CMILMatrix *)&v65, TopByReference);
    v59 = v65;
    v60 = HIDWORD(v65);
    v61 = v66;
    v63 = v68;
    v62 = HIDWORD(v66);
    v64 = HIDWORD(v68);
    *(_WORD *)(a4 + 125) = 257;
    v11 = CDrawingContext::FlushD2D((CDrawingContext *)this);
    v13 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x5D5u, 0LL);
      goto LABEL_17;
    }
    v52 = 0LL;
    if ( a3
      || (v14 = (struct IDeviceTarget *)((char *)this[4] + *(int *)(*((_QWORD *)this[4] + 1) + 4LL) + 8),
          (**(int (__fastcall ***)(struct IDeviceTarget *, GUID *, __int64 *))v14)(
            v14,
            &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f,
            &v52) < 0)
      || !(**(__int64 (__fastcall ***)(__int64))v52)(v52) )
    {
      v28 = this[4];
      v29 = DWORD2(v70) - v70;
      v30 = *((_QWORD *)v28 + 1);
      v31 = HIDWORD(v70) - DWORD1(v70);
      v32 = this[5];
      v58[0] = DWORD2(v70) - v70;
      v33 = (struct IDeviceTarget *)((char *)v28 + *(int *)(v30 + 12) + 8);
      v58[1] = HIDWORD(v70) - DWORD1(v70);
      v54 = 0LL;
      v34 = (**(__int64 (__fastcall ***)(struct IDeviceTarget *, __int128 *))v33)(v33, &v77);
      DWORD2(v71) = 21;
      *(_QWORD *)&v71 = "Backdrop effect input";
      v35 = CD3DDevice::CreateRenderTargetBitmap(v32, &v71, v58, v34, this + 7, 3, &v54);
      v13 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x5FFu, 0LL);
      }
      else
      {
        v37 = this[4];
        v55 = 0LL;
        v38 = (char *)v37 + *(int *)(*((_QWORD *)v37 + 1) + 16LL);
        v39 = *(__int64 (__fastcall **)(char *, __int64 *, _QWORD))(*((_QWORD *)v38 + 1) + 16LL);
        wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v55);
        v40 = v39(v38 + 8, &v55, 0LL);
        v13 = v40;
        if ( v40 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x602u, 0LL);
        }
        else
        {
          v20 = v54;
          v53 = 0LL;
          v42 = *(__int64 (__fastcall **)(struct IRenderTargetBitmap *, __int64 *, _QWORD))(*(_QWORD *)v54 + 72LL);
          wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v53);
          v43 = v42(v20, &v53, 0LL);
          v13 = v43;
          if ( v43 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x605u, 0LL);
          }
          else
          {
            v74 = v70;
            v45 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v53 + 64LL))(
                    v53,
                    0LL,
                    v55,
                    &v74);
            v13 = v45;
            if ( v45 >= 0 )
            {
              v47 = (void (__fastcall ***)(_QWORD, struct D2D_SIZE_F *))((char *)v20
                                                                       + *(int *)(*((_QWORD *)v20 + 1) + 16LL)
                                                                       + 8);
              (**v47)(v47, &v56);
              v71 = _xmm;
              LODWORD(v73) = COERCE_UNSIGNED_INT((float)SDWORD1(v70)) ^ _xmm;
              LODWORD(v72) = COERCE_UNSIGNED_INT((float)(int)v70) ^ _xmm;
              v48 = Matrix3x3::operator*(&v59, &v65, &v71);
              *(_QWORD *)((char *)&v71 + 4) = 0LL;
              *(float *)&v71 = 1.0 / (float)SLODWORD(v56.width);
              *((float *)&v71 + 3) = 1.0 / (float)SLODWORD(v56.height);
              v72 = 0.0 - (float)(*(float *)&v71 * 0.0);
              v73 = 0.0 - (float)(*((float *)&v71 + 3) * 0.0);
              v49 = Matrix3x3::operator*(v48, &v59, &v71);
              v54 = 0LL;
              v57 = v20;
              *(_OWORD *)(a4 + 72) = *(_OWORD *)v49;
              *(_OWORD *)(a4 + 88) = *(_OWORD *)(v49 + 16);
              *(_DWORD *)(a4 + 104) = *(_DWORD *)(v49 + 32);
              *(_QWORD *)(a4 + 108) = 0LL;
              *(float *)(a4 + 120) = (float)v31;
              *(float *)(a4 + 116) = (float)v29;
              wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v53);
              wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v55);
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v54);
              goto LABEL_10;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x610u, 0LL);
          }
          wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v53);
        }
        wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v55);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v54);
    }
    else
    {
      v15 = (void (__fastcall ***)(_QWORD, __int64 *))(*(int *)(*(_QWORD *)(v52 + 8) + 16LL) + v52 + 8);
      (**v15)(v15, &v53);
      *(_QWORD *)((char *)&v74 + 4) = 0LL;
      *(float *)&v74 = 1.0 / (float)(int)v53;
      *((float *)&v74 + 3) = 1.0 / (float)SHIDWORD(v53);
      v75 = 0.0 - (float)(*(float *)&v74 * 0.0);
      v76 = 0.0 - (float)(*((float *)&v74 + 3) * 0.0);
      v16 = Matrix3x3::operator*(&v59, &v71, &v74);
      *(_OWORD *)(a4 + 72) = *(_OWORD *)v16;
      *(_OWORD *)(a4 + 88) = *(_OWORD *)(v16 + 16);
      *(_DWORD *)(a4 + 104) = *(_DWORD *)(v16 + 32);
      for ( i = 0LL; i < 4; ++i )
        *(float *)(a4 + 4 * i + 108) = (float)*((int *)&v70 + i);
      v18 = CRenderTargetBitmap::CreateSingleAdapter(this[4], &v57);
      v13 = v18;
      if ( v18 >= 0 )
      {
        v20 = v57;
LABEL_10:
        if ( g_LockAndReadBackdropTexture )
        {
          v50 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v20 + 64LL))(v20);
          v51 = v50 + *(int *)(*(_QWORD *)(v50 + 8) + 16LL);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v51 + 8) + 24LL))(
            v51 + 8,
            (unsigned __int64)(this + 3) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
        }
        if ( v20 )
          v21 = (struct IRenderTargetBitmap *)((char *)v20 + *(int *)(*((_QWORD *)v20 + 1) + 16LL) + 8);
        else
          v21 = 0LL;
        v22 = CDrawListBitmap::Initialize((CDrawListBitmap *)a4, v21, (const struct CDrawingContext *)this);
        v13 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x62Bu, 0LL);
        goto LABEL_16;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x5F0u, 0LL);
    }
LABEL_16:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v52);
    goto LABEL_17;
  }
  v25 = a2[3] - a2[1];
  v56.width = a2[2] - *a2;
  v56.height = v25;
  v26 = CDrawingContext::SetEffectInputToTransparentBlack(this, &v56, (struct EffectInput *)a4);
  v13 = v26;
  if ( v26 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x635u, 0LL);
LABEL_17:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v57);
  return v13;
}
