/*
 * XREFs of PerformSample @ 0x18009E0CC
 * Callers:
 *     PrepareSamplers @ 0x18009EA1C (PrepareSamplers.c)
 *     AppendShaderBody @ 0x18009F064 (AppendShaderBody.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18009D420 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x18009EB20 (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 *     AppendColorConversion @ 0x18009EE3C (AppendColorConversion.c)
 *     ApplyTexcoordTransformations @ 0x18009EE98 (ApplyTexcoordTransformations.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall PerformSample(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        void *a6)
{
  void *v6; // r15
  unsigned __int16 v7; // r13
  __int64 v8; // rdi
  bool v12; // zf
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  int v17; // eax
  __int64 v18; // rcx
  unsigned __int8 v19; // si
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int128 v25; // xmm0
  int appended; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  char v32; // al
  __int64 v33; // xmm1_8
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  unsigned __int16 v38; // [rsp+30h] [rbp-59h] BYREF
  __int128 v39; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int16 v40; // [rsp+50h] [rbp-39h]
  unsigned __int16 v41; // [rsp+54h] [rbp-35h] BYREF
  unsigned __int16 v42; // [rsp+56h] [rbp-33h]
  unsigned __int16 v43; // [rsp+58h] [rbp-31h]
  _BYTE v44[24]; // [rsp+60h] [rbp-29h] BYREF
  char v45; // [rsp+78h] [rbp-11h]
  unsigned __int8 v46; // [rsp+79h] [rbp-10h]
  char v47; // [rsp+7Ah] [rbp-Fh]

  v6 = a6;
  v7 = a3 | 0x300;
  v8 = a2 + 32LL * a3;
  v12 = *(_BYTE *)(v8 + 22) == 0;
  v40 = a3 | 0x400;
  if ( v12 )
  {
    v13 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = v13 + 1;
    v38 = v13 | 0x600;
    v14 = CShaderLinkingGraphBuilder::CopyNode(a1, (unsigned __int16)v13 | 0x600u, a4);
    v16 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x27Fu, 0LL);
      return v16;
    }
    v17 = ApplyTexcoordTransformations(a1, a2, a3, v38, v6);
    v16 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x286u, 0LL);
      return v16;
    }
    v19 = a3 + 48;
    if ( *(_BYTE *)(a2 + 156) )
    {
      qmemcpy(v44, "SampleCubeTexture", 17);
      *(_WORD *)&v44[17] = v19;
    }
    else
    {
      if ( !*(_BYTE *)(v8 + 21) )
      {
        if ( !*(_BYTE *)(v8 + 20) )
        {
          qmemcpy(v44, "SampleTexture", 13);
          *(_WORD *)&v44[13] = v19;
          goto LABEL_8;
        }
        if ( *(_BYTE *)(v8 + 17) == 2 )
        {
          if ( *(_BYTE *)(v8 + 16) == 2 )
          {
            v25 = *(_OWORD *)"SampleWrappedTexture";
            *(_DWORD *)&v44[16] = *(_DWORD *)"ture";
            *(_WORD *)&v44[20] = v19;
            goto LABEL_17;
          }
          v25 = *(_OWORD *)"SampleWrappedTextureVOnly";
          v32 = aSamplewrappedt[24];
          v33 = *(_QWORD *)"tureVOnly";
        }
        else
        {
          v25 = *(_OWORD *)"SampleWrappedTextureUOnly";
          v32 = aSamplewrappedt_0[24];
          v33 = *(_QWORD *)"tureUOnly";
        }
        *(_QWORD *)&v44[16] = v33;
        v45 = v32;
        v46 = v19;
        v47 = 0;
LABEL_17:
        v41 = v38;
        v43 = v40;
        *((_QWORD *)&v39 + 1) = &v41;
        *(_QWORD *)&v39 = 3LL;
        *(_OWORD *)v44 = v25;
        v42 = v7;
        appended = CShaderLinkingGraphBuilder::AppendNode(
                     (_QWORD *)a1,
                     a5,
                     (__int64)&word_1802CFB96,
                     (__int64)v6,
                     (__int64)v44,
                     &v39);
        v16 = appended;
        if ( appended < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, appended, 0x2ACu, 0LL);
          return v16;
        }
        goto LABEL_9;
      }
      qmemcpy(v44, "MultiSampleTexture", 18);
      *(_WORD *)&v44[18] = v19;
    }
LABEL_8:
    *((_QWORD *)&v39 + 1) = &v38;
    *(_QWORD *)&v39 = 1LL;
    v20 = CShaderLinkingGraphBuilder::AppendNode(
            (_QWORD *)a1,
            a5,
            (__int64)&word_1802CFB96,
            (__int64)v6,
            (__int64)v44,
            &v39);
    v16 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x2B0u, 0LL);
      return v16;
    }
LABEL_9:
    if ( *(_BYTE *)(v8 + 23)
      && (*((_QWORD *)&v39 + 1) = &a5,
          *(_QWORD *)&v39 = 1LL,
          v28 = CShaderLinkingGraphBuilder::AppendNode(
                  (_QWORD *)a1,
                  a5,
                  (__int64)&word_1802CFB96,
                  (__int64)v6,
                  (__int64)"IgnoreAlpha",
                  &v39),
          v16 = v28,
          v28 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x2B5u, 0LL);
    }
    else if ( *(_BYTE *)(v8 + 24)
           && (*((_QWORD *)&v39 + 1) = &a5,
               *(_QWORD *)&v39 = 1LL,
               v34 = CShaderLinkingGraphBuilder::AppendNode(
                       (_QWORD *)a1,
                       a5,
                       (__int64)&word_1802CFB96,
                       (__int64)v6,
                       (__int64)"UnBoostSDRLuminance",
                       &v39),
               v16 = v34,
               v34 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x2BBu, 0LL);
    }
    else
    {
      v39 = *(_OWORD *)v8;
      v22 = AppendColorConversion(a1, (_DWORD)v6, a5, (unsigned int)&v39, 0);
      v16 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x2BEu, 0LL);
      }
      else if ( *(_BYTE *)(v8 + 18) )
      {
        if ( !*(_BYTE *)(v8 + 16) )
        {
          v42 = v38;
          *(_QWORD *)&v39 = 3LL;
          *((_QWORD *)&v39 + 1) = &v41;
          v41 = a5;
          v43 = v7;
          v36 = CShaderLinkingGraphBuilder::AppendNode(
                  (_QWORD *)a1,
                  a5,
                  (__int64)&word_1802CFB96,
                  (__int64)v6,
                  (__int64)"ClampTransparent",
                  &v39);
          v16 = v36;
          if ( v36 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x2C8u, 0LL);
        }
      }
    }
    return v16;
  }
  v30 = CShaderLinkingGraphBuilder::CopyNode(a1, a5, v7);
  v16 = v30;
  if ( v30 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x275u, 0LL);
  return v16;
}
