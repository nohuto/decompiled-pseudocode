/*
 * XREFs of ApplyTexcoordExtendMode @ 0x180033E18
 * Callers:
 *     ApplyTexcoordTransformations @ 0x180034940 (ApplyTexcoordTransformations.c)
 * Callees:
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800355F0 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall ApplyTexcoordExtendMode(
        __int64 a1,
        unsigned __int16 a2,
        __int16 a3,
        char a4,
        char a5,
        __int64 a6,
        unsigned __int16 *a7)
{
  unsigned __int16 *v7; // rsi
  unsigned int v8; // ebx
  unsigned __int16 v9; // di
  char *v11; // rax
  int appended; // eax
  unsigned int v13; // ecx
  int v14; // edi
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int16 v16; // [rsp+68h] [rbp+20h] BYREF
  __int16 v17; // [rsp+6Ah] [rbp+22h]

  v7 = a7;
  v8 = 0;
  v9 = a2;
  if ( !a4 )
    goto LABEL_2;
  if ( a7 )
  {
    v14 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = v14 + 1;
    v9 = v14 | 0x600;
  }
  v16 = a2;
  v17 = a3 | 0x300;
  v15[1] = &v16;
  v15[0] = 2LL;
  if ( a4 == 1 )
  {
    v11 = "BorderEffectClamp";
  }
  else if ( a4 == 2 )
  {
    v11 = "BorderEffectWrapBilinear";
    if ( !a5 )
      v11 = "BorderEffectWrap";
  }
  else
  {
    v11 = a4 == 3 ? "BorderEffectMirror" : 0LL;
  }
  appended = CShaderLinkingGraphBuilder::AppendNode(
               a1,
               v9,
               (unsigned int)&byte_18032C47F,
               a6,
               (__int64)v11,
               (__int64)v15);
  v8 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, appended, 0x1FAu, 0LL);
  }
  else
  {
LABEL_2:
    if ( v7 )
      *v7 = v9;
  }
  return v8;
}
