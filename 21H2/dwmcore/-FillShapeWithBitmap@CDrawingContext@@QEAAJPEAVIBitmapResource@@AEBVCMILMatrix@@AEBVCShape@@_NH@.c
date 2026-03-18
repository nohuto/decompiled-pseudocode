/*
 * XREFs of ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800B0C64
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800978F0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IL@@@@Z @ 0x1801B07D0 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180247DB0 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x1800581B8 (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18006286C (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x1800B1014 (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x1800B10C4 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x1800B1268 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D53DC (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Pop@?$CWatermarkStack@I$0EA@$01$09@@QEAA_NPEAI@Z @ 0x1801B2D40 (-Pop@-$CWatermarkStack@I$0EA@$01$09@@QEAA_NPEAI@Z.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBitmap(
        CDrawingContext *this,
        struct IBitmapResource *a2,
        const struct CMILMatrix *a3,
        const struct CShape *a4,
        bool a5,
        int a6)
{
  unsigned int v10; // edi
  int v11; // xmm1_4
  unsigned int v12; // xmm2_4
  unsigned int v13; // xmm3_4
  int v14; // xmm4_4
  int v15; // xmm5_4
  __int64 v16; // rdx
  void (__fastcall *v18)(struct IBitmapResource *, __int64, void *, __int64); // r12
  __int64 (__fastcall ***v19)(_QWORD, struct CShape **); // rcx
  __int64 v20; // rdx
  __int64 v21; // r9
  int v22; // eax
  void *v23; // r8
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  bool v27; // r15
  struct CShape *v28; // rcx
  __int64 (__fastcall ***v29)(_QWORD, __int64); // rdx
  int v30; // eax
  __int64 v31; // rcx
  char *v32; // rcx
  int v34; // eax
  _DWORD *v35; // rax
  int v36; // xmm1_4
  unsigned int v37; // xmm0_4
  int v38; // xmm1_4
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  int v45; // eax
  __int64 v46; // rcx
  struct IBitmapRealization *v47; // [rsp+30h] [rbp-49h] BYREF
  struct CShape *v48; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v49[24]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v50[24]; // [rsp+58h] [rbp-21h] BYREF
  struct CShape *v51[2]; // [rsp+70h] [rbp-9h] BYREF
  int v52; // [rsp+80h] [rbp+7h]
  int v53; // [rsp+84h] [rbp+Bh]

  v10 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CShape *))(*(_QWORD *)a4 + 16LL))(a4) )
    return v10;
  v11 = *((_DWORD *)a3 + 1);
  v12 = *((_DWORD *)a3 + 4);
  v13 = *((_DWORD *)a3 + 5);
  v14 = *((_DWORD *)a3 + 12);
  v15 = *((_DWORD *)a3 + 13);
  LODWORD(v51[0]) = *(_DWORD *)a3;
  HIDWORD(v51[0]) = v11;
  v51[1] = (struct CShape *)__PAIR64__(v13, v12);
  v52 = v14;
  v53 = v15;
  MILMatrix3x2::SetInverse((MILMatrix3x2 *)v49, (const struct MILMatrix3x2 *)v51);
  if ( (*(unsigned __int8 (__fastcall **)(struct IBitmapResource *))(*(_QWORD *)a2 + 16LL))(a2) )
    a5 = 1;
  if ( *((_QWORD *)this + 6) && !*((_BYTE *)g_pComposition + 1274) )
    LOBYTE(v10) = 1;
  LOBYTE(v16) = v10;
  (*(void (__fastcall **)(struct IBitmapResource *, __int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, v16, 0LL);
  v18 = *(void (__fastcall **)(struct IBitmapResource *, __int64, void *, __int64))(*(_QWORD *)a2 + 48LL);
  v19 = (__int64 (__fastcall ***)(_QWORD, struct CShape **))(*((_QWORD *)this + 4)
                                                           + 8LL
                                                           + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 12LL));
  v21 = *(unsigned int *)((**v19)(v19, v51) + 8);
  v22 = *((_DWORD *)this + 92);
  if ( v22 )
    v23 = (void *)(*((_QWORD *)this + 48) + 68LL * (unsigned int)(v22 - 1));
  else
    v23 = &CMILMatrix::Identity;
  LOBYTE(v20) = v10;
  v18(a2, v20, v23, v21);
  v24 = *(_QWORD *)a2;
  v47 = 0LL;
  v25 = (*(__int64 (__fastcall **)(struct IBitmapResource *, struct IBitmapRealization **))(v24 + 56))(a2, &v47);
  v10 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0x7FCu);
LABEL_41:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v47);
    return v10;
  }
  v48 = 0LL;
  v51[1] = 0LL;
  v51[0] = (struct CShape *)&v48;
  LOBYTE(v52) = 1;
  v27 = (int)CDrawingContext::GetUnOccludedWorldShape(this, a4, a6, &v51[1]) >= 0;
  if ( (_BYTE)v52 )
  {
    v28 = v51[0];
    v29 = *(__int64 (__fastcall ****)(_QWORD, __int64))v51[0];
    *(_QWORD *)v51[0] = v51[1];
    if ( v29 )
      std::default_delete<CShape>::operator()((__int64)v28, v29);
  }
  if ( v27 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CShape *))(*(_QWORD *)v48 + 16LL))(v48) )
      goto LABEL_15;
    v34 = *((_DWORD *)this + 92);
    if ( v34 )
      v35 = (_DWORD *)(*((_QWORD *)this + 48) + 68LL * (unsigned int)(v34 - 1));
    else
      v35 = &CMILMatrix::Identity;
    v36 = v35[1];
    LODWORD(v51[0]) = *v35;
    v37 = v35[4];
    HIDWORD(v51[0]) = v36;
    v51[1] = (struct CShape *)__PAIR64__(v35[5], v37);
    v38 = v35[13];
    v52 = v35[12];
    v53 = v38;
    MILMatrix3x2::SetInverse((MILMatrix3x2 *)v50, (const struct MILMatrix3x2 *)v51);
    MILMatrix3x2::SetProduct((MILMatrix3x2 *)v51, (const struct MILMatrix3x2 *)v50, (const struct MILMatrix3x2 *)v49);
    v39 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v10 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0LL, v39, 0x814u);
    }
    else
    {
      v41 = CDrawingContext::FillShapeWithBitmapRealization(this, v47, v48, (const struct MILMatrix3x2 *)v51, a5);
      v10 = v41;
      if ( v41 >= 0 )
      {
        v42 = *((_DWORD *)this + 84);
        if ( v42 )
        {
          v43 = (unsigned int)(v42 - 1);
          *((_DWORD *)this + 84) = v43;
          v31 = 2 * v43;
          *(_OWORD *)v51 = *(_OWORD *)(*((_QWORD *)this + 44) + 8 * v31);
        }
        if ( v51[1] )
          CWatermarkStack<unsigned int,64,2,10>::Pop((char *)this + 432);
        v44 = *((_DWORD *)this + 92);
        if ( v44 )
          *((_DWORD *)this + 92) = v44 - 1;
        v45 = *((_DWORD *)this + 100);
        if ( v45 )
          *((_DWORD *)this + 100) = v45 - 1;
        goto LABEL_15;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0LL, v41, 0x81Du);
      CDrawingContext::PopTransformInternal(this, 1);
    }
    goto LABEL_37;
  }
  v30 = CDrawingContext::FillShapeWithBitmapRealization(this, v47, a4, (const struct MILMatrix3x2 *)v49, a5);
  v10 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0LL, v30, 0x825u);
LABEL_37:
    if ( v48 )
      std::default_delete<CShape>::operator()(v46, (__int64 (__fastcall ***)(_QWORD, __int64))v48);
    goto LABEL_41;
  }
LABEL_15:
  if ( v48 )
    std::default_delete<CShape>::operator()(v31, (__int64 (__fastcall ***)(_QWORD, __int64))v48);
  if ( v47 )
  {
    v32 = (char *)v47 + *(int *)(*((_QWORD *)v47 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v32 + 16LL))(v32);
  }
  return v10;
}
