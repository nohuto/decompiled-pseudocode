/*
 * XREFs of ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x1800154B4
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180012B84 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180036214 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B928C (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x1800083A0 (-GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisual.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImageProxy@@PEAVCRectResourceProxy@@PEAVCDoubleResourceProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000B2C0 (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImag.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x18000C168 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x1800151D8 (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800268C4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ??$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z @ 0x18003DB20 (--$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z.c)
 *     ??$CreateProxy@VCSizeResourceProxy@@@CCompositor@@IEAAJPEAPEAVCSizeResourceProxy@@@Z @ 0x18003E674 (--$CreateProxy@VCSizeResourceProxy@@@CCompositor@@IEAAJPEAPEAVCSizeResourceProxy@@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::GetBrush(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 **a3,
        CBaseObject **a4,
        __int64 a5,
        CBaseObject **a6,
        CBaseObject **a7,
        CBaseObject **a8)
{
  CBaseObject **v9; // rdi
  CBaseObject **v11; // r13
  volatile signed __int32 *v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  CBaseObject *v15; // rax
  int v16; // eax
  CBaseObject *v17; // rax
  int v18; // eax
  CTransitionWindowSnapshot *v19; // rcx
  CBaseObject *v20; // rax
  int v21; // eax
  int v22; // r13d
  CWindowData *v23; // rdx
  __int64 v24; // rbx
  CWindowData *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  CBaseObject *v36; // rcx
  CBaseObject *v37; // rcx
  CBaseObject *v38; // rcx
  CBaseObject *v39; // rcx
  CBaseObject *v40; // rcx
  int Brush; // eax
  CBaseObject *v43; // [rsp+40h] [rbp-59h] BYREF
  CBaseObject *v44; // [rsp+48h] [rbp-51h] BYREF
  CBaseObject *v45; // [rsp+50h] [rbp-49h] BYREF
  CBaseObject *v46; // [rsp+58h] [rbp-41h] BYREF
  CBaseObject *v47; // [rsp+60h] [rbp-39h] BYREF
  CBaseObject **v48; // [rsp+68h] [rbp-31h]
  CBaseObject **v49; // [rsp+70h] [rbp-29h]
  __int128 v50; // [rsp+78h] [rbp-21h] BYREF
  __int128 v51; // [rsp+88h] [rbp-11h] BYREF

  v47 = 0LL;
  v44 = 0LL;
  v9 = (CBaseObject **)a3;
  v45 = 0LL;
  v46 = 0LL;
  v43 = 0LL;
  v11 = a8;
  v48 = (CBaseObject **)a3;
  v49 = a8;
  if ( a3 )
  {
    v12 = *a3;
    v44 = (CBaseObject *)v12;
    if ( v12 )
    {
      _InterlockedIncrement(v12 + 2);
    }
    else
    {
      v13 = CCompositor::CreateProxy<CRectResourceProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              &v44);
      v14 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x38Fu);
        goto LABEL_61;
      }
    }
  }
  if ( a4 )
  {
    v15 = *a4;
    v45 = v15;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
    }
    else
    {
      v16 = CCompositor::CreateProxy<CRectResourceProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              &v45);
      v14 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x399u);
        goto LABEL_61;
      }
    }
  }
  if ( a6 )
  {
    v17 = *a6;
    v46 = v17;
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
    }
    else
    {
      v18 = CCompositor::CreateProxy<CSizeResourceProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              &v46);
      v14 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x3ADu);
        goto LABEL_61;
      }
    }
  }
  v19 = *(CTransitionWindowSnapshot **)(a1 + 408);
  if ( v19 )
  {
    Brush = CTransitionWindowSnapshot::GetBrush(v19, &v47, &v43, (float *)(a1 + 368));
    v14 = Brush;
    if ( Brush >= 0 )
      goto LABEL_34;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Brush, 0x3B4u);
    goto LABEL_59;
  }
  if ( a7 && (v20 = *a7) != 0LL )
  {
    v43 = *a7;
    _InterlockedIncrement((volatile signed __int32 *)v20 + 2);
  }
  else
  {
    v21 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
            (volatile signed __int32 **)&v43);
    v14 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x3BEu);
      goto LABEL_61;
    }
  }
  v50 = 0LL;
  if ( v44 )
  {
    v22 = 0;
    v50 = 0LL;
  }
  else
  {
    v22 = 1;
    v50 = _xmm;
  }
  v23 = 0LL;
  v24 = *(_QWORD *)(a1 + 48);
  v25 = *(CWindowData **)(a1 + 64);
  if ( *(_DWORD *)(a1 + 72) == 1 )
    goto LABEL_70;
  if ( *(_DWORD *)(a1 + 72) != 2 )
  {
    if ( *(_DWORD *)(a1 + 72) != 3 )
      goto LABEL_20;
    if ( !CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
    {
      v23 = *(CWindowData **)(*((_QWORD *)v25 + 53) + 80LL);
      goto LABEL_20;
    }
    goto LABEL_70;
  }
  v26 = *((_QWORD *)v25 + 52);
  if ( !v26 )
  {
LABEL_70:
    v23 = v25;
    goto LABEL_20;
  }
  v23 = *(CWindowData **)(v26 + 32);
LABEL_20:
  if ( CWindowData::IsImmersiveWindow(v23) && *(_DWORD *)(a1 + 72) == 3 )
  {
    if ( *(_QWORD *)(a1 + 376) )
      v24 = *(_QWORD *)(a1 + 376);
    goto LABEL_29;
  }
  if ( !v24 )
  {
    v27 = 0LL;
    v28 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)(a1 + 72) != 1 )
    {
      if ( *(_DWORD *)(a1 + 72) == 2 )
      {
        v29 = *(_QWORD *)(v28 + 416);
        if ( v29 )
        {
          v27 = *(_QWORD *)(v29 + 32);
LABEL_26:
          v30 = *(_QWORD *)(v27 + 384);
          if ( !v30 )
            goto LABEL_96;
          if ( (*(_BYTE *)(a1 + 40) & 4) != 0 )
            v24 = *(_QWORD *)(v30 + 536);
          else
            v24 = *(_QWORD *)(v30 + 256);
LABEL_29:
          if ( v24 )
            goto LABEL_30;
LABEL_96:
          v31 = 0LL;
          goto LABEL_31;
        }
      }
      else
      {
        if ( *(_DWORD *)(a1 + 72) != 3 )
          goto LABEL_26;
        if ( !CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
        {
          v27 = *(_QWORD *)(*(_QWORD *)(v28 + 424) + 80LL);
          goto LABEL_26;
        }
      }
    }
    v27 = v28;
    goto LABEL_26;
  }
LABEL_30:
  v31 = *(_QWORD *)(v24 + 16);
LABEL_31:
  v51 = 0LL;
  v32 = CCachedVisualImageProxy::Update(
          (__int64)v43,
          (__int64)&v50,
          (__int64)&v51,
          (__int64)v44,
          (__int64)v46,
          v31,
          v22);
  v14 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x3F1u);
    goto LABEL_61;
  }
  v35 = CSecondaryWindowRepresentation::CreateBrushForCVI(v34, v33, (__int64)v43, (__int64)v45, 0LL, &v47);
  v14 = v35;
  if ( v35 >= 0 )
  {
    v9 = v48;
    v11 = v49;
LABEL_34:
    if ( v11 )
    {
      if ( *v11 )
        CBaseObject::Release(*v11);
      v36 = v47;
      *v11 = v47;
      if ( v36 )
        _InterlockedIncrement((volatile signed __int32 *)v36 + 2);
    }
    if ( v9 )
    {
      if ( *v9 )
        CBaseObject::Release(*v9);
      v37 = v44;
      *v9 = v44;
      if ( v37 )
        _InterlockedIncrement((volatile signed __int32 *)v37 + 2);
    }
    if ( a4 )
    {
      if ( *a4 )
        CBaseObject::Release(*a4);
      v38 = v45;
      *a4 = v45;
      if ( v38 )
        _InterlockedIncrement((volatile signed __int32 *)v38 + 2);
    }
    if ( a6 )
    {
      if ( *a6 )
        CBaseObject::Release(*a6);
      v39 = v46;
      *a6 = v46;
      if ( v39 )
        _InterlockedIncrement((volatile signed __int32 *)v39 + 2);
    }
    if ( a7 )
    {
      if ( *a7 )
        CBaseObject::Release(*a7);
      v40 = v43;
      *a7 = v43;
      if ( v40 )
        _InterlockedIncrement((volatile signed __int32 *)v40 + 2);
    }
    goto LABEL_59;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x3F3u);
LABEL_59:
  if ( v47 )
    CBaseObject::Release(v47);
LABEL_61:
  if ( v44 )
    CBaseObject::Release(v44);
  if ( v45 )
    CBaseObject::Release(v45);
  if ( v46 )
    CBaseObject::Release(v46);
  if ( v43 )
    CBaseObject::Release(v43);
  return v14;
}
