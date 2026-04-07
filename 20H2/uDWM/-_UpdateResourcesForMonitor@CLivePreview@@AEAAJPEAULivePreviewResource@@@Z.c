/*
 * XREFs of ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x180083ECC
 * Callers:
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x180083DEC (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x180084750 (-s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Freeze@CCachedVisualImageProxy@@QEAAJXZ @ 0x18000D348 (-Freeze@CCachedVisualImageProxy@@QEAAJXZ.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18000E124 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x180010178 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001FE50 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x180020EC0 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x1800266A0 (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003C858 (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x180040084 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x180084384 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 */

__int64 __fastcall CLivePreview::_UpdateResourcesForMonitor(CLivePreview *this, struct LivePreviewResource *a2)
{
  unsigned int v3; // ebx
  unsigned int v5; // esi
  CLivePreview *v6; // rcx
  const struct CTopLevelWindow *v7; // rdx
  int updated; // eax
  char v9; // al
  int v10; // r9d
  int v11; // edx
  int v12; // r8d
  int RectangleGeometry; // eax
  __int64 *v14; // rsi
  int v15; // eax
  __int64 i; // rax
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 *v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // r9d
  int v25; // edx
  int v26; // r8d
  int v27; // eax
  __int64 *v28; // rsi
  int v29; // eax
  __int64 j; // rax
  __int64 v31; // rax
  int v32; // eax
  int v33; // eax
  __int64 *v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  int v37; // eax
  int GeometryFromHRGN; // eax
  struct CRectangleGeometryProxy **v40; // [rsp+20h] [rbp-69h]
  struct CRectangleGeometryProxy **v41; // [rsp+20h] [rbp-69h]
  __int64 v42; // [rsp+50h] [rbp-39h]
  __int64 v43; // [rsp+68h] [rbp-21h]
  __int64 v44; // [rsp+68h] [rbp-21h]
  __int128 v45; // [rsp+70h] [rbp-19h] BYREF
  __int128 v46; // [rsp+80h] [rbp-9h] BYREF
  __int128 v47; // [rsp+90h] [rbp+7h] BYREF

  v3 = 0;
  SetRectEmpty((LPRECT)a2);
  SetRectEmpty((LPRECT)((char *)a2 + 40));
  SetRectEmpty((LPRECT)a2 + 5);
  *((_QWORD *)a2 + 12) = CreateRectRgn(0, 0, 0, 0);
  v5 = 0;
  if ( !*((_DWORD *)this + 82) )
  {
LABEL_5:
    *((_BYTE *)a2 + 128) = !IsRectEmpty((const RECT *)a2);
    v9 = !IsRectEmpty((const RECT *)((char *)a2 + 40));
    *((_BYTE *)a2 + 129) = v9;
    if ( *((_BYTE *)a2 + 128) )
    {
      v10 = 0;
      v11 = *((_DWORD *)a2 + 1);
      if ( *((_DWORD *)a2 + 3) - v11 >= 0 )
        v10 = *((_DWORD *)a2 + 3) - v11;
      v12 = 0;
      if ( *((_DWORD *)a2 + 2) - *(_DWORD *)a2 >= 0 )
        v12 = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
      RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                            *(_DWORD *)a2,
                            v11,
                            v12,
                            v10,
                            (struct CRectangleGeometryProxy **)a2 + 2);
      v3 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x509u);
        return v3;
      }
      v14 = (__int64 *)((char *)a2 + 24);
      if ( !*((_QWORD *)a2 + 3) )
      {
        v15 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                (__int64 *)a2 + 3);
        v3 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x50Du);
          return v3;
        }
      }
      for ( i = 0LL; i < 4; ++i )
        *((float *)&v45 + i) = (float)*((int *)a2 + i);
      v17 = *((_QWORD *)this + 62);
      v46 = 0LL;
      v18 = CCachedVisualImageProxy::Update(*v14, (__int64)&v45, (__int64)&v46, 0LL, 0LL, *(_QWORD *)(v17 + 16), 0);
      v3 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x51Cu);
        return v3;
      }
      v19 = CCachedVisualImageProxy::Freeze((CCachedVisualImageProxy *)*v14);
      v3 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x51Eu);
        return v3;
      }
      v20 = (__int64 *)((char *)a2 + 32);
      v21 = *((_QWORD *)a2 + 4);
      if ( !v21 )
      {
        v22 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                v20);
        v3 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x522u);
          return v3;
        }
        v21 = *((_QWORD *)a2 + 4);
      }
      v43 = *v14;
      v40 = (struct CRectangleGeometryProxy **)*((_QWORD *)this + 59);
      v47 = _xmm;
      v45 = _xmm;
      v23 = CImageLegacyMilBrushProxy::Update(
              v21,
              (__int64)v20,
              (__int64)&v47,
              (__int64)&v45,
              (__int64)v40,
              1u,
              1,
              0LL,
              0LL,
              0,
              v42,
              0,
              0,
              v43);
      v3 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x53Du);
        return v3;
      }
      v9 = *((_BYTE *)a2 + 129);
    }
    if ( v9 )
    {
      v24 = 0;
      v25 = *((_DWORD *)a2 + 11);
      if ( *((_DWORD *)a2 + 13) - v25 >= 0 )
        v24 = *((_DWORD *)a2 + 13) - v25;
      v26 = 0;
      if ( *((_DWORD *)a2 + 12) - *((_DWORD *)a2 + 10) >= 0 )
        v26 = *((_DWORD *)a2 + 12) - *((_DWORD *)a2 + 10);
      v27 = ResourceHelper::CreateRectangleGeometry(
              *((_DWORD *)a2 + 10),
              v25,
              v26,
              v24,
              (struct CRectangleGeometryProxy **)a2 + 7);
      v3 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x547u);
        return v3;
      }
      v28 = (__int64 *)((char *)a2 + 64);
      if ( !*((_QWORD *)a2 + 8) )
      {
        v29 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                (__int64 *)a2 + 8);
        v3 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0x54Bu);
          return v3;
        }
      }
      for ( j = 0LL; j < 4; ++j )
        *((float *)&v45 + j) = (float)*((int *)a2 + j + 10);
      v31 = *((_QWORD *)this + 64);
      v47 = 0LL;
      v32 = CCachedVisualImageProxy::Update(*v28, (__int64)&v45, (__int64)&v47, 0LL, 0LL, *(_QWORD *)(v31 + 16), 0);
      v3 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x55Au);
        return v3;
      }
      v33 = CCachedVisualImageProxy::Freeze((CCachedVisualImageProxy *)*v28);
      v3 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0x55Cu);
        return v3;
      }
      v34 = (__int64 *)((char *)a2 + 72);
      v35 = *((_QWORD *)a2 + 9);
      if ( !v35 )
      {
        v36 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                v34);
        v3 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x560u);
          return v3;
        }
        v35 = *((_QWORD *)a2 + 9);
      }
      v44 = *v28;
      v41 = (struct CRectangleGeometryProxy **)*((_QWORD *)this + 60);
      v46 = _xmm;
      v45 = _xmm;
      v37 = CImageLegacyMilBrushProxy::Update(
              v35,
              (__int64)v34,
              (__int64)&v46,
              (__int64)&v45,
              (__int64)v41,
              1u,
              1,
              0LL,
              0LL,
              0,
              v42,
              0,
              0,
              v44);
      v3 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, 0x57Bu);
        return v3;
      }
      GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(
                           *((HRGN *)a2 + 12),
                           (struct CRgnGeometryProxy **)a2 + 13);
      v3 = GeometryFromHRGN;
      if ( GeometryFromHRGN < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, GeometryFromHRGN, 0x57Du);
        return v3;
      }
    }
    ReleaseGDIObject<HRGN__ *>((void **)a2 + 12);
    return v3;
  }
  while ( 1 )
  {
    v6 = *(CLivePreview **)(*((_QWORD *)this + 38) + 40LL * v5);
    v7 = (const struct CTopLevelWindow *)*((_QWORD *)v6 + 48);
    if ( v7 )
    {
      updated = CLivePreview::_UpdateResourcesForMonitorHelper(v6, v7, a2);
      v3 = updated;
      if ( updated < 0 )
        break;
    }
    if ( ++v5 >= *((_DWORD *)this + 82) )
      goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x4FAu);
  return v3;
}
