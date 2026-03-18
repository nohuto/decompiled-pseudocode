/*
 * XREFs of ColorSpaceTransformInitIdentityTransform @ 0x1C0061490
 * Callers:
 *     ColorSpaceTransformConvert @ 0x1C000B74C (ColorSpaceTransformConvert.c)
 *     ?ConvertToMatrix_V2@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z @ 0x1C0060E84 (-ConvertToMatrix_V2@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z.c)
 *     ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C013340C (-GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0138940 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ?InitializeIdentityLut@@YAJPEAUD3DDDI_DXGI_RGB@@IMM@Z @ 0x1C0060F80 (-InitializeIdentityLut@@YAJPEAUD3DDDI_DXGI_RGB@@IMM@Z.c)
 *     ?InitializeIdentityLut_RGB256x3x16@@YAJPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C0060FC4 (-InitializeIdentityLut_RGB256x3x16@@YAJPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?InitializeIdentityMatrix@@YAJPEAMII@Z @ 0x1C0061010 (-InitializeIdentityMatrix@@YAJPEAMII@Z.c)
 */

__int64 __fastcall ColorSpaceTransformInitIdentityTransform(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rdx
  __int64 v4; // rbx
  unsigned int v5; // edx
  struct D3DDDI_DXGI_RGB *v6; // rcx
  float v7; // xmm3_4
  __int64 v8; // r9
  __int64 v9; // rdx
  float *v10; // r9
  __int64 v11; // rcx

  v1 = 0;
  if ( *(_DWORD *)a1 == 2 )
    return (unsigned int)InitializeIdentityLut_RGB256x3x16(*(struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 **)(a1 + 16));
  if ( *(_DWORD *)a1 == 3 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    v5 = 1025;
    *(_DWORD *)v11 = 1065353216;
    *(_DWORD *)(v11 + 4) = 1065353216;
    *(_QWORD *)(v11 + 8) = 1065353216LL;
    *(_QWORD *)(v11 + 16) = 0LL;
    v6 = (struct D3DDDI_DXGI_RGB *)(v11 + 24);
    v7 = FLOAT_1_0;
LABEL_9:
    InitializeIdentityLut(v6, v5, 0.0, v7);
    return v1;
  }
  v2 = (unsigned int)(*(_DWORD *)a1 - 4);
  if ( *(_DWORD *)a1 != 4 )
  {
    if ( *(_DWORD *)a1 != 5 )
      return 0LL;
    v4 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(v4 + 49196) = 2;
    *(_DWORD *)(v4 + 49156) = 2;
    *(_DWORD *)v4 = 2;
    InitializeIdentityMatrix((float *)(v4 + 49160), v2, 3u);
    InitializeIdentityLut((struct D3DDDI_DXGI_RGB *)(v4 + 4), 0x1000u, 0.0, 1.0);
    v6 = (struct D3DDDI_DXGI_RGB *)(v4 + 49200);
    v7 = FLOAT_1_0;
    goto LABEL_9;
  }
  v8 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(v8 + 48) = 1065353216;
  InitializeIdentityLut((struct D3DDDI_DXGI_RGB *)(v8 + 52), 0x1000u, 0.0, 1.0);
  InitializeIdentityMatrix(v10, v9, 4u);
  return v1;
}
