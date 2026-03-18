/*
 * XREFs of ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x1800B9FC8
 * Callers:
 *     ?GetProperty@CComponentTransform2D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800B9C70 (-GetProperty@CComponentTransform2D@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CCompositionSpotLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800B9E60 (-GetProperty@CCompositionSpotLight@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800B9F70 (-GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801B5480 (-GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CColorGradientStop@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801B7C50 (-GetProperty@CColorGradientStop@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CCompositionAmbientLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801B83B0 (-GetProperty@CCompositionAmbientLight@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CCompositionDistantLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801B9170 (-GetProperty@CCompositionDistantLight@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CCompositionPointLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801BA660 (-GetProperty@CCompositionPointLight@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CCompositionSkyBoxBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801BB8B0 (-GetProperty@CCompositionSkyBoxBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CDropShadow@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801BE890 (-GetProperty@CDropShadow@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CEllipseGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801BF860 (-GetProperty@CEllipseGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CLinearGradientBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801D22D0 (-GetProperty@CLinearGradientBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CLineGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801D29E0 (-GetProperty@CLineGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CRadialGradientBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801E75B0 (-GetProperty@CRadialGradientBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801E7900 (-GetProperty@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CSpriteVectorShape@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801ECB30 (-GetProperty@CSpriteVectorShape@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CSurfaceBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801ED990 (-GetProperty@CSurfaceBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CViewBox@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801F08A0 (-GetProperty@CViewBox@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CVisualSurface@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801F1A90 (-GetProperty@CVisualSurface@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CResource::GetPropertyImpl(
        CResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        struct CExpressionValue *a3)
{
  int v3; // r9d
  __int64 v4; // r10
  int v5; // r9d
  int v6; // r9d
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_QWORD *)a2 + 1);
  if ( v3 <= 69 )
  {
    if ( v3 != 69 )
    {
      v8 = v3 - 17;
      if ( !v8 )
      {
        *(_BYTE *)a3 = *((_BYTE *)this + v4);
        *((_DWORD *)a3 + 18) = 17;
        goto LABEL_7;
      }
      v9 = v8 - 1;
      if ( !v9 )
      {
        *(_DWORD *)a3 = *(_DWORD *)((char *)this + v4);
        *((_DWORD *)a3 + 18) = 18;
        goto LABEL_7;
      }
      v10 = v9 - 17;
      if ( !v10 )
      {
        *((_DWORD *)a3 + 18) = 35;
        *(_QWORD *)a3 = *(_QWORD *)((char *)this + v4);
        goto LABEL_7;
      }
      v11 = v10 - 7;
      if ( !v11 )
      {
        *((_DWORD *)a3 + 18) = 42;
        *(_DWORD *)a3 = *(_DWORD *)((char *)this + v4);
        goto LABEL_7;
      }
      if ( v11 == 10 )
      {
        *((_DWORD *)a3 + 18) = 52;
        *(_QWORD *)a3 = *(_QWORD *)((char *)this + v4);
        *((_DWORD *)a3 + 2) = *(_DWORD *)((char *)this + v4 + 8);
        goto LABEL_7;
      }
LABEL_22:
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    }
    *((_DWORD *)a3 + 18) = 69;
LABEL_17:
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + v4);
    goto LABEL_7;
  }
  v5 = v3 - 70;
  if ( !v5 )
  {
    *((_DWORD *)a3 + 18) = 70;
    goto LABEL_17;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *((_DWORD *)a3 + 18) = 71;
    goto LABEL_17;
  }
  v7 = v6 - 33;
  if ( !v7 )
  {
    *((_DWORD *)a3 + 18) = 104;
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + v4);
    *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + v4 + 16);
    goto LABEL_7;
  }
  if ( v7 != 161 )
    goto LABEL_22;
  *((_DWORD *)a3 + 18) = 265;
  *(_OWORD *)a3 = *(_OWORD *)((char *)this + v4);
  *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + v4 + 16);
  *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + v4 + 32);
  *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + v4 + 48);
LABEL_7:
  *((_BYTE *)a3 + 76) = 1;
}
