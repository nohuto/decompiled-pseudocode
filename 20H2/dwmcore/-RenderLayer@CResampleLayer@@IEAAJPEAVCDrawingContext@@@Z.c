/*
 * XREFs of ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18019224C
 * Callers:
 *     ?RestoreState@CResampleLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180192E10 (-RestoreState@CResampleLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18004DDB4 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x18018420C (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x180192010 (-RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAE.c)
 *     ?RenderSeparableUpsample@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x180192534 (-RenderSeparableUpsample@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTarget.c)
 *     ?RenderSharpeningUpsample@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1801928A0 (-RenderSharpeningUpsample@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTarge.c)
 *     ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x180192A08 (-RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Rendering_SharpMagShader@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180192D8C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Rendering_SharpMagShader@@@details@wil@@Q.c)
 */

__int64 __fastcall CResampleLayer::RenderLayer(CResampleLayer *this, struct CDrawingContext *a2)
{
  _QWORD *v2; // rdi
  char *v5; // rcx
  __int64 v6; // rcx
  struct CSurfaceShaderComposer *v7; // r15
  __int64 v8; // rax
  unsigned int v9; // ebx
  int v10; // r9d
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned int v14; // ebx
  struct ID3D11RenderTargetView *v15; // r14
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  __int64 v19; // rcx
  char v20; // al
  char *v21; // rcx
  char v22; // al
  char *v23; // rcx
  char v24; // al
  char *v25; // rcx
  char v26; // r9
  unsigned int v28; // [rsp+20h] [rbp-58h]
  D3D11_VIEWPORT v29; // [rsp+30h] [rbp-48h] BYREF

  v2 = (_QWORD *)*((_QWORD *)a2 + 4);
  v5 = (char *)v2 + *(int *)(v2[1] + 8LL) + 8;
  v7 = *(struct CSurfaceShaderComposer **)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5) + 1512);
  v8 = 0LL;
  memset(&v29, 0, sizeof(v29));
  if ( !v7 )
  {
    v9 = -2005270524;
    v28 = 258;
LABEL_3:
    v10 = v9;
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v10, v28, 0LL);
    return v9;
  }
  do
  {
    *(&v29.TopLeftX + v8) = (float)*((int *)this + v8 + 36);
    ++v8;
  }
  while ( v8 < 4 );
  LODWORD(v29.MaxDepth) = (_DWORD)FLOAT_1_0;
  v11 = CDrawingContext::FlushD2D(a2);
  v9 = v11;
  if ( v11 < 0 )
  {
    v28 = 269;
    goto LABEL_26;
  }
  if ( g_LockAndReadLayer )
  {
    v12 = *(int *)(v2[1] + 16LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)((char *)v2 + v12 + 8) + 24LL))(
      (__int64)v2 + v12 + 8,
      ((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 56LL))(v2);
  v14 = *((_DWORD *)this + 30);
  v15 = (struct ID3D11RenderTargetView *)v13;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Rendering_SharpMagShader>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Rendering_SharpMagShader>::GetImpl'::`2'::impl,
    0LL);
  v6 = CCommonRegistryData::m_dwResampleModeOverride;
  if ( CCommonRegistryData::m_dwResampleModeOverride )
    v14 = CCommonRegistryData::m_dwResampleModeOverride;
  v16 = v14 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 != 1 )
        {
          v9 = -2147024809;
          v28 = 321;
          goto LABEL_3;
        }
        v19 = (__int64)v2 + *(int *)(v2[1] + 8LL) + 8;
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
        v11 = CResampleLayer::RenderSharpeningUpsample(this, v7, v15, v20, &v29);
        v9 = v11;
        if ( v11 < 0 )
        {
          v28 = 317;
LABEL_26:
          v10 = v11;
          goto LABEL_27;
        }
      }
      else
      {
        v21 = (char *)v2 + *(int *)(v2[1] + 8LL) + 8;
        v22 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v21 + 24LL))(v21);
        v11 = CResampleLayer::RenderSeparableUpsample(this, v7, v15, v22, &v29);
        v9 = v11;
        if ( v11 < 0 )
        {
          v28 = 310;
          goto LABEL_26;
        }
      }
    }
    else
    {
      v23 = (char *)v2 + *(int *)(v2[1] + 8LL) + 8;
      v24 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v23 + 24LL))(v23);
      v11 = CResampleLayer::RenderXBR(this, v7, v15, v24, &v29);
      v9 = v11;
      if ( v11 < 0 )
      {
        v28 = 303;
        goto LABEL_26;
      }
    }
  }
  else
  {
    v25 = (char *)v2 + *(int *)(v2[1] + 8LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v25 + 24LL))(v25);
    v11 = CResampleLayer::RenderLanczos(this, v7, v15, v26, &v29);
    v9 = v11;
    if ( v11 < 0 )
    {
      v28 = 296;
      goto LABEL_26;
    }
  }
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture(a2);
  return v9;
}
