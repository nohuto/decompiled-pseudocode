/*
 * XREFs of AppendColorConversion @ 0x1800B5510
 * Callers:
 *     PerformSample @ 0x1800B593C (PerformSample.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x180267E48 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800B6D88 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 */

__int64 __fastcall AppendColorConversion(int a1, int a2, unsigned __int16 a3, __int64 a4, char a5)
{
  unsigned int v5; // ebx
  unsigned __int16 v6; // r10
  int appended; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 *v15; // [rsp+38h] [rbp-8h]
  unsigned __int16 v16; // [rsp+60h] [rbp+20h] BYREF

  v16 = a3;
  v5 = 0;
  v6 = a3;
  if ( *(_DWORD *)(a4 + 8) > 1u )
  {
    v14 = 1LL;
    v15 = &v16;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 a1,
                 a3,
                 (unsigned int)&word_1802CD8A6,
                 a2,
                 *(_QWORD *)a4,
                 (__int64)&v14);
    v5 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, appended, 0x251u, 0LL);
      return v5;
    }
    v6 = v16;
  }
  if ( a5 )
  {
    v14 = 1LL;
    v15 = &v16;
    v12 = CShaderLinkingGraphBuilder::AppendNode(
            a1,
            v6,
            (unsigned int)&word_1802CD8A6,
            a2,
            (__int64)"BoostSDRLuminance",
            (__int64)&v14);
    v5 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x256u, 0LL);
  }
  return v5;
}
