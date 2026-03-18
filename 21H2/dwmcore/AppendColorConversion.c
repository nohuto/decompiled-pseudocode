/*
 * XREFs of AppendColorConversion @ 0x180034AAC
 * Callers:
 *     AppendColorModifications @ 0x1800349D8 (AppendColorModifications.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1802AC260 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800355F0 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall AppendColorConversion(int a1, int a2, unsigned __int16 a3, __int64 a4, char a5)
{
  unsigned int v5; // ebx
  unsigned __int16 v6; // r10
  int appended; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int16 *v15; // [rsp+38h] [rbp-10h]
  unsigned __int16 v16; // [rsp+60h] [rbp+18h] BYREF

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
                 (unsigned int)&byte_18032C47F,
                 a2,
                 *(_QWORD *)a4,
                 (__int64)&v14);
    v5 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, appended, 0x264u, 0LL);
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
            (unsigned int)&byte_18032C47F,
            a2,
            (__int64)"BoostSDRLuminance",
            (__int64)&v14);
    v5 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x269u, 0LL);
  }
  return v5;
}
