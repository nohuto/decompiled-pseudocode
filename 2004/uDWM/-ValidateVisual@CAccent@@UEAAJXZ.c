/*
 * XREFs of ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18000F810
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18000215C (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18000B92C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18000D5A0 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18000F970 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x180010174 (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18002B198 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x180045220 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x180093C44 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 */

__int64 __fastcall CAccent::ValidateVisual(CAccent *this)
{
  int v2; // ecx
  int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // edi
  int updated; // eax
  int v10; // eax
  int v11; // eax

  v2 = *((_DWORD *)this + 70);
  if ( (unsigned int)(v2 - 2) <= 3 && *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) + 601LL) )
  {
    v3 = *((_DWORD *)this + 20);
    if ( v2 != 4 )
    {
      if ( (v3 & 0x10000) != 0 && v2 == 3 )
      {
        if ( *((_QWORD *)this + 42) )
          CAccent::_UpdateAccentBlurBehind(this);
        goto LABEL_8;
      }
      if ( v2 != 5
        || !*((_QWORD *)this + 44)
        || (v3 & 0x1000) == 0
        || (updated = CAccent::UpdateAcrylicBackgroundBrush(this), v7 = updated, updated >= 0) )
      {
LABEL_8:
        *((_DWORD *)this + 20) &= 0xFFFFCFFF;
LABEL_9:
        v4 = *((_DWORD *)this + 20);
        goto LABEL_10;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x36Fu);
LABEL_34:
      CAccent::_CleanupNonStaticsResources(this);
      return v7;
    }
    if ( (v3 & 0x1000) != 0 && *((_QWORD *)this + 43) )
    {
      v11 = CAccent::_UpdateAcrylicBlurBehind(this);
      v7 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x362u);
        goto LABEL_34;
      }
      v3 = *((_DWORD *)this + 20);
    }
    v4 = v3 & 0xFFFFCFFF;
    *((_DWORD *)this + 20) = v4;
  }
  else
  {
    v4 = *((_DWORD *)this + 20);
    if ( (v4 & 0x1000) != 0 )
    {
      v10 = CAccent::_UpdateResources(this);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x354u);
        goto LABEL_34;
      }
      *((_DWORD *)this + 20) &= ~0x1000u;
      v4 = *((_DWORD *)this + 20);
    }
    if ( (v4 & 0x2000) != 0 )
    {
      CAccent::_UpdateTransitionGradient(this);
      *((_DWORD *)this + 20) &= ~0x2000u;
      goto LABEL_9;
    }
  }
LABEL_10:
  v5 = v4 & 0xFFFEBFFF;
  *((_DWORD *)this + 20) = v5;
  if ( (v5 & 0x8000) != 0 )
  {
    if ( (*((_DWORD *)this + 71) & 0x210) != 0 )
    {
      CVisualProxy::SetClip(*((CVisualProxy **)this + 2), *((struct CBaseGeometryProxy **)this + 52));
      v5 = *((_DWORD *)this + 20);
    }
    *((_DWORD *)this + 20) = v5 & 0xFFFF7FFF;
  }
  v6 = CRenderDataVisual::ValidateVisual(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x37Fu);
    goto LABEL_34;
  }
  return v7;
}
