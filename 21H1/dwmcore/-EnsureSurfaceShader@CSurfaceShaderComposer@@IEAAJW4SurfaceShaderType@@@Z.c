/*
 * XREFs of ?EnsureSurfaceShader@CSurfaceShaderComposer@@IEAAJW4SurfaceShaderType@@@Z @ 0x180249170
 * Callers:
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x180249218 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreatePixelShader@CD3DDevice@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800A2968 (-CreatePixelShader@CD3DDevice@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CSurfaceShaderComposer::EnsureSurfaceShader(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  struct ID3D11PixelShader **v3; // rbp
  __int64 v4; // rdi
  CD3DDevice *v5; // rsi
  struct ID3D11ClassLinkage *v6; // r9
  int PixelShader; // eax
  __int64 v8; // rcx

  v2 = 0;
  v3 = (struct ID3D11PixelShader **)(a1 + 8LL * a2);
  v4 = 3LL * a2;
  if ( !*v3 )
  {
    v5 = *(CD3DDevice **)(a1 + 120);
    if ( *((_DWORD *)v5 + 156) >= *((_DWORD *)&unk_180346D30 + 6 * a2 + 5) )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 8LL * a2));
      PixelShader = CD3DDevice::CreatePixelShader(
                      v5,
                      *((const void **)&unk_180346D30 + v4 + 1),
                      *((_QWORD *)&unk_180346D30 + v4),
                      v6,
                      v3);
      v2 = PixelShader;
      if ( PixelShader < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, PixelShader, 0x1F1u, 0LL);
    }
  }
  return v2;
}
