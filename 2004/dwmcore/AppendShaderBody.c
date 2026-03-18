/*
 * XREFs of AppendShaderBody @ 0x1800B52B8
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800B5CB8 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     AppendLights @ 0x18001B490 (AppendLights.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z @ 0x1800B3F04 (-SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z.c)
 *     PerformSample @ 0x1800B593C (PerformSample.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800B6D88 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 */

__int64 __fastcall AppendShaderBody(
        _DWORD *a1,
        int a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        _BYTE *a8)
{
  __int16 v10; // di
  __int64 v11; // rax
  int appended; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // ebx
  int v17; // eax
  __int16 v18; // bp
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int128 v26; // [rsp+30h] [rbp-28h] BYREF

  v10 = a2;
  v11 = *((_QWORD *)a3 + 5);
  v26 = *a3;
  appended = CShaderLinkingGraphBuilder::AppendNode((_DWORD)a1, a2, a5, a6, v11, (__int64)&v26);
  v16 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, appended, 0x436u, 0LL);
  }
  else
  {
    v17 = *((unsigned __int16 *)a3 + 26);
    v18 = *((_WORD *)a3 + 26);
    if ( v17 == 11 )
    {
      v20 = AppendLights(v10, a1, (_DWORD *)(a4 + 128), *(_DWORD *)a3);
      v16 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x43Bu, 0LL);
      else
        *a8 = 1;
    }
    else if ( (v17 & 0xFF00) == 0x100 )
    {
      v22 = CShaderLinkingGraphBuilder::SwizzleNode((unsigned __int64)a1, v10, v15);
      v16 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x444u, 0LL);
      }
      else
      {
        v24 = PerformSample((int)a1, a4, (unsigned __int8)v18, v10, a7);
        v16 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x44Bu, 0LL);
      }
    }
  }
  return v16;
}
