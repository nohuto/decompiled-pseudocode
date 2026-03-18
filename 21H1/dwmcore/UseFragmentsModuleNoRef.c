/*
 * XREFs of UseFragmentsModuleNoRef @ 0x18009F75C
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x18009E448 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x18009F2A8 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UseFragmentsModuleNoRef(__int64 a1, unsigned int a2, char a3, struct ID3D11Module **a4)
{
  _QWORD *v5; // r14
  int FragmentsModuleNoRef; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  struct ID3D11Module *v11; // rsi
  HRESULT (__stdcall *CreateInstance)(ID3D11Module *, LPCSTR, struct ID3D11ModuleInstance **); // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD, __int64); // rax
  int v16; // eax
  __int64 v17; // rcx
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // [rsp+20h] [rbp-20h]
  struct ID3D11Module *v22; // [rsp+30h] [rbp-10h] BYREF
  __int64 v23; // [rsp+70h] [rbp+30h] BYREF

  v23 = 0LL;
  v5 = (_QWORD *)a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 84);
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(a1, &v22);
  v10 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    v21 = 32;
    goto LABEL_20;
  }
  v11 = v22;
  CreateInstance = v22->lpVtbl->CreateInstance;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  v13 = ((__int64 (__fastcall *)(struct ID3D11Module *, const unsigned __int16 *, __int64 *))CreateInstance)(
          v11,
          &word_1802CFB96,
          &v23);
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x21u, 0LL);
    goto LABEL_9;
  }
  v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v23 + 40LL);
  if ( a3 )
  {
    v19 = v15(v23, 16LL, 0LL, 1LL);
    v10 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x26u, 0LL);
      goto LABEL_9;
    }
    FragmentsModuleNoRef = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v23 + 56LL))(
                             v23,
                             0LL,
                             0LL,
                             1LL);
    v10 = FragmentsModuleNoRef;
    if ( FragmentsModuleNoRef < 0 )
    {
      v21 = 39;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, FragmentsModuleNoRef, v21, 0LL);
      goto LABEL_9;
    }
  }
  else
  {
    v16 = v15(v23, 0LL, 0LL, 4LL);
    v10 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x2Cu, 0LL);
      goto LABEL_9;
    }
    FragmentsModuleNoRef = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v23 + 56LL))(
                             v23,
                             0LL,
                             0LL,
                             4LL);
    v10 = FragmentsModuleNoRef;
    if ( FragmentsModuleNoRef < 0 )
    {
      v21 = 45;
      goto LABEL_20;
    }
  }
  FragmentsModuleNoRef = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v23 + 24LL))(
                           v23,
                           0LL,
                           0LL,
                           a2);
  v10 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    v21 = 55;
    goto LABEL_20;
  }
  FragmentsModuleNoRef = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v23 + 24LL))(v23, 2LL, 2LL);
  v10 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    v21 = 61;
    goto LABEL_20;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v5 + 32LL))(*v5, v23);
  *a4 = v11;
LABEL_9:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  return v10;
}
