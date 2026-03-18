/*
 * XREFs of ??1CD3DPixelShader@@MEAA@XZ @ 0x1800B2AAC
 * Callers:
 *     ??_ECD3DPixelShader@@MEAAPEAXI@Z @ 0x1800B2A70 (--_ECD3DPixelShader@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DPixelShader::~CD3DPixelShader(CD3DPixelShader *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  *(_QWORD *)this = &CD3DPixelShader::`vftable';
  *((_QWORD *)this + 3) = &CD3DPixelShader::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 4) + 4LL) + 32) = &CD3DConstantBuffer::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 4) + 4LL);
  *(_DWORD *)((char *)this + v2 + 28) = v2 - 104;
  v3 = *((_QWORD *)this + 14);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 14) = 0LL;
  }
  CD3DResource::~CD3DResource(this);
}
