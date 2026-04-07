/*
 * XREFs of ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x1800512DC
 * Callers:
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x180051260 (-Initialize@CLivePreview@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180026600 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180027550 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCDoubleResourceProxy@@@CCompositor@@IEAAJPEAPEAVCDoubleResourceProxy@@@Z @ 0x180051754 (--$CreateProxy@VCDoubleResourceProxy@@@CCompositor@@IEAAJPEAPEAVCDoubleResourceProxy@@@Z.c)
 */

__int64 __fastcall CLivePreview::_EnsureResources(struct CVisual **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v2 = CCompositor::CreateProxy<CDoubleResourceProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         this + 59);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x657u);
  }
  else
  {
    v4 = CCompositor::CreateProxy<CDoubleResourceProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           this + 60);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x658u);
    }
    else
    {
      v5 = CVisual::Create(this + 61);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x65Au);
      }
      else
      {
        v6 = CVisual::Create(this + 62);
        v3 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x65Bu);
        }
        else
        {
          v7 = CVisual::Create(this + 63);
          v3 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x65Cu);
          }
          else
          {
            v8 = CRenderDataVisual::Create(this + 64);
            v3 = v8;
            if ( v8 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x65Du);
          }
        }
      }
    }
  }
  return v3;
}
