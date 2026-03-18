/*
 * XREFs of ApplyTexcoordTransformations @ 0x1800B5388
 * Callers:
 *     PerformSample @ 0x1800B593C (PerformSample.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ApplyTexcoordExtendMode @ 0x1800B5428 (ApplyTexcoordExtendMode.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800B6D88 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 */

__int64 __fastcall ApplyTexcoordTransformations(int a1, __int64 a2, unsigned int a3, unsigned __int16 a4, void *a5)
{
  __int64 v7; // rsi
  _BYTE *v10; // rsi
  int v11; // r9d
  char v12; // dl
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v17; // r12
  int v18; // eax
  __int64 v19; // rcx
  int v20; // r9d
  int v21; // eax
  __int64 v22; // rcx
  int appended; // eax
  __int64 v24; // rcx
  _QWORD v25[2]; // [rsp+40h] [rbp-28h] BYREF
  char v26; // [rsp+80h] [rbp+18h] BYREF
  char v27; // [rsp+82h] [rbp+1Ah] BYREF

  v7 = a3;
  v10 = (_BYTE *)(a2 + 32 * v7);
  v11 = (unsigned __int8)v10[16];
  if ( (_BYTE)v11 == v10[17] )
  {
    v12 = 0;
    if ( !*(_BYTE *)(a2 + 156) )
      v12 = v10[16];
    LOBYTE(v11) = v12;
    v13 = ApplyTexcoordExtendMode(a1, a4, a3, v11, v10[20], (__int64)a5, 0LL);
    v15 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x236u, 0LL);
  }
  else
  {
    v17 = (__int64)a5;
    v18 = ApplyTexcoordExtendMode(a1, a4, a3, v11, v10[20], (__int64)a5, (__int64)&v26);
    v15 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x23Cu, 0LL);
    }
    else
    {
      LOBYTE(v20) = v10[17];
      v21 = ApplyTexcoordExtendMode(a1, a4, a3, v20, v10[20], v17, (__int64)&v27);
      v15 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x23Du, 0LL);
      }
      else
      {
        v25[0] = 2LL;
        v25[1] = &v26;
        appended = CShaderLinkingGraphBuilder::AppendNode(
                     a1,
                     a4,
                     (unsigned int)&word_1802CD8A6,
                     v17,
                     (__int64)"BorderEffectCombine",
                     (__int64)v25);
        v15 = appended;
        if ( appended < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, appended, 0x23Fu, 0LL);
      }
    }
  }
  return v15;
}
