/*
 * XREFs of ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180036214
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180028DB0 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000C240 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18000CF2C (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUMilPointAndSizeL@@@Z @ 0x18000EA14 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 *     ?Create@CTopLevelWindow@@SAJPEAPEAV1@@Z @ 0x180013A2C (-Create@CTopLevelWindow@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180013D68 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180014514 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x1800154B4 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x180015F54 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800172D0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800178D0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x18001C304 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18001D644 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x1800236E8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800268C4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800289B0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z @ 0x18002A7B0 (-Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18002AFF0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z @ 0x18002B7E4 (-Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x18003279C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180036718 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180036760 (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ??$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z @ 0x18003DB20 (--$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowSnapshot::ProcessFreezeSnapshotAndRelease(CWindowSnapshot *this, struct CWindowData *a2)
{
  __int64 v2; // rax
  CBaseObject *v5; // rsi
  struct CWindowData *v6; // r14
  int SyncedWindowData; // eax
  int RectangleGeometry; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __m128i *v11; // rdx
  int v12; // r14d
  int v13; // r15d
  CWindowData *v14; // rbx
  __int64 v15; // rdx
  __m128i v16; // xmm1
  int v17; // eax
  unsigned __int64 v18; // xmm0_8
  LONG v19; // r14d
  int v20; // r8d
  LONG v21; // r15d
  int v22; // eax
  int v23; // eax
  __int64 i; // rax
  int v25; // eax
  float ScalingFactorForCVI; // xmm0_4
  __int64 v27; // rdx
  CSizeResourceProxy *v28; // rcx
  int v29; // r9d
  int v30; // r8d
  char *v31; // r12
  CVisual **v32; // r15
  CBaseObject *v33; // r14
  CVisual *v34; // r14
  CBaseObject *v35; // rcx
  CBaseObject *v36; // r14
  int v38; // r9d
  struct IDwmWindow *v39; // rax
  float v40; // xmm1_4
  unsigned int v41; // eax
  int v42; // r14d
  int v43; // r15d
  __m128i v44; // xmm0
  int v45; // eax
  float v46; // xmm0_4
  struct CRectangleGeometryProxy **v47; // [rsp+20h] [rbp-79h]
  struct CRectangleGeometryProxy **v48; // [rsp+20h] [rbp-79h]
  unsigned int v49; // [rsp+20h] [rbp-79h]
  int v50; // [rsp+40h] [rbp-59h]
  int v51; // [rsp+40h] [rbp-59h]
  int v52; // [rsp+44h] [rbp-55h]
  int v53; // [rsp+44h] [rbp-55h]
  CBaseObject *v54; // [rsp+48h] [rbp-51h] BYREF
  int v55[2]; // [rsp+50h] [rbp-49h] BYREF
  int v56; // [rsp+58h] [rbp-41h]
  int v57; // [rsp+5Ch] [rbp-3Dh]
  CBaseObject *v58; // [rsp+60h] [rbp-39h] BYREF
  CBaseObject *v59; // [rsp+68h] [rbp-31h] BYREF
  struct tagRECT v60; // [rsp+70h] [rbp-29h] BYREF
  struct CWindowData *v61; // [rsp+80h] [rbp-19h] BYREF
  int v62; // [rsp+88h] [rbp-11h]
  double v63[2]; // [rsp+90h] [rbp-9h] BYREF
  _DWORD v64[4]; // [rsp+A0h] [rbp+7h] BYREF

  v2 = *((_QWORD *)this + 4);
  v54 = 0LL;
  v59 = 0LL;
  v5 = 0LL;
  v58 = 0LL;
  *(_DWORD *)(v2 + 64) = 0;
  v6 = a2;
  *(_DWORD *)(*((_QWORD *)this + 4) + 68LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 76LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 72LL) = 0;
  SyncedWindowData = CTopLevelWindow::Create(&v54);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 172;
    goto LABEL_52;
  }
  v9 = *((_QWORD *)v6 + 3);
  if ( v9 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9) )
    {
      v39 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 3) + 368LL))(*((_QWORD *)a2 + 3));
      if ( v39 )
      {
        v61 = 0LL;
        SyncedWindowData = CWindowList::GetSyncedWindowData(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                             v39,
                             0,
                             &v61);
        RectangleGeometry = SyncedWindowData;
        if ( SyncedWindowData < 0 )
        {
          v49 = 180;
          goto LABEL_52;
        }
        v6 = v61;
      }
    }
  }
  *((_QWORD *)a2 + 52) = 0LL;
  v62 = 1543;
  LODWORD(v47) = 100;
  v10 = CSecondaryWindowRepresentation::Create(
          1543LL,
          ((unsigned __int64)this + 16) & -(__int64)(this != 0LL),
          (__int64)v6,
          0,
          v47,
          &v58);
  RectangleGeometry = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xC3u);
LABEL_39:
    v5 = v58;
    goto LABEL_40;
  }
  v5 = v58;
  SyncedWindowData = CSecondaryWindowRepresentation::Validate(v58);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 197;
    goto LABEL_52;
  }
  SyncedWindowData = CCompositor::CreateProxy<CRectResourceProxy>(
                       *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                       (char *)this + 56);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 200;
    goto LABEL_52;
  }
  v11 = 0LL;
  v12 = *((_DWORD *)v5 + 20) - *((_DWORD *)v5 + 23);
  v13 = *((_DWORD *)v5 + 21) - *((_DWORD *)v5 + 25);
  v14 = (CWindowData *)*((_QWORD *)v5 + 8);
  v52 = *((_DWORD *)v5 + 22);
  v50 = *((_DWORD *)v5 + 24);
  if ( *((_DWORD *)v5 + 18) == 1 )
    goto LABEL_47;
  if ( *((_DWORD *)v5 + 18) != 2 )
  {
    if ( *((_DWORD *)v5 + 18) != 3 )
      goto LABEL_11;
    if ( !CWindowData::IsImmersiveWindow(v14) )
    {
      v11 = *(__m128i **)(*((_QWORD *)v14 + 53) + 80LL);
      goto LABEL_11;
    }
    goto LABEL_47;
  }
  v15 = *((_QWORD *)v14 + 52);
  if ( !v15 )
  {
LABEL_47:
    v11 = (__m128i *)v14;
    goto LABEL_11;
  }
  v11 = *(__m128i **)(v15 + 32);
LABEL_11:
  v16 = v11[5];
  v17 = _mm_cvtsi128_si32(v16);
  v18 = _mm_srli_si128(v16, 8).m128i_u64[0];
  v19 = v12 - v17;
  v20 = v18 + v50;
  v60.left = v17 + v52;
  v21 = v13 - HIDWORD(v18);
  v60.top = v18 + v50;
  v60.right = v19;
  v22 = v19 - (v17 + v52);
  v60.bottom = v21;
  *(_QWORD *)v55 = 0LL;
  if ( v19 - v60.left < 0 )
    v22 = 0;
  v53 = v22;
  v23 = v21 - v20;
  if ( v21 - v20 < 0 )
    v23 = 0;
  v51 = v23;
  for ( i = 0LL; i < 4; ++i )
    *(float *)&v64[i] = (float)*(int *)((char *)&v60.left + i * 4);
  v25 = CRectResourceProxy::Update(*((CRectResourceProxy **)this + 7), (const struct MilRectF *)v64);
  RectangleGeometry = v25;
  if ( v25 < 0 )
  {
    v49 = 217;
    v38 = v25;
    goto LABEL_55;
  }
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                        0,
                        0,
                        v53,
                        v51,
                        (struct CRectangleGeometryProxy **)this + 11);
  if ( RectangleGeometry < 0 )
  {
    v49 = 219;
    v38 = RectangleGeometry;
    goto LABEL_55;
  }
  ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, &v60);
  v27 = 0LL;
  *((float *)this + 18) = ScalingFactorForCVI;
  v56 = (int)(float)((float)v53 * ScalingFactorForCVI);
  v57 = (int)(float)((float)v51 * ScalingFactorForCVI);
  if ( !*((_QWORD *)this + 6) )
    CDesktopManager::GetCVIFromCache(
      (int)(float)((float)v53 * ScalingFactorForCVI),
      (int)(float)((float)v51 * ScalingFactorForCVI),
      (struct CCachedVisualImageProxy **)this + 6);
  SyncedWindowData = CSecondaryWindowRepresentation::GetBrush(
                       (__int64)v5,
                       v27,
                       (volatile signed __int32 **)this + 7,
                       0LL,
                       (__int64)v48,
                       (CBaseObject **)this + 8,
                       (CBaseObject **)this + 6,
                       (CBaseObject **)this + 5);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 238;
    goto LABEL_52;
  }
  if ( *((_BYTE *)v5 + 160) )
  {
    v40 = *((float *)v5 + 92);
    v41 = 0;
    v42 = v19 - v60.left;
    *((float *)this + 18) = v40;
    if ( v42 >= 0 )
      v41 = v42;
    v43 = v21 - v60.top;
    v44 = _mm_cvtsi32_si128(v41);
    v45 = 0;
    LODWORD(v46) = _mm_cvtepi32_ps(v44).m128_u32[0];
    if ( v43 >= 0 )
      v45 = v43;
    v30 = (int)(float)(v46 * v40);
    v56 = v30;
    v29 = (int)(float)((float)v45 * v40);
    v57 = v29;
  }
  else
  {
    v28 = (CSizeResourceProxy *)*((_QWORD *)this + 8);
    v63[0] = (double)v56;
    v63[1] = (double)v57;
    SyncedWindowData = CSizeResourceProxy::Update(v28, (const struct MilSizeD *)v63);
    RectangleGeometry = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v49 = 245;
      goto LABEL_52;
    }
    CSecondaryWindowRepresentation::SnapshotIfStatic(
      v5,
      *((struct CCachedVisualImageProxy **)this + 6),
      *((struct CImageLegacyMilBrushProxy **)this + 5),
      (const struct MilPointAndSizeL *)v55);
    v29 = v57;
    v30 = v56;
  }
  SyncedWindowData = ResourceHelper::CreateRectangleGeometry(
                       v55[0],
                       v55[1],
                       v30,
                       v29,
                       (struct CRectangleGeometryProxy **)this + 11);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 256;
    goto LABEL_52;
  }
  v31 = (char *)this + 96;
  SyncedWindowData = CVisual::Create((struct CVisual **)this + 12);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 258;
    goto LABEL_52;
  }
  SyncedWindowData = CDrawGeometryInstruction::Create(
                       *((struct CBaseLegacyMilBrushProxy **)this + 5),
                       *((struct CBaseGeometryProxy **)this + 11),
                       &v59);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 263;
    goto LABEL_52;
  }
  v32 = (CVisual **)((char *)this + 80);
  SyncedWindowData = CRenderDataVisual::Create((struct CRenderDataVisual **)this + 10);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 265;
    goto LABEL_52;
  }
  CVisual::SetScale(*v32, (float)(1.0 / *((float *)this + 18)), (float)(1.0 / *((float *)this + 18)));
  CVisual::SetInterpolationMode(*v32, 1LL);
  SyncedWindowData = CRenderDataVisual::AddInstruction(*v32, v59);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 269;
    goto LABEL_52;
  }
  SyncedWindowData = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)*v32 + 64LL))(*v32);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 270;
    goto LABEL_52;
  }
  v33 = v54;
  *(_QWORD *)(*((_QWORD *)this + 4) + 128LL) = *(_QWORD *)(*(_QWORD *)v31 + 16LL);
  *(_QWORD *)(*((_QWORD *)this + 4) + 384LL) = v33;
  if ( v33 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v33 + 2);
    v5 = v58;
  }
  *((_QWORD *)v54 + 91) = *((_QWORD *)this + 4);
  SyncedWindowData = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)v31 + 32LL), *v32, 0LL, 0, 1);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 276;
    goto LABEL_52;
  }
  v34 = v54;
  CVisual::SetDirtyFlags(v54, 0x400000);
  CVisual::SetDirtyFlags(v34, 0x2000);
  SyncedWindowData = CTopLevelWindow::ShowWindow(v34, 1);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v49 = 281;
    goto LABEL_52;
  }
  SyncedWindowData = CVisual::RenderRecursive(v34);
  RectangleGeometry = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    v35 = (CBaseObject *)*((_QWORD *)this + 3);
    if ( v35 )
      CBaseObject::Release(v35);
    v36 = v54;
    *((_QWORD *)this + 3) = v54;
    _InterlockedIncrement((volatile signed __int32 *)v36 + 2);
    *((_QWORD *)a2 + 52) = this;
    *(_BYTE *)(*((_QWORD *)this + 4) + 612LL) &= ~0x10u;
    goto LABEL_39;
  }
  v49 = 282;
LABEL_52:
  v38 = SyncedWindowData;
LABEL_55:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, v49);
LABEL_40:
  if ( v54 )
    CBaseObject::Release(v54);
  if ( v59 )
    CBaseObject::Release(v59);
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)RectangleGeometry;
}
