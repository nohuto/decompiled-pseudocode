/*
 * XREFs of AppendLights @ 0x18001845C
 * Callers:
 *     AppendShaderBody @ 0x180033CF8 (AppendShaderBody.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180033FB0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x1800181D4 (-CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z.c)
 *     LinkLightShader @ 0x180018264 (LinkLightShader.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800355F0 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AppendLights(unsigned __int16 a1, _DWORD *a2, _DWORD *a3, int a4)
{
  struct ID3D11Module *v4; // rax
  HRESULT v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  HRESULT (__stdcall *CreateInstance)(ID3D11Module *, LPCSTR, struct ID3D11ModuleInstance **); // rbx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // esi
  unsigned __int16 v19; // si
  int NodeFromOutputArgument; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  unsigned __int16 v24; // r14
  int v25; // eax
  unsigned int v26; // ecx
  int appended; // eax
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // r14d
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
    v8 = D3DLoadModule(&unk_1802D2A60, 0xEE3DuLL, &ppModule);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x404u, 0LL);
      return v10;
    }
    v4 = ppModule;
  }
  *(_QWORD *)&v38 = 0LL;
  CreateInstance = v4->lpVtbl->CreateInstance;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
  v12 = ((__int64 (__fastcall *)(struct ID3D11Module *, const char *, __int128 *))CreateInstance)(
          ppModule,
          &byte_18032C47F,
          &v38);
  v10 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x40Au, 0LL);
    goto LABEL_30;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v38 + 24LL))(v38, 1LL, 1LL);
  v10 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x410u, 0LL);
    goto LABEL_30;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a2 + 32LL))(*(_QWORD *)a2, v38);
  v10 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x412u, 0LL);
LABEL_30:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
    return v10;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
  v18 = a2[20];
  a2[20] = v18 + 1;
  v19 = v18 | 0x600;
  if ( a4 < 0 )
  {
    *((_QWORD *)&v38 + 1) = &v40;
    *(_QWORD *)&v38 = 1LL;
    v39 = v38;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 (_DWORD)a2,
                 v19,
                 (unsigned int)&byte_18032C47F,
                 (_DWORD)ppModule,
                 (__int64)"UnPremultiplyForLighting",
                 (__int64)&v39);
    v10 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, appended, 0x41Cu, 0LL);
    }
    else
    {
      *((_QWORD *)&v38 + 1) = v37;
      *(_QWORD *)&v38 = 1LL;
      v37[0] = v19;
      v39 = v38;
      v30 = LinkLightShader((__int64)a2, a3, (int)ppModule, (unsigned __int64 *)&v39, 0, &v38);
      v10 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x429u, 0LL);
      }
      else
      {
        *((_QWORD *)&v39 + 1) = &v38;
        *(_QWORD *)&v39 = 2LL;
        WORD1(v38) = v40;
        v32 = CShaderLinkingGraphBuilder::AppendNode(
                (_DWORD)a2,
                v40,
                (unsigned int)&byte_18032C47F,
                (_DWORD)ppModule,
                (__int64)"PostLightingLib",
                (__int64)&v39);
        v10 = v32;
        if ( v32 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x430u, 0LL);
      }
    }
  }
  else
  {
    NodeFromOutputArgument = CShaderLinkingGraphBuilder::CreateNodeFromOutputArgument(
                               (unsigned __int64)a2,
                               v19,
                               v40,
                               a4);
    v10 = NodeFromOutputArgument;
    if ( NodeFromOutputArgument < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, NodeFromOutputArgument, 0x436u, 0LL);
      return v10;
    }
    if ( *a3 == -1 )
    {
      v34 = a2[20];
      v39 = 0uLL;
      a2[20] = v34 + 1;
      v24 = v34 | 0x600;
      v35 = CShaderLinkingGraphBuilder::AppendNode(
              (_DWORD)a2,
              v24,
              (unsigned int)&byte_18032C47F,
              (_DWORD)ppModule,
              (__int64)"NoLightAccumulator",
              (__int64)&v39);
      v10 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x44Bu, 0LL);
        return v10;
      }
    }
    else
    {
      v37[0] = v40;
      *((_QWORD *)&v39 + 1) = v37;
      *(_QWORD *)&v39 = 2LL;
      v37[1] = v19;
      v22 = LinkLightShader((__int64)a2, a3, (int)ppModule, (unsigned __int64 *)&v39, 1, &v38);
      v10 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x445u, 0LL);
        return v10;
      }
      v24 = v38;
    }
    *((_QWORD *)&v39 + 1) = &v38;
    *(_QWORD *)&v39 = 2LL;
    LOWORD(v38) = v24;
    WORD1(v38) = v19;
    v25 = CShaderLinkingGraphBuilder::AppendNode(
            (_DWORD)a2,
            v40,
            (unsigned int)&byte_18032C47F,
            (_DWORD)ppModule,
            (__int64)"PostSceneLightingEffectLib",
            (__int64)&v39);
    v10 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x452u, 0LL);
  }
  return v10;
}
