/*
 * XREFs of ?GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x18005FF44
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18005F170 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x180245974 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180266060 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD3D11SamplerDesc@SamplerMode@@SA?AUD3D11_SAMPLER_DESC@@U1@@Z @ 0x1800DA024 (-GetD3D11SamplerDesc@SamplerMode@@SA-AUD3D11_SAMPLER_DESC@@U1@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::GetD3DSamplerStateNoRef(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdi
  int v7; // eax
  __int64 D3D11SamplerDesc; // rax
  __int64 v9; // r11
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  __int16 v14; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int8 v15; // [rsp+32h] [rbp-A6h]
  _BYTE v16[56]; // [rsp+40h] [rbp-98h] BYREF
  _OWORD v17[3]; // [rsp+78h] [rbp-60h] BYREF
  int v18; // [rsp+A8h] [rbp-30h]

  v3 = 0;
  v5 = a1 + 8 * (a2[2] + 4 * (a2[1] + 4LL * *a2));
  if ( *(_QWORD *)(v5 + 1808) )
    goto LABEL_2;
  v14 = *(_WORD *)a2;
  if ( !HIBYTE(v14) || (v7 = 37120, !a2[2]) )
    v7 = 37632;
  if ( *(_DWORD *)(a1 + 624) < v7 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0xE86u, 0LL);
    return v3;
  }
  v14 = *(_WORD *)a2;
  v15 = a2[2];
  D3D11SamplerDesc = SamplerMode::GetD3D11SamplerDesc(v16, &v14);
  v10 = *(__int64 **)(v9 + 592);
  v17[0] = *(_OWORD *)D3D11SamplerDesc;
  v17[1] = *(_OWORD *)(D3D11SamplerDesc + 16);
  v17[2] = *(_OWORD *)(D3D11SamplerDesc + 32);
  v18 = *(_DWORD *)(D3D11SamplerDesc + 48);
  v11 = *v10;
  *(_QWORD *)(v5 + 1808) = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, _OWORD *, __int64))(v11 + 184))(v10, v17, v5 + 1808);
  v3 = v12;
  if ( v12 >= 0 )
LABEL_2:
    *a3 = *(_QWORD *)(v5 + 1808);
  else
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xE8Bu, 0LL);
  return v3;
}
