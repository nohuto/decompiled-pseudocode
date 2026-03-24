/*
 * XREFs of AppendLights @ 0x180019D30
 * Callers:
 *     AppendShaderBody @ 0x18004702C (AppendShaderBody.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800479BC (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     LinkLightShader @ 0x180019F44 (LinkLightShader.c)
 *     ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x18001A194 (-CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180048BD4 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB404 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppendLights(unsigned __int16 a1, _DWORD *a2, _DWORD *a3, int a4)
{
  struct ID3D11Module *v4; // rax
  HRESULT (__stdcall *CreateInstance)(ID3D11Module *, LPCSTR, struct ID3D11ModuleInstance **); // rbx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // esi
  unsigned __int16 v17; // si
  int NodeFromOutputArgument; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  unsigned __int16 v22; // r15
  int v23; // eax
  unsigned int v24; // ecx
  HRESULT v26; // eax
  unsigned int v27; // ecx
  int appended; // eax
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // r15d
  int v35; // eax
  unsigned int v36; // ecx
  _WORD v37[8]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v38; // [rsp+40h] [rbp-20h] BYREF
  __int128 v39; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v40; // [rsp+90h] [rbp+30h] BYREF

  v40 = a1;
  v4 = ppModule;
  if ( !ppModule )
  {
    v26 = D3DLoadModule(&unk_18028B9C0, 0xEE3DuLL, &ppModule);
    v11 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x3D3u, 0LL);
      return v11;
    }
    v4 = ppModule;
  }
  *(_QWORD *)&v38 = 0LL;
  CreateInstance = v4->lpVtbl->CreateInstance;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
  v9 = ((__int64 (__fastcall *)(struct ID3D11Module *, const unsigned __int16 *, __int128 *))CreateInstance)(
         ppModule,
         &word_1802CE406,
         &v38);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x3D9u, 0LL);
    goto LABEL_30;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v38 + 24LL))(v38, 1LL, 1LL);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x3DFu, 0LL);
    goto LABEL_30;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a2 + 32LL))(*(_QWORD *)a2, v38);
  v11 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x3E1u, 0LL);
LABEL_30:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
    return v11;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
  v16 = a2[20];
  a2[20] = v16 + 1;
  v17 = v16 | 0x600;
  if ( a4 < 0 )
  {
    *((_QWORD *)&v38 + 1) = &v40;
    *(_QWORD *)&v38 = 1LL;
    v39 = v38;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 (_DWORD)a2,
                 v17,
                 (unsigned int)&word_1802CE406,
                 (_DWORD)ppModule,
                 (__int64)"UnPremultiplyForLighting",
                 (__int64)&v39);
    v11 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, appended, 0x3EBu, 0LL);
    }
    else
    {
      *((_QWORD *)&v38 + 1) = v37;
      *(_QWORD *)&v38 = 1LL;
      v37[0] = v17;
      v39 = v38;
      v30 = LinkLightShader((_DWORD)a2, (_DWORD)a3, (_DWORD)ppModule, (unsigned int)&v39, 0, (__int64)&v38);
      v11 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x3F8u, 0LL);
      }
      else
      {
        *((_QWORD *)&v39 + 1) = &v38;
        *(_QWORD *)&v39 = 2LL;
        WORD1(v38) = v40;
        v32 = CShaderLinkingGraphBuilder::AppendNode(
                (_DWORD)a2,
                v40,
                (unsigned int)&word_1802CE406,
                (_DWORD)ppModule,
                (__int64)"PostLightingLib",
                (__int64)&v39);
        v11 = v32;
        if ( v32 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x3FFu, 0LL);
      }
    }
  }
  else
  {
    NodeFromOutputArgument = CShaderLinkingGraphBuilder::CreateNodeFromOutputArgument(a2, v17, v40, (unsigned int)a4);
    v11 = NodeFromOutputArgument;
    if ( NodeFromOutputArgument < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, NodeFromOutputArgument, 0x405u, 0LL);
      return v11;
    }
    if ( *a3 == -1 )
    {
      v34 = a2[20];
      v39 = 0LL;
      a2[20] = v34 + 1;
      v22 = v34 | 0x600;
      v35 = CShaderLinkingGraphBuilder::AppendNode(
              (_DWORD)a2,
              v22,
              (unsigned int)&word_1802CE406,
              (_DWORD)ppModule,
              (__int64)"NoLightAccumulator",
              (__int64)&v39);
      v11 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x41Au, 0LL);
        return v11;
      }
    }
    else
    {
      v37[0] = v40;
      *((_QWORD *)&v39 + 1) = v37;
      *(_QWORD *)&v39 = 2LL;
      v37[1] = v17;
      v20 = LinkLightShader((_DWORD)a2, (_DWORD)a3, (_DWORD)ppModule, (unsigned int)&v39, 1, (__int64)&v38);
      v11 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x414u, 0LL);
        return v11;
      }
      v22 = v38;
    }
    *((_QWORD *)&v39 + 1) = &v38;
    *(_QWORD *)&v39 = 2LL;
    LOWORD(v38) = v22;
    WORD1(v38) = v17;
    v23 = CShaderLinkingGraphBuilder::AppendNode(
            (_DWORD)a2,
            v40,
            (unsigned int)&word_1802CE406,
            (_DWORD)ppModule,
            (__int64)"PostSceneLightingEffectLib",
            (__int64)&v39);
    v11 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x421u, 0LL);
  }
  return v11;
}
