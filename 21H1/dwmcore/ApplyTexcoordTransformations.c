/*
 * XREFs of ApplyTexcoordTransformations @ 0x18009EE98
 * Callers:
 *     PerformSample @ 0x18009E0CC (PerformSample.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18009D420 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ApplyTexcoordExtendMode @ 0x18009EF38 (ApplyTexcoordExtendMode.c)
 */

__int64 __fastcall ApplyTexcoordTransformations(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int16 a4, void *a5)
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
  __int128 v25; // [rsp+40h] [rbp-28h] BYREF
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
    v13 = ApplyTexcoordExtendMode((_DWORD)a1, a4, a3, v11, v10[20], (__int64)a5, 0LL);
    v15 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x236u, 0LL);
  }
  else
  {
    v17 = (__int64)a5;
    v18 = ApplyTexcoordExtendMode((_DWORD)a1, a4, a3, v11, v10[20], (__int64)a5, (__int64)&v26);
    v15 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x23Cu, 0LL);
    }
    else
    {
      LOBYTE(v20) = v10[17];
      v21 = ApplyTexcoordExtendMode((_DWORD)a1, a4, a3, v20, v10[20], v17, (__int64)&v27);
      v15 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x23Du, 0LL);
      }
      else
      {
        *(_QWORD *)&v25 = 2LL;
        *((_QWORD *)&v25 + 1) = &v26;
        appended = CShaderLinkingGraphBuilder::AppendNode(
                     a1,
                     a4,
                     (__int64)&word_1802CFB96,
                     v17,
                     (__int64)"BorderEffectCombine",
                     &v25);
        v15 = appended;
        if ( appended < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, appended, 0x23Fu, 0LL);
      }
    }
  }
  return v15;
}
