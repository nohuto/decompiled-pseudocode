/*
 * XREFs of ?GetD3D11SamplerDesc@SamplerMode@@SA?AUD3D11_SAMPLER_DESC@@U1@@Z @ 0x1800D2604
 * Callers:
 *     ?GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x180047A54 (-GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 * Callees:
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x1800D2674 (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 */

__int64 __fastcall SamplerMode::GetD3D11SamplerDesc(int *a1, _BYTE *a2)
{
  int *v2; // r8
  int v3; // eax
  int v4; // eax
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // r10

  v2 = a1;
  v3 = 21;
  if ( !*a2 )
    v3 = 0;
  *a1 = v3;
  LOBYTE(a1) = a2[1];
  v4 = ExtendMode::ToD3D11TextureAddressMode(a1, a2, v2);
  LOBYTE(v6) = *(_BYTE *)(v5 + 2);
  *(_DWORD *)(v7 + 4) = v4;
  v9 = ExtendMode::ToD3D11TextureAddressMode(v6, v8, v7);
  *(_DWORD *)(v10 + 8) = v9;
  result = v10;
  *(_QWORD *)(v10 + 12) = 3LL;
  *(_DWORD *)(v10 + 20) = 1;
  *(_QWORD *)(v10 + 24) = 8LL;
  *(_QWORD *)(v10 + 36) = v12;
  *(_DWORD *)(v10 + 32) = v12;
  *(_DWORD *)(v10 + 44) = v12;
  *(_DWORD *)(v10 + 48) = 2139095039;
  return result;
}
