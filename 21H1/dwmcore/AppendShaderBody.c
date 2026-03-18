/*
 * XREFs of AppendShaderBody @ 0x18009F064
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x18009E448 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     AppendLights @ 0x18001C0B0 (AppendLights.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18009D420 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     PerformSample @ 0x18009E0CC (PerformSample.c)
 *     ?SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z @ 0x1800A0A00 (-SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z.c)
 */

__int64 __fastcall AppendShaderBody(
        _QWORD *a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        _BYTE *a8)
{
  __int64 v11; // rax
  int appended; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  int v16; // eax
  __int16 v17; // bp
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int128 v25; // [rsp+30h] [rbp-28h] BYREF

  v11 = *(_QWORD *)(a3 + 40);
  v25 = *(_OWORD *)a3;
  appended = CShaderLinkingGraphBuilder::AppendNode(a1, a2, a5, a6, v11, &v25);
  v15 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, appended, 0x436u, 0LL);
  }
  else
  {
    v16 = *(unsigned __int16 *)(a3 + 52);
    v17 = *(_WORD *)(a3 + 52);
    if ( v16 == 11 )
    {
      v19 = AppendLights(a2, a1, (_DWORD *)(a4 + 128), *(_DWORD *)a3);
      v15 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x43Bu, 0LL);
      else
        *a8 = 1;
    }
    else if ( (v16 & 0xFF00) == 0x100 )
    {
      v21 = CShaderLinkingGraphBuilder::SwizzleNode(a1, a2);
      v15 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x444u, 0LL);
      }
      else
      {
        v23 = PerformSample((__int64)a1, a4, (unsigned __int8)v17, a2, a2, a7);
        v15 = v23;
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x44Bu, 0LL);
      }
    }
  }
  return v15;
}
