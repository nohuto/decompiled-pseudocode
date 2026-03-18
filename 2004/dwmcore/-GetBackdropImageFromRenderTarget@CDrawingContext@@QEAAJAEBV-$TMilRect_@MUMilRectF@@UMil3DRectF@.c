/*
 * XREFs of ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAUEffectInput@@@Z @ 0x18003AA30
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x1800051C8 (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18004A72C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800212D4 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800374A0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003A358 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18003A514 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?CreateSingleAdapter@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003ADB8 (-CreateSingleAdapter@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x18003BF38 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003CC84 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x18004C428 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18004E918 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18007FC60 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180080058 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800803D8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x1800803F8 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180082C58 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CCCB4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetBackdropImageFromRenderTarget(
        struct IDeviceTarget **this,
        float *a2,
        char a3,
        __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r12d
  float v16; // xmm2_4
  float v17; // xmm1_4
  const struct CMILMatrix *TopByReference; // rax
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // edi
  struct IDeviceTarget *v22; // rcx
  void (__fastcall ***v23)(_QWORD, __int64 *); // rcx
  __int64 v24; // rax
  __int64 i; // rax
  int v26; // eax
  __int64 v27; // rcx
  struct IRenderTargetBitmap *v28; // rbx
  struct IBitmapRealization *v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  FLOAT v33; // xmm1_4
  int v34; // eax
  __int64 v35; // rcx
  struct IDeviceTarget *v36; // rdx
  int v37; // r13d
  int v38; // r15d
  int v39; // r12d
  struct IDeviceTarget *v40; // rbx
  __int64 v41; // rax
  struct IDeviceTarget *v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  char *v46; // rdi
  __int64 (__fastcall *v47)(char *, __int64 *, _QWORD); // rbx
  int v48; // eax
  __int64 v49; // rcx
  __int64 (__fastcall *v50)(struct IRenderTargetBitmap *, __int64 *, _QWORD); // rdi
  int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  void (__fastcall ***v55)(_QWORD, struct D2D_SIZE_F *); // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // r9
  __int64 v60; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v61; // [rsp+48h] [rbp-B8h] BYREF
  struct IRenderTargetBitmap *v62; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+58h] [rbp-A8h] BYREF
  struct D2D_SIZE_F v64; // [rsp+60h] [rbp-A0h] BYREF
  struct IRenderTargetBitmap *v65; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v66[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v67; // [rsp+78h] [rbp-88h] BYREF
  int v68; // [rsp+80h] [rbp-80h]
  __int64 v69; // [rsp+84h] [rbp-7Ch]
  int v70; // [rsp+8Ch] [rbp-74h]
  __int64 v71; // [rsp+90h] [rbp-70h]
  int v72; // [rsp+98h] [rbp-68h]
  __int128 v73; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v74; // [rsp+B0h] [rbp-50h]
  __int128 v75; // [rsp+C0h] [rbp-40h]
  __int128 v76; // [rsp+D0h] [rbp-30h]
  __int16 v77; // [rsp+E0h] [rbp-20h]
  __int128 v78; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v79; // [rsp+100h] [rbp+0h] BYREF
  __int128 v80; // [rsp+110h] [rbp+10h] BYREF
  float v81; // [rsp+120h] [rbp+20h]
  float v82; // [rsp+124h] [rbp+24h]
  __int128 v83; // [rsp+140h] [rbp+40h] BYREF
  float v84; // [rsp+150h] [rbp+50h]
  float v85; // [rsp+154h] [rbp+54h]

  v65 = 0LL;
  EffectInput::Reset((struct EffectInput *)a4);
  *(_BYTE *)(a4 + 68) = 1;
  v79 = 0LL;
  CDrawingContext::CalcWorldSpaceClippedBounds(this, a2, &v79);
  LODWORD(v78) = PixelAlign(v8, 0LL);
  DWORD1(v78) = PixelAlign(v10, v9);
  v12 = PixelAlign(v11, 1LL);
  DWORD2(v78) = v12;
  HIDWORD(v78) = PixelAlign(v14, v13);
  v15 = HIDWORD(v78);
  if ( !(unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(&v78) )
  {
    v74 = _xmm;
    v73 = _xmm;
    v76 = _xmm;
    *(_DWORD *)(a4 + 64) = 128;
    v16 = a2[1];
    v17 = *a2;
    v75 = _xmm;
    v77 = 32085;
    CMILMatrix::Translate((CMILMatrix *)&v73, v17, v16);
    TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 51));
    CMILMatrix::Multiply((CMILMatrix *)&v73, TopByReference);
    v67 = v73;
    v68 = HIDWORD(v73);
    v69 = v74;
    v71 = v76;
    v70 = HIDWORD(v74);
    v72 = HIDWORD(v76);
    *(_WORD *)(a4 + 125) = 257;
    v19 = CDrawingContext::FlushD2D((CDrawingContext *)this);
    v21 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x5D5u, 0LL);
      goto LABEL_17;
    }
    v60 = 0LL;
    if ( a3
      || (v22 = (struct IDeviceTarget *)((char *)this[4] + *(int *)(*((_QWORD *)this[4] + 1) + 4LL) + 8),
          (**(int (__fastcall ***)(struct IDeviceTarget *, GUID *, __int64 *))v22)(
            v22,
            &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f,
            &v60) < 0)
      || !(**(__int64 (__fastcall ***)(__int64))v60)(v60) )
    {
      v36 = this[4];
      v37 = v78;
      v38 = v12 - v78;
      v39 = v15 - DWORD1(v78);
      v40 = this[5];
      v41 = *((_QWORD *)v36 + 1);
      v62 = 0LL;
      v66[0] = v38;
      v66[1] = v39;
      v42 = (struct IDeviceTarget *)((char *)v36 + *(int *)(v41 + 12) + 8);
      v43 = (**(__int64 (__fastcall ***)(struct IDeviceTarget *, __int128 *))v42)(v42, &v79);
      DWORD2(v80) = 21;
      *(_QWORD *)&v80 = "Backdrop effect input";
      v44 = CD3DDevice::CreateRenderTargetBitmap(v40, &v80, v66, v43, this + 7, 3, &v62);
      v21 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x5FFu, 0LL);
      }
      else
      {
        v63 = 0LL;
        v46 = (char *)this[4] + *(int *)(*((_QWORD *)this[4] + 1) + 16LL);
        v47 = *(__int64 (__fastcall **)(char *, __int64 *, _QWORD))(*((_QWORD *)v46 + 1) + 16LL);
        wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v63);
        v48 = v47(v46 + 8, &v63, 0LL);
        v21 = v48;
        if ( v48 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0x602u, 0LL);
        }
        else
        {
          v61 = 0LL;
          v28 = v62;
          v50 = *(__int64 (__fastcall **)(struct IRenderTargetBitmap *, __int64 *, _QWORD))(*(_QWORD *)v62 + 72LL);
          wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v61);
          v51 = v50(v28, &v61, 0LL);
          v21 = v51;
          if ( v51 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x605u, 0LL);
          }
          else
          {
            v83 = v78;
            v53 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v61 + 64LL))(
                    v61,
                    0LL,
                    v63,
                    &v83);
            v21 = v53;
            if ( v53 >= 0 )
            {
              v55 = (void (__fastcall ***)(_QWORD, struct D2D_SIZE_F *))((char *)v28
                                                                       + *(int *)(*((_QWORD *)v28 + 1) + 16LL)
                                                                       + 8);
              (**v55)(v55, &v64);
              v80 = _xmm;
              LODWORD(v82) = COERCE_UNSIGNED_INT((float)SDWORD1(v78)) ^ _xmm;
              LODWORD(v81) = COERCE_UNSIGNED_INT((float)v37) ^ _xmm;
              v56 = Matrix3x3::operator*(&v67, &v73, &v80);
              *(_QWORD *)((char *)&v80 + 4) = 0LL;
              *(float *)&v80 = 1.0 / (float)SLODWORD(v64.width);
              *((float *)&v80 + 3) = 1.0 / (float)SLODWORD(v64.height);
              v81 = 0.0 - (float)(*(float *)&v80 * 0.0);
              v82 = 0.0 - (float)(*((float *)&v80 + 3) * 0.0);
              v57 = Matrix3x3::operator*(v56, &v67, &v80);
              v65 = v28;
              v62 = 0LL;
              *(_OWORD *)(a4 + 72) = *(_OWORD *)v57;
              *(_OWORD *)(a4 + 88) = *(_OWORD *)(v57 + 16);
              *(_DWORD *)(a4 + 104) = *(_DWORD *)(v57 + 32);
              *(_QWORD *)(a4 + 108) = 0LL;
              *(float *)(a4 + 120) = (float)v39;
              *(float *)(a4 + 116) = (float)v38;
              wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v61);
              wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v63);
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v62);
              goto LABEL_10;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x610u, 0LL);
          }
          wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v61);
        }
        wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v63);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v62);
    }
    else
    {
      v23 = (void (__fastcall ***)(_QWORD, __int64 *))(*(int *)(*(_QWORD *)(v60 + 8) + 16LL) + v60 + 8);
      (**v23)(v23, &v61);
      *(_QWORD *)((char *)&v83 + 4) = 0LL;
      *(float *)&v83 = 1.0 / (float)(int)v61;
      *((float *)&v83 + 3) = 1.0 / (float)SHIDWORD(v61);
      v84 = 0.0 - (float)(*(float *)&v83 * 0.0);
      v85 = 0.0 - (float)(*((float *)&v83 + 3) * 0.0);
      v24 = Matrix3x3::operator*(&v67, &v80, &v83);
      *(_OWORD *)(a4 + 72) = *(_OWORD *)v24;
      *(_OWORD *)(a4 + 88) = *(_OWORD *)(v24 + 16);
      *(_DWORD *)(a4 + 104) = *(_DWORD *)(v24 + 32);
      for ( i = 0LL; i < 4; ++i )
        *(float *)(a4 + 4 * i + 108) = (float)*((int *)&v78 + i);
      v26 = CRenderTargetBitmap::CreateSingleAdapter(this[4], &v65);
      v21 = v26;
      if ( v26 >= 0 )
      {
        v28 = v65;
LABEL_10:
        if ( g_LockAndReadBackdropTexture )
        {
          v58 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v28 + 64LL))(v28);
          v59 = v58 + *(int *)(*(_QWORD *)(v58 + 8) + 16LL);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v59 + 8) + 24LL))(
            v59 + 8,
            (unsigned __int64)(this + 3) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
        }
        if ( v28 )
          v29 = (struct IRenderTargetBitmap *)((char *)v28 + *(int *)(*((_QWORD *)v28 + 1) + 16LL) + 8);
        else
          v29 = 0LL;
        v30 = CDrawListBitmap::Initialize((CDrawListBitmap *)a4, v29, (const struct CDrawingContext *)this);
        v21 = v30;
        if ( v30 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x62Bu, 0LL);
        goto LABEL_16;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x5F0u, 0LL);
    }
LABEL_16:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v60);
    goto LABEL_17;
  }
  v33 = a2[3] - a2[1];
  v64.width = a2[2] - *a2;
  v64.height = v33;
  v34 = CDrawingContext::SetEffectInputToTransparentBlack(this, &v64, (struct EffectInput *)a4);
  v21 = v34;
  if ( v34 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x635u, 0LL);
LABEL_17:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v65);
  return v21;
}
