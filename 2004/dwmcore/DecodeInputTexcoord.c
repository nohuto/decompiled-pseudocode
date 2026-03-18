/*
 * XREFs of DecodeInputTexcoord @ 0x1800B556C
 * Callers:
 *     PopulateSamplerArguments @ 0x1800B5610 (PopulateSamplerArguments.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z @ 0x1800B3F04 (-SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800B6D88 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 */

__int64 __fastcall DecodeInputTexcoord(unsigned __int64 a1, __int64 a2, __int16 a3, int a4)
{
  unsigned __int16 v4; // ax
  bool v5; // zf
  int appended; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  int *v15; // [rsp+38h] [rbp-8h]
  int v16; // [rsp+58h] [rbp+18h] BYREF
  __int16 v17; // [rsp+60h] [rbp+20h] BYREF

  v4 = a3 | 0x100;
  v5 = *(_BYTE *)(a2 + 156) == 0;
  v17 = a3 | 0x100;
  if ( v5 )
  {
    if ( *(_BYTE *)(a2 + 154) )
    {
      v14 = 1LL;
      v15 = (int *)&v17;
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   a1,
                   v4,
                   (unsigned int)&word_1802CD8A6,
                   a4,
                   (__int64)"FlattenTexcoords",
                   (__int64)&v14);
      v8 = appended;
      if ( appended < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, appended, 0x204u, 0LL);
    }
    else
    {
      v10 = CShaderLinkingGraphBuilder::SwizzleNode(a1, v4, 256LL);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x209u, 0LL);
    }
  }
  else
  {
    v14 = 2LL;
    v15 = &v16;
    v16 = 16843008;
    v12 = CShaderLinkingGraphBuilder::AppendNode(
            a1,
            v4,
            (unsigned int)&word_1802CD8A6,
            a4,
            (__int64)"GetCubeTexcoord",
            (__int64)&v14);
    v8 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1FDu, 0LL);
  }
  return v8;
}
