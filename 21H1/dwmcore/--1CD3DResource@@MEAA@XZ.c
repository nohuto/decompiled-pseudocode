/*
 * XREFs of ??1CD3DResource@@MEAA@XZ @ 0x1800A2A88
 * Callers:
 *     ??1CD3DPixelShader@@MEAA@XZ @ 0x1800A273C (--1CD3DPixelShader@@MEAA@XZ.c)
 *     ??_ECD3DConstantBuffer@@MEAAPEAXI@Z @ 0x1800A2A40 (--_ECD3DConstantBuffer@@MEAAPEAXI@Z.c)
 *     ??_ECExternalD3DRenderer@@UEAAPEAXI@Z @ 0x180239A90 (--_ECExternalD3DRenderer@@UEAAPEAXI@Z.c)
 *     ??_ECD3DResource@@MEAAPEAXI@Z @ 0x180239D10 (--_ECD3DResource@@MEAAPEAXI@Z.c)
 *     ??1CD3DSurface@@MEAA@XZ @ 0x18024B520 (--1CD3DSurface@@MEAA@XZ.c)
 *     ??1CD3DTexture@@MEAA@XZ @ 0x18026E114 (--1CD3DTexture@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CD3DResource::~CD3DResource(CD3DResource *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  *(_QWORD *)this = &CD3DResource::`vftable';
  *((_QWORD *)this + 3) = &CD3DResource::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 4) + 4LL) + 32) = &CD3DResource::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 4) + 4LL);
  *(_DWORD *)((char *)this + v2 + 28) = v2 - 88;
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 13) - v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  *(_QWORD *)this = &CMILPoolResource::`vftable';
}
