/*
 * XREFs of LoadShaderBody @ 0x180053934
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180054470 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x180053AA8 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C502C (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7124 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LoadShaderBody(
        __int64 a1,
        __int64 a2,
        struct ID3D11Module *a3,
        unsigned int a4,
        __int64 a5,
        struct ID3D11Module **a6)
{
  _QWORD *v7; // rsi
  int FragmentsModuleNoRef; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  HRESULT v12; // eax
  unsigned int v13; // ecx
  struct ID3D11Module *v14; // rbx
  HRESULT (__stdcall *CreateInstance)(ID3D11Module *, LPCSTR, struct ID3D11ModuleInstance **); // rdi
  int v16; // eax
  unsigned int v17; // ecx
  struct ID3D11Module *v18; // rcx
  struct ID3D11Module *v20; // rdi
  unsigned int v21; // [rsp+20h] [rbp-10h]
  struct ID3D11Module *ppModule; // [rsp+50h] [rbp+20h] BYREF
  struct ID3D11Module *v23; // [rsp+60h] [rbp+30h] BYREF

  v23 = a3;
  ppModule = 0LL;
  v7 = (_QWORD *)a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 84);
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(a1, &v23);
  v11 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, FragmentsModuleNoRef, 0x333u, 0LL);
    goto LABEL_8;
  }
  if ( !*(_QWORD *)(a2 + 16) )
  {
    v20 = v23;
    if ( ppModule != v23 )
    {
      if ( v23 )
        ((void (__fastcall *)(struct ID3D11Module *))v23->lpVtbl->AddRef)(v23);
      v23 = ppModule;
      ppModule = v20;
      Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v23);
    }
    goto LABEL_7;
  }
  v23 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&ppModule);
  v12 = D3DLoadModule(*(LPCVOID *)(a2 + 24), *(_QWORD *)(a2 + 16), &ppModule);
  v11 = v12;
  if ( v12 < 0 )
  {
    v21 = 826;
    goto LABEL_16;
  }
  v14 = ppModule;
  CreateInstance = ppModule->lpVtbl->CreateInstance;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  v16 = ((__int64 (__fastcall *)(struct ID3D11Module *, __int64, struct ID3D11Module **))CreateInstance)(v14, a5, &v23);
  v11 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x33Bu, 0LL);
LABEL_17:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
    goto LABEL_8;
  }
  ((void (__fastcall *)(struct ID3D11Module *, _QWORD, _QWORD, _QWORD))v23->lpVtbl->CreateInstance)(v23, 0LL, 0LL, a4);
  ((void (__fastcall *)(struct ID3D11Module *, __int64, __int64))v23->lpVtbl->CreateInstance)(v23, 1LL, 1LL);
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Module *))(*(_QWORD *)*v7 + 32LL))(*v7, v23);
  v11 = v12;
  if ( v12 < 0 )
  {
    v21 = 848;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, v21, 0LL);
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
LABEL_7:
  v18 = ppModule;
  ppModule = 0LL;
  *a6 = v18;
LABEL_8:
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&ppModule);
  return v11;
}
