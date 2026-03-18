/*
 * XREFs of ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008D06C
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000959C (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008CB20 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z @ 0x18004ADE0 (-GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180053AAC (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180086704 (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x180086C90 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z @ 0x18008C200 (--0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x18008D714 (-GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE2E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7C08 (-RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?SetEffectInputParameters@CBackdropVisualImage@@QEAAXAEBVMatrix3x3@@PEA_N@Z @ 0x1800D3F84 (-SetEffectInputParameters@CBackdropVisualImage@@QEAAXAEBVMatrix3x3@@PEA_N@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBVCMILMatrix@@@Z @ 0x1800D7E60 (--0DbgString@DwmDbg@@QEAA@AEBVCMILMatrix@@@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800D842C (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x1800DCD94 (-HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x1800E109C (-CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801FE998 (-GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 */

__int64 __fastcall CDrawingContext::ValidateBVIEffectInputForRender(__int64 a1, struct MilRectF *a2, bool *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  CVisual *v7; // rax
  const struct CVisualTreePath *v8; // r12
  struct CVisual *v9; // r14
  CBackdropVisualImage *BackdropVisualImage; // rax
  __int64 v11; // r8
  CBackdropVisualImage *v12; // rdi
  __int64 i; // rax
  void *v14; // r13
  int WorldTransform; // edi
  char v16; // al
  __int64 v17; // r9
  __int128 *v18; // rdx
  CBackdropVisualImage *v19; // r14
  bool IsValid; // al
  struct MilRectF *v21; // r12
  float v22; // xmm2_4
  float v23; // xmm1_4
  char v24; // di
  const struct RenderTargetInfo *v25; // rax
  const char *v26; // rbx
  DwmDbg::DbgString *v27; // rax
  void **v28; // rbx
  const char *v29; // rdx
  void **v30; // rax
  bool v32; // si
  const struct RenderTargetInfo *v33; // rax
  void **v34; // rbx
  const char *v35; // rdx
  void **v36; // rax
  __int64 v37; // rdx
  const struct RenderTargetInfo *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  bool v41[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct MilRectF *v42; // [rsp+38h] [rbp-C8h] BYREF
  void *v43; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+48h] [rbp-B8h] BYREF
  int v45; // [rsp+50h] [rbp-B0h]
  __int64 v46; // [rsp+54h] [rbp-ACh]
  int v47; // [rsp+5Ch] [rbp-A4h]
  __int64 v48; // [rsp+60h] [rbp-A0h]
  int v49; // [rsp+68h] [rbp-98h]
  __int128 v50; // [rsp+70h] [rbp-90h] BYREF
  __int128 v51; // [rsp+80h] [rbp-80h]
  __int128 v52; // [rsp+90h] [rbp-70h]
  __int128 v53; // [rsp+A0h] [rbp-60h]
  char v54; // [rsp+B0h] [rbp-50h]
  char v55; // [rsp+B1h] [rbp-4Fh]
  _OWORD v56[4]; // [rsp+C0h] [rbp-40h] BYREF
  char v57; // [rsp+100h] [rbp+0h]
  char v58; // [rsp+101h] [rbp+1h]
  __int128 v59; // [rsp+110h] [rbp+10h] BYREF
  __int128 v60; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v3 = a1 + 24;
  v42 = a2;
  v4 = *(_QWORD *)(a1 + 24);
  v41[0] = 0;
  v7 = (CVisual *)(*(__int64 (__fastcall **)(__int64))(v4 + 32))(a1 + 24);
  v8 = *(const struct CVisualTreePath **)(a1 + 7952);
  v9 = v7;
  BackdropVisualImage = CVisual::GetBackdropVisualImage(v7, v8);
  v12 = BackdropVisualImage;
  if ( *(_QWORD *)(a1 + 168) && BackdropVisualImage && CBackdropVisualImage::CanUseAsEffectInput(BackdropVisualImage) )
  {
    v32 = 0;
    if ( a3 )
    {
      v33 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
      v32 = !CBackdropVisualImage::HasValidRenderingRealization(v12, v33);
      *a3 = v32;
    }
    v34 = (void **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v43, &byte_18032C47F);
    v35 = "BVI-SkipValidationInNestedBackdropWalk-InvalidatedCache";
    if ( !v32 )
      v35 = "BVI-SkipValidationInNestedBackdropWalk-DidNotInvalidateCache";
    v36 = (void **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v42, v35);
    CBackdropVisualImage::LogEtwEvent((__int64)v12, v36, v34);
    return 0LL;
  }
  for ( i = a1; *(_QWORD *)(i + 184); i = *(_QWORD *)(i + 184) )
    ;
  v14 = *(void **)(i + 7928);
  v43 = *(void **)(a1 + 7928);
  v56[0] = _xmm;
  v56[2] = _xmm;
  v58 = v58 & 0xC0 | 0x17;
  v56[1] = _xmm;
  v59 = *(_OWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v57 = 85;
  v56[3] = _xmm;
  WorldTransform = CVisual::GetWorldTransform((__int64)v9, (__int128 **)v8, v11, (__int64)v56);
  if ( WorldTransform < 0 )
  {
    v37 = 1537LL;
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<1>(v56, v42, &v59);
    v60 = 0LL;
    CDrawingContext::CalcWorldSpaceClippedBounds(a1, v42, &v60);
    v16 = CBackdropVisualImage::RequireClippedBounds(&v59);
    v18 = &v59;
    if ( v16 )
      v18 = &v60;
    v59 = *v18;
    LOBYTE(v17) = v43 != v14 || !(*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v14 + 184LL))(v14);
    WorldTransform = CVisual::CreateOrUpdateBVI(v9, v8, (__int64)&v59, v17, (__int64)v41);
    if ( WorldTransform >= 0 )
    {
      v19 = CVisual::GetBackdropVisualImage(v9, v8);
      IsValid = CBackdropVisualImage::IsValid(v19);
      v21 = v42;
      if ( IsValid )
      {
        v22 = *((float *)v42 + 1);
        v51 = _xmm;
        v50 = _xmm;
        v53 = _xmm;
        v23 = *(float *)v42;
        v52 = _xmm;
        v54 = 85;
        v55 = v55 & 0xC0 | 0x17;
        CMILMatrix::Translate((CMILMatrix *)&v50, v23, v22);
        CMILMatrix::Multiply((CMILMatrix *)&v50, (const struct CMILMatrix *)v56);
        v44 = v50;
        v45 = HIDWORD(v50);
        v46 = v51;
        v48 = v53;
        v47 = HIDWORD(v51);
        v49 = HIDWORD(v53);
        v41[1] = 0;
        CBackdropVisualImage::SetEffectInputParameters(v19, (const struct Matrix3x3 *)&v44, &v41[1]);
        v24 = v41[1] || v41[0];
        if ( g_LockAndReadBackdropTexture )
        {
          v42 = 0LL;
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v42);
          v38 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
          if ( (int)CCachedVisualImage::GetRenderTargetBitmap(v19, v38, &v42) >= 0 )
          {
            v39 = (*(__int64 (__fastcall **)(struct MilRectF *))(*(_QWORD *)v42 + 64LL))(v42);
            v40 = *(int *)(*(_QWORD *)(v39 + 8) + 16LL) + v39 + 8;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 24LL))(v40, v3 & -(__int64)(a1 != 0));
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v42);
        }
      }
      else
      {
        v24 = v41[0];
      }
      if ( a3 )
      {
        v25 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
        v24 |= !CBackdropVisualImage::HasValidRenderingRealization(v19, v25);
        *a3 = v24;
      }
      v26 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v42, (const struct CMILMatrix *)v56);
      v27 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v43, v21);
      v28 = (void **)DwmDbg::DbgString::DbgString(
                       (DwmDbg::DbgString *)&v60,
                       "rcBackdropLocal=[%s], worldTransform=[%s]",
                       *(const char **)v27,
                       v26);
      v29 = "BVI-Validate-InvalidatedCache";
      if ( !v24 )
        v29 = "BVI-Validate-DidNotInvalidateCache";
      v30 = (void **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v59, v29);
      CBackdropVisualImage::LogEtwEvent((__int64)v19, v30, v28);
      if ( v43 )
        DefaultHeap::Free(v43);
      if ( v42 )
        DefaultHeap::Free(v42);
      return 0LL;
    }
    v37 = 1551LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v37,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
    (const char *)(unsigned int)WorldTransform);
  return (unsigned int)WorldTransform;
}
