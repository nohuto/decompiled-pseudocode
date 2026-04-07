/*
 * XREFs of ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180002B30
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180001C80 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000E988 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCTransformGroupProxy@@@CCompositor@@IEAAJPEAPEAVCTransformGroupProxy@@@Z @ 0x180008BB4 (--$CreateProxy@VCTransformGroupProxy@@@CCompositor@@IEAAJPEAPEAVCTransformGroupProxy@@@Z.c)
 *     ??$CreateProxy@VCTranslateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCTranslateTransformProxy@@@Z @ 0x180008C68 (--$CreateProxy@VCTranslateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCTranslateTransformProxy@@@Z.c)
 *     ??$CreateProxy@VCRotateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCRotateTransformProxy@@@Z @ 0x180008D1C (--$CreateProxy@VCRotateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCRotateTransformProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x1800230D0 (--$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800242F0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180027550 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B070 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003CA1C (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ??$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x18003D93C (--$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_EnsureDCompResources(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  volatile signed __int32 *v2; // rsi
  struct CVisual **v4; // r14
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int inserted; // eax
  void *v16; // [rsp+28h] [rbp-10h]

  v1 = 0;
  v2 = 0LL;
  if ( !*((_QWORD *)this + 83) )
  {
    v6 = CCompositor::CreateProxy<CEffectGroupProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
    v1 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x59Eu, v16);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 84) )
  {
    v7 = CCompositor::CreateProxy<CScaleTransformProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x5A3u, v16);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 85) )
  {
    v8 = CCompositor::CreateProxy<CTranslateTransformProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
    v1 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x5A8u, v16);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 86) )
  {
    v9 = CCompositor::CreateProxy<CRotateTransformProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
    v1 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x5ADu, v16);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 87) )
  {
    v10 = CCompositor::CreateProxy<CTransformGroupProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
    v1 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x5B2u, v16);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 88) )
  {
    v11 = CCompositor::CreateProxy<CRectangleGeometryProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
    v1 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x5B7u, v16);
      return v1;
    }
  }
  v4 = (struct CVisual **)((char *)this + 720);
  if ( !*((_QWORD *)this + 90) )
  {
    v12 = CRenderDataVisual::Create((struct CRenderDataVisual **)this + 90);
    v1 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x5BCu, v16);
      return v1;
    }
    if ( *((_BYTE *)this + 967) )
    {
      v2 = (volatile signed __int32 *)**((_QWORD **)this + 7);
      if ( v2 )
      {
        _InterlockedIncrement(v2 + 2);
        v14 = VisualCollection::Remove((CAnimatedTransitionVisual *)((char *)this + 40), (struct CVisual *)v2);
        v1 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x5C4u, v16);
          goto LABEL_24;
        }
        inserted = VisualCollection::InsertRelative(
                     (struct CVisual *)((char *)*v4 + 32),
                     (struct CVisual *)v2,
                     0LL,
                     0,
                     1);
        v1 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x5C5u, v16);
LABEL_24:
          if ( v2 )
            CBaseObject::Release((CBaseObject *)v2);
          return v1;
        }
      }
    }
    v13 = VisualCollection::InsertRelative((CAnimatedTransitionVisual *)((char *)this + 40), *v4, 0LL, 0, 1);
    v1 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x5C9u, v16);
    goto LABEL_24;
  }
  return v1;
}
