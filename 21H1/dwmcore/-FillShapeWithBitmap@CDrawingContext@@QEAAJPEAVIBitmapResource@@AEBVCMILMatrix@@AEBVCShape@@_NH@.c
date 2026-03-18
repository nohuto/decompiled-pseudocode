/*
 * XREFs of ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800497D4
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180048ABC (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800E9624 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVI_ea_1800E9624.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IM@@@@Z @ 0x180179D20 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FD690 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z @ 0x18002AF64 (-Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18002F788 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002F7B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ @ 0x1800301A8 (--1CDisableCPUClipScope@CDrawingContext@@QEAA@XZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800367A8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x180049320 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x180049B14 (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x180049BC0 (-FillShapeWithBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18007190C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBitmap(
        CDrawingContext *this,
        struct IBitmapResource *a2,
        const struct CMILMatrix *a3,
        const struct CShape *a4,
        bool a5,
        int a6)
{
  unsigned int v10; // ebx
  int v11; // xmm1_4
  unsigned int v12; // xmm2_4
  unsigned int v13; // xmm3_4
  int v14; // xmm4_4
  int v15; // xmm5_4
  __int64 v16; // rdx
  void (__fastcall *v18)(struct IBitmapResource *, void *, __int64); // rbx
  __int64 (__fastcall ***v19)(_QWORD, struct CShape ***); // rcx
  __int64 v20; // r8
  int v21; // eax
  void *v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  bool v26; // si
  __int64 v27; // rcx
  struct CShape *v28; // rdx
  int v29; // eax
  __int64 v30; // rcx
  char *v31; // rcx
  const struct CMILMatrix *TopByReference; // rax
  int v34; // xmm1_4
  unsigned int v35; // xmm0_4
  int v36; // xmm1_4
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rcx
  struct IBitmapRealization *v44; // [rsp+30h] [rbp-69h] BYREF
  struct CShape *v45; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v46[24]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v47[24]; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v48[24]; // [rsp+70h] [rbp-29h] BYREF
  struct CShape **v49; // [rsp+88h] [rbp-11h] BYREF
  struct CShape *v50; // [rsp+90h] [rbp-9h] BYREF
  int v51; // [rsp+98h] [rbp-1h]
  int v52; // [rsp+9Ch] [rbp+3h]

  v10 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CShape *))(*(_QWORD *)a4 + 16LL))(a4) )
    return v10;
  v11 = *((_DWORD *)a3 + 1);
  v12 = *((_DWORD *)a3 + 4);
  v13 = *((_DWORD *)a3 + 5);
  v14 = *((_DWORD *)a3 + 12);
  v15 = *((_DWORD *)a3 + 13);
  LODWORD(v49) = *(_DWORD *)a3;
  HIDWORD(v49) = v11;
  v50 = (struct CShape *)__PAIR64__(v13, v12);
  v51 = v14;
  v52 = v15;
  MILMatrix3x2::SetInverse((MILMatrix3x2 *)v46, (const struct MILMatrix3x2 *)&v49);
  if ( (*(unsigned __int8 (__fastcall **)(struct IBitmapResource *))(*(_QWORD *)a2 + 16LL))(a2) )
    a5 = 1;
  if ( *((_QWORD *)this + 6) && !*((_BYTE *)g_pComposition + 1129) )
    LOBYTE(v10) = 1;
  LOBYTE(v16) = v10;
  (*(void (__fastcall **)(struct IBitmapResource *, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 32LL))(
    a2,
    v16,
    *((_QWORD *)this + 7),
    0LL);
  if ( (_BYTE)v10 )
  {
    v18 = *(void (__fastcall **)(struct IBitmapResource *, void *, __int64))(*(_QWORD *)a2 + 40LL);
    v19 = (__int64 (__fastcall ***)(_QWORD, struct CShape ***))(*((_QWORD *)this + 4)
                                                              + 8LL
                                                              + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 12LL));
    v20 = *(unsigned int *)((**v19)(v19, &v49) + 8);
    v21 = *((_DWORD *)this + 102);
    if ( v21 )
      v22 = (void *)(*((_QWORD *)this + 53) + 68LL * (unsigned int)(v21 - 1));
    else
      v22 = &CMILMatrix::Identity;
    v18(a2, v22, v20);
  }
  v23 = *(_QWORD *)a2;
  v44 = 0LL;
  v24 = (*(__int64 (__fastcall **)(struct IBitmapResource *, struct IBitmapRealization **))(v23 + 48))(a2, &v44);
  v10 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x772u, 0LL);
LABEL_36:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v44);
    return v10;
  }
  v49 = &v45;
  v45 = 0LL;
  v50 = 0LL;
  LOBYTE(v51) = 1;
  v26 = (int)CDrawingContext::GetUnOccludedWorldShape(this, a4, a6, &v50) >= 0;
  if ( (_BYTE)v51 )
  {
    v27 = (__int64)v49;
    v28 = *v49;
    *v49 = v50;
    if ( v28 )
      std::default_delete<CShape>::operator()(v27, (__int64 (__fastcall ***)(_QWORD, __int64))v28);
  }
  if ( v26 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CShape *))(*(_QWORD *)v45 + 16LL))(v45) )
      goto LABEL_17;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 408));
    v34 = *((_DWORD *)TopByReference + 1);
    LODWORD(v49) = *(_DWORD *)TopByReference;
    v35 = *((_DWORD *)TopByReference + 4);
    HIDWORD(v49) = v34;
    v50 = (struct CShape *)__PAIR64__(*((_DWORD *)TopByReference + 5), v35);
    v36 = *((_DWORD *)TopByReference + 13);
    v51 = *((_DWORD *)TopByReference + 12);
    v52 = v36;
    MILMatrix3x2::SetInverse((MILMatrix3x2 *)v47, (const struct MILMatrix3x2 *)&v49);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)v48,
      (const struct D2D1::Matrix3x2F *)v47,
      (const struct D2D1::Matrix3x2F *)v46);
    v37 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v10 = v37;
    if ( v37 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x78Au, 0LL);
    }
    else
    {
      v49 = 0LL;
      v39 = CDrawingContext::CDisableCPUClipScope::Enter((CDrawingContext::CDisableCPUClipScope *)&v49, this);
      v10 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x794u, 0LL);
      }
      else
      {
        v41 = CDrawingContext::FillShapeWithBitmapRealization(this, v44, v45, (const struct MILMatrix3x2 *)v48, a5);
        v10 = v41;
        if ( v41 >= 0 )
        {
          CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v49);
          CDrawingContext::PopTransformInternal(this, 1);
          goto LABEL_17;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x799u, 0LL);
      }
      CDrawingContext::CDisableCPUClipScope::~CDisableCPUClipScope((CDrawingContext::CDisableCPUClipScope *)&v49);
      CDrawingContext::PopTransformInternal(this, 1);
    }
    goto LABEL_32;
  }
  v29 = CDrawingContext::FillShapeWithBitmapRealization(this, v44, a4, (const struct MILMatrix3x2 *)v46, a5);
  v10 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x7A1u, 0LL);
LABEL_32:
    if ( v45 )
      std::default_delete<CShape>::operator()(v43, (__int64 (__fastcall ***)(_QWORD, __int64))v45);
    goto LABEL_36;
  }
LABEL_17:
  if ( v45 )
    std::default_delete<CShape>::operator()(v30, (__int64 (__fastcall ***)(_QWORD, __int64))v45);
  if ( v44 )
  {
    v31 = (char *)v44 + *(int *)(*((_QWORD *)v44 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return v10;
}
