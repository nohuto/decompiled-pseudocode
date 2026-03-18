/*
 * XREFs of PopulateSamplerArguments @ 0x1800B5610
 * Callers:
 *     PrepareSamplers @ 0x1800B628C (PrepareSamplers.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     DecodeInputTexcoord @ 0x1800B556C (DecodeInputTexcoord.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800B6D88 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

__int64 __fastcall PopulateSamplerArguments(unsigned __int64 a1, __int64 a2, unsigned int a3, _BYTE *a4, __int64 a5)
{
  __int16 v6; // r14
  int v8; // edx
  unsigned __int16 v9; // cx
  _BYTE *v10; // rdi
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  char v16; // al
  int appended; // eax
  __int64 v18; // rcx
  char v19; // al
  int v20; // eax
  __int64 v21; // rcx
  unsigned __int16 v22; // [rsp+30h] [rbp-40h]
  __int128 v23; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v24[17]; // [rsp+50h] [rbp-20h] BYREF
  char v25; // [rsp+61h] [rbp-Fh]
  char v26; // [rsp+62h] [rbp-Eh]

  v6 = a3;
  v8 = (unsigned __int16)a3;
  v9 = a3 | 0x400;
  v10 = (_BYTE *)(a2 + 32LL * a3);
  v12 = 0;
  v22 = a3 | 0x400;
  if ( !a4[2] )
    goto LABEL_20;
  if ( v10[22] || v10[18] )
  {
    v16 = a4[4];
    qmemcpy(v24, "GetSamplerData", 14);
    *(_WORD *)&v24[14] = (unsigned __int8)(v16 + 48);
    v23 = 0LL;
    LOWORD(v8) = a3 | 0x300;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 a1,
                 v8,
                 (unsigned int)&word_1802CD8A6,
                 a5,
                 (__int64)v24,
                 (__int64)&v23);
    v12 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, appended, 0x2E8u, 0LL);
      return v12;
    }
    v9 = v22;
  }
  if ( (v10[20] || v10[19])
    && (v19 = a4[4],
        v26 = 0,
        v25 = v19 + 48,
        qmemcpy(v24, "GetSamplerDataExt", sizeof(v24)),
        v23 = 0LL,
        v20 = CShaderLinkingGraphBuilder::AppendNode(
                a1,
                v9,
                (unsigned int)&word_1802CD8A6,
                a5,
                (__int64)v24,
                (__int64)&v23),
        v12 = v20,
        v20 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x2EEu, 0LL);
  }
  else
  {
LABEL_20:
    if ( *a4 )
    {
      if ( !v10[22] )
      {
        v13 = DecodeInputTexcoord(a1, a2, v6, a5);
        v12 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x2F7u, 0LL);
      }
    }
  }
  return v12;
}
