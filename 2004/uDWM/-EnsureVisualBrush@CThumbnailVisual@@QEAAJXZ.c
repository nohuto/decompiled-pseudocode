/*
 * XREFs of ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180012B84
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180012510 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001271C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?Update@CTranslateTransformProxy@@QEAAJNN@Z @ 0x180001BD8 (-Update@CTranslateTransformProxy@@QEAAJNN@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCTranslateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCTranslateTransformProxy@@@Z @ 0x180008CC8 (--$CreateProxy@VCTranslateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCTranslateTransformProxy@@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012AF0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x180012E44 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x180012E68 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180013678 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x1800139FC (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18001528C (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x1800154B4 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x180015F54 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x180016160 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800178D0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001A02C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180026854 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003CF7C (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x18003D5E4 (-Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x18003DA6C (--$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z.c)
 *     ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x18003FB24 (-Update@CScaleTransformProxy@@QEAAJNNNN@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x1800940D0 (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 *     ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x180095830 (-SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z @ 0x1800B7B54 (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureVisualBrush(CBaseObject **this)
{
  CBaseObject *v1; // rsi
  CBaseObject *v2; // r15
  struct CPushTransformInstruction *v3; // r14
  HDC CompatibleDC; // r12
  int v6; // eax
  __int64 v7; // rdx
  signed int v8; // ebx
  struct CBaseLegacyMilBrushProxy **v9; // r13
  CRenderDataVisual *v10; // rcx
  CBaseObject *v11; // rax
  struct CRectangleGeometryProxy **v12; // rsi
  CThumbnailVisual *v13; // rcx
  int v14; // eax
  int v15; // eax
  CBaseObject *v16; // rsi
  CBaseObject *v17; // r13
  CBaseObject *v18; // r14
  HBITMAP v19; // r14
  CBaseObject *v20; // rsi
  CBaseObject *v22; // rcx
  int Brush; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  bool IsImmersiveIconic; // bl
  COLORREF v28; // ebx
  HBITMAP Bitmap; // rax
  signed int LastError; // eax
  int v31; // r9d
  HBRUSH SolidBrush; // rax
  int v33; // eax
  const struct _MARGINS *v34; // rdx
  int v35; // eax
  CScaleTransformProxy *v36; // r10
  CBaseObject *v37; // rax
  int v38; // ecx
  int v39; // r9d
  int v40; // eax
  int v41; // ecx
  unsigned int v42; // eax
  int v43; // ecx
  __m128i v44; // xmm2
  int v45; // eax
  double v46; // xmm2_8
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  CTranslateTransformProxy *v52; // r9
  int v53; // eax
  CBaseObject *v54; // r8
  int v55; // r10d
  int v56; // ebx
  __int64 v57; // rdx
  int v58; // ecx
  int v59; // r8d
  int v60; // r11d
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  CThumbnailAnimatedVisual *v69; // rcx
  int v70; // eax
  int v71; // eax
  CBaseObject *v72; // rcx
  unsigned int v73; // [rsp+28h] [rbp-59h]
  CBaseObject *v74; // [rsp+48h] [rbp-39h] BYREF
  HBITMAP v75; // [rsp+50h] [rbp-31h] BYREF
  CBaseObject *v76; // [rsp+58h] [rbp-29h] BYREF
  CBaseObject *v77; // [rsp+60h] [rbp-21h] BYREF
  CBaseObject *v78; // [rsp+68h] [rbp-19h] BYREF
  struct CPushTransformInstruction *v79; // [rsp+70h] [rbp-11h] BYREF
  struct CDrawBitmapInstruction *v80; // [rsp+78h] [rbp-9h] BYREF
  struct IWICBitmap *v81; // [rsp+80h] [rbp-1h] BYREF
  CBaseObject *v82; // [rsp+88h] [rbp+7h] BYREF
  HBRUSH v83; // [rsp+90h] [rbp+Fh] BYREF
  HGDIOBJ h; // [rsp+98h] [rbp+17h]
  RECT rc; // [rsp+A0h] [rbp+1Fh] BYREF

  v1 = 0LL;
  v77 = 0LL;
  v2 = 0LL;
  v78 = 0LL;
  v3 = 0LL;
  v76 = 0LL;
  CompatibleDC = 0LL;
  v83 = 0LL;
  v75 = 0LL;
  v81 = 0LL;
  v74 = 0LL;
  v82 = 0LL;
  *(_QWORD *)&rc.left = 0LL;
  v80 = 0LL;
  v79 = 0LL;
  h = 0LL;
  if ( !*((_BYTE *)this + 472) )
  {
    v71 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
    v8 = v71;
    if ( v71 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v71, 0x2E5u);
      goto LABEL_30;
    }
    v72 = this[47];
    if ( !v72 )
      goto LABEL_30;
    CBaseObject::Release(v72);
    this[47] = 0LL;
LABEL_16:
    if ( v1 )
    {
      CBaseObject::Release(v1);
      v16 = v78;
      goto LABEL_18;
    }
    goto LABEL_30;
  }
  v6 = CThumbnailVisual::EnsureSecondaryWindowRepresentation((CThumbnailVisual *)this, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x258u);
    goto LABEL_30;
  }
  v9 = this + 48;
  if ( this[48] )
  {
    if ( CThumbnailVisual::_HasBorder((CThumbnailVisual *)this) )
    {
      v26 = CRenderDataVisual::ClearInstructions(v10);
      v8 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x277u);
        goto LABEL_30;
      }
    }
  }
  else
  {
    v22 = this[47];
    *((_BYTE *)this + 474) = 0;
    Brush = CSecondaryWindowRepresentation::GetBrush(v22, v7, this + 49, this + 50);
    v8 = Brush;
    if ( Brush < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Brush, 0x267u);
      goto LABEL_30;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x4000);
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 4096);
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x40000);
    v24 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
    v8 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x271u);
      goto LABEL_30;
    }
  }
  if ( *((_DWORD *)this + 68) )
  {
LABEL_30:
    v19 = v75;
LABEL_31:
    v20 = v74;
    goto LABEL_32;
  }
  if ( !this[54] || (v11 = this[46]) == 0LL || (*((_DWORD *)v11 + 9) & 0x4000000) == 0 )
  {
    if ( !*v9 )
      goto LABEL_30;
    v12 = this + 52;
    if ( !this[52] )
    {
      v25 = CCompositor::CreateProxy<CRectangleGeometryProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
      v8 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x2C8u);
        goto LABEL_30;
      }
    }
    if ( CThumbnailVisual::_HasBorder((CThumbnailVisual *)this) )
    {
      v68 = CThumbnailVisual::_AddBorderInstructions(v13);
      v8 = v68;
      if ( v68 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v68, 0x2CDu);
        goto LABEL_30;
      }
    }
    if ( CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this)
      && !CThumbnailVisual::_HasBorder((CThumbnailVisual *)this) )
    {
      v70 = CThumbnailAnimatedVisual::AddSolidBrushInstruction(v69, *v12, 0, 1.0);
      v8 = v70;
      if ( v70 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v70, 0x2D6u);
        goto LABEL_30;
      }
    }
    v14 = CDrawGeometryInstruction::Create(*v9, *v12, (struct CDrawGeometryInstruction **)&rc);
    v8 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x2DEu);
      v1 = *(CBaseObject **)&rc.left;
    }
    else
    {
      v1 = *(CBaseObject **)&rc.left;
      v15 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, *(struct CRenderDataInstruction **)&rc.left);
      v8 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x2E0u);
    }
    goto LABEL_16;
  }
  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this);
  CVisual::SetBorderMode(this);
  if ( !IsImmersiveIconic )
  {
    v16 = v78;
    goto LABEL_118;
  }
  v28 = *(_DWORD *)(*((_QWORD *)this[46] + 3) + 168LL);
  CompatibleDC = CreateCompatibleDC(0LL);
  SetBkMode(CompatibleDC, 2);
  SetLastError(0);
  Bitmap = CreateBitmap(1, 1, 1u, 0x20u, 0LL);
  v75 = Bitmap;
  v19 = Bitmap;
  if ( !Bitmap )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    v73 = 658;
    if ( v8 >= 0 )
      v8 = -2003304445;
    goto LABEL_64;
  }
  h = SelectObject(CompatibleDC, Bitmap);
  SolidBrush = CreateSolidBrush(v28);
  v83 = SolidBrush;
  if ( !SolidBrush )
  {
    v8 = -2147024890;
    v73 = 661;
LABEL_64:
    v31 = v8;
LABEL_67:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, v73);
    goto LABEL_31;
  }
  rc = (RECT)_mm_load_si128((const __m128i *)&_xmm);
  FillRect(CompatibleDC, &rc, SolidBrush);
  v33 = (*(__int64 (__fastcall **)(_QWORD, HBITMAP, _QWORD, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                             + 39)
                                                                                          + 168LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 39),
          v19,
          0LL,
          2LL,
          &v81);
  v8 = v33;
  if ( v33 < 0 )
  {
    v73 = 665;
LABEL_66:
    v31 = v33;
    goto LABEL_67;
  }
  v33 = CBitmapSource::Create(v81, v34, &v74);
  v8 = v33;
  if ( v33 < 0 )
  {
    v73 = 667;
    goto LABEL_66;
  }
  v20 = v74;
  v35 = CDrawBitmapInstruction::Create(*((struct CBaseImageProxy **)v74 + 2), &v82);
  v8 = v35;
  if ( v35 >= 0 )
  {
    v36 = this[57];
    if ( !v36 )
    {
      v33 = CCompositor::CreateProxy<CScaleTransformProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
      v8 = v33;
      if ( v33 < 0 )
      {
        v73 = 672;
        goto LABEL_66;
      }
      v36 = this[57];
    }
    v37 = this[46];
    v38 = *((_DWORD *)v37 + 13) - *((_DWORD *)v37 + 11);
    v39 = *((_DWORD *)v37 + 12) - *((_DWORD *)v37 + 10);
    v40 = 0;
    if ( v38 >= 0 )
      v40 = v38;
    v41 = 0;
    if ( rc.bottom - rc.top >= 0 )
      v41 = rc.bottom - rc.top;
    v42 = v40 / v41;
    v43 = 0;
    if ( rc.right - rc.left >= 0 )
      v43 = rc.right - rc.left;
    v44 = _mm_cvtsi32_si128(v42);
    v45 = 0;
    *(_QWORD *)&v46 = *(_OWORD *)&_mm_cvtepi32_pd(v44);
    if ( v39 >= 0 )
      v45 = v39;
    v33 = CScaleTransformProxy::Update(v36, (double)(v45 / v43), v46, 0.0, 0.0);
    v8 = v33;
    if ( v33 < 0 )
    {
      v73 = 678;
      goto LABEL_66;
    }
    v47 = CPushTransformInstruction::Create(this[57], &v78);
    v8 = v47;
    if ( v47 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v47, 0x2A7u);
      v16 = v78;
LABEL_25:
      v18 = v76;
LABEL_26:
      if ( v16 )
        CBaseObject::Release(v16);
      if ( v18 )
        CBaseObject::Release(v18);
      goto LABEL_30;
    }
    v16 = v78;
    v48 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v78);
    v8 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v48, 0x2A8u);
      goto LABEL_25;
    }
    v49 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v82);
    v8 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v49, 0x2A9u);
      goto LABEL_25;
    }
    v50 = CPopInstruction::Create(&v76);
    v8 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v50, 0x2AAu);
      goto LABEL_25;
    }
    v18 = v76;
    v51 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v76);
    v8 = v51;
    if ( v51 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v51, 0x2ABu);
      goto LABEL_26;
    }
    v52 = this[56];
    if ( !v52 )
    {
      v53 = CCompositor::CreateProxy<CTranslateTransformProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              (volatile signed __int32 **)this + 56);
      v8 = v53;
      if ( v53 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v53, 0x2B0u);
        goto LABEL_25;
      }
      v52 = this[56];
    }
    v54 = this[46];
    v55 = 0;
    if ( *((_DWORD *)v54 + 13) - *((_DWORD *)v54 + 11) >= 0 )
      v55 = *((_DWORD *)v54 + 13) - *((_DWORD *)v54 + 11);
    v56 = 0;
    v57 = *((_QWORD *)this[47] + 47);
    if ( v57 )
      v56 = *(_DWORD *)(v57 + 124);
    v58 = *((_DWORD *)v54 + 12) - *((_DWORD *)v54 + 10);
    v59 = 0;
    if ( v58 >= 0 )
      v59 = v58;
    v60 = 0;
    if ( v57 )
      v60 = *(_DWORD *)(v57 + 120);
    v61 = CTranslateTransformProxy::Update(v52, (double)(v59 / 2 - v60 / 2), (double)(v55 / 2 - v56 / 2));
    v8 = v61;
    if ( v61 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v61, 0x2B4u);
      goto LABEL_25;
    }
    v62 = CPushTransformInstruction::Create(this[56], &v79);
    v8 = v62;
    if ( v62 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v62, 0x2B5u);
      v3 = v79;
LABEL_114:
      v17 = v77;
LABEL_21:
      if ( v3 )
        CBaseObject::Release(v3);
      if ( v17 )
        CBaseObject::Release(v17);
      goto LABEL_25;
    }
    v3 = v79;
    v63 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v79);
    v8 = v63;
    if ( v63 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v63, 0x2B6u);
      goto LABEL_114;
    }
LABEL_118:
    v64 = CDrawBitmapInstruction::Create(this[54], &v80);
    v8 = v64;
    if ( v64 >= 0 )
    {
      v2 = v80;
      v65 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v80);
      v8 = v65;
      if ( v65 >= 0 )
      {
        if ( v3 )
        {
          v66 = CPopInstruction::Create(&v77);
          v8 = v66;
          if ( v66 >= 0 )
          {
            v17 = v77;
            v67 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v77);
            v8 = v67;
            if ( v67 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v67, 0x2BFu);
            goto LABEL_19;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v66, 0x2BEu);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v65, 0x2BAu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v64, 0x2B9u);
      v2 = v80;
    }
LABEL_18:
    v17 = v77;
LABEL_19:
    if ( v2 )
      CBaseObject::Release(v2);
    goto LABEL_21;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x29Cu);
LABEL_32:
  if ( v81 )
    ((void (__fastcall *)(struct IWICBitmap *))v81->lpVtbl->Release)(v81);
  if ( v20 )
    CBaseObject::Release(v20);
  if ( v82 )
    CBaseObject::Release(v82);
  if ( CompatibleDC && h )
    SelectObject(CompatibleDC, h);
  if ( v19 )
    ReleaseGDIObject<HRGN__ *>(&v75);
  if ( v83 )
    ReleaseGDIObject<HRGN__ *>(&v83);
  if ( CompatibleDC )
    DeleteDC(CompatibleDC);
  return (unsigned int)v8;
}
