/*
 * XREFs of ?CreateResource@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x1800A2C00
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x1800A2B0C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@Q.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x1800A2C50 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 */

__int64 __fastcall CRenderingTechnique::CreateResource(
        CRenderingTechnique *this,
        struct CD3DDevice *a2,
        struct CD3DConstantBuffer **a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v4 = CD3DConstantBuffer::Create(a2, *((_DWORD *)this + 14) + *((_DWORD *)this + 62), (enum D3D11_USAGE)a3, 0LL, a3);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x222u, 0LL);
  }
  else
  {
    *((_BYTE *)this + 252) = 1;
    return 0;
  }
  return v6;
}
