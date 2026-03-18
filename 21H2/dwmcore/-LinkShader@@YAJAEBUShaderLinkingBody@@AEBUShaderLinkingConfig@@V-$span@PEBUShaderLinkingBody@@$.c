/*
 * XREFs of ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180033FB0
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180039660 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x18003C310 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     AppendLights @ 0x18001845C (AppendLights.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x180032E6C (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     InitializeShaderLinkingInput @ 0x180032F4C (InitializeShaderLinkingInput.c)
 *     UseFragmentsModuleNoRef @ 0x1800332E4 (UseFragmentsModuleNoRef.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x180033474 (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x180033748 (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     GetExpectedVertexShaderDesc @ 0x1800337F8 (GetExpectedVertexShaderDesc.c)
 *     HasWhiteNoise @ 0x180033940 (HasWhiteNoise.c)
 *     LoadShaderBody @ 0x180033A60 (LoadShaderBody.c)
 *     AppendShaderBody @ 0x180033CF8 (AppendShaderBody.c)
 *     DiscoverSamplers @ 0x180033F00 (DiscoverSamplers.c)
 *     ?DoesSamplerRequireConstantBufferData@@YA_NAEBUShaderLinkingSamplerDesc@@@Z @ 0x180034598 (-DoesSamplerRequireConstantBufferData@@YA_NAEBUShaderLinkingSamplerDesc@@@Z.c)
 *     PrepareSamplers @ 0x1800345B8 (PrepareSamplers.c)
 *     ??A?$span@USamplerPresenceEntry@@$0?0@gsl@@QEBAAEAUSamplerPresenceEntry@@_K@Z @ 0x1800346C8 (--A-$span@USamplerPresenceEntry@@$0-0@gsl@@QEBAAEAUSamplerPresenceEntry@@_K@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800355F0 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ??$_Find@W4ShaderLinkingArgument@@@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@1@AEBW4ShaderLinkingArgument@@_K@Z @ 0x180037108 (--$_Find@W4ShaderLinkingArgument@@@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShade.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D38B0 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1801ED7C0 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 */

__int64 __fastcall LinkShader(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, struct ID3D10Blob **a5)
{
  __int64 v7; // rdi
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 *v11; // rax
  __int64 *v12; // rbx
  __int64 *v13; // r12
  unsigned int v14; // eax
  int v15; // r15d
  unsigned int v16; // r12d
  unsigned int i; // r14d
  bool v18; // al
  __int64 v19; // rdx
  bool v20; // al
  __int64 *v21; // r12
  char v22; // r15
  __int64 *j; // rbx
  _DWORD *v24; // r12
  __int64 ExpectedVertexShaderDesc; // rax
  VertexShaderDesc *v26; // r8
  __int64 v27; // rdx
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // ebx
  int v31; // eax
  int v32; // edx
  unsigned __int64 v33; // rcx
  __int64 v34; // r14
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  gsl::details *v37; // rcx
  int v38; // eax
  gsl::details *v39; // rcx
  unsigned int v40; // r15d
  __int64 v41; // rsi
  __int64 v42; // r8
  int v43; // eax
  unsigned int v44; // ecx
  int v45; // eax
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v46; // rdx
  unsigned int v47; // ecx
  int v48; // eax
  unsigned int v49; // ecx
  __int64 v50; // r8
  int v52; // ecx
  unsigned int v53; // eax
  int v54; // eax
  unsigned int v55; // ecx
  unsigned int v56; // edi
  unsigned int v57; // eax
  __int64 v58; // r12
  __int64 v59; // r8
  int ShaderBody; // eax
  unsigned int v61; // ecx
  int v62; // eax
  int appended; // eax
  __int64 v64; // rax
  int v65; // eax
  unsigned int v66; // ecx
  int v67; // eax
  unsigned int v68; // ecx
  int v69; // eax
  unsigned int v70; // ecx
  int ConversionShader; // eax
  unsigned int v72; // ecx
  int v73; // eax
  unsigned int v74; // ecx
  int v75; // eax
  unsigned int v76; // ecx
  bool v77; // zf
  char *v78; // rax
  int v79; // eax
  unsigned int v80; // ecx
  __int64 v81; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v82[8]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v83; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v84; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v85; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v86; // [rsp+60h] [rbp-A0h]
  __int64 v87; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v88; // [rsp+70h] [rbp-90h]
  _OWORD *v89; // [rsp+78h] [rbp-88h]
  _QWORD v90[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v91[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v92; // [rsp+A0h] [rbp-60h]
  struct ID3D10Blob **v93; // [rsp+A8h] [rbp-58h]
  struct ID3D11Linker *ppLinker[2]; // [rsp+B0h] [rbp-50h] BYREF
  char v95[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v96; // [rsp+C8h] [rbp-38h]
  __int128 v97; // [rsp+110h] [rbp+10h]
  __int128 v98; // [rsp+120h] [rbp+20h]
  __int128 v99; // [rsp+130h] [rbp+30h]
  __int128 v100; // [rsp+140h] [rbp+40h]
  const char *v101; // [rsp+150h] [rbp+50h] BYREF
  __int128 v102; // [rsp+160h] [rbp+60h]
  __int128 v103; // [rsp+170h] [rbp+70h]
  __int128 v104; // [rsp+180h] [rbp+80h]
  __int128 v105; // [rsp+190h] [rbp+90h] BYREF
  __int128 v106; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v107; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v108; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v109; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v110; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v111; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v112; // [rsp+200h] [rbp+100h] BYREF
  _OWORD v113[2]; // [rsp+210h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v114; // [rsp+230h] [rbp+130h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v115; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v116[2]; // [rsp+250h] [rbp+150h] BYREF
  char v117[16]; // [rsp+260h] [rbp+160h] BYREF
  __int64 *v118; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v119[12]; // [rsp+278h] [rbp+178h] BYREF
  char v120; // [rsp+284h] [rbp+184h]
  char v121; // [rsp+285h] [rbp+185h]

  v89 = a3;
  v93 = a5;
  v116[0] = a4;
  v7 = a2;
  v87 = a2;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  v85 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SHADER_LINK_Start,
      v8,
      1u,
      &v114);
  v9 = *a3;
  v90[1] = v113;
  v10 = 0;
  v83 = *(_DWORD *)(a1 + 48);
  v11 = (__int64 *)a3[1];
  memset(v113, 0, sizeof(v113));
  v90[0] = 4LL;
  v12 = v11;
  v13 = &v11[v9];
  v88 = v11;
  v92 = v9;
  v118 = v13;
  if ( v11 != v13 )
  {
    v56 = v83;
    do
    {
      v56 += *(_DWORD *)(*v12 + 48);
      v57 = DiscoverSamplers((_QWORD *)*v12, (__int64)v90);
      if ( v10 <= v57 )
        v10 = v57;
      ++v12;
    }
    while ( v12 != v13 );
    v83 = v56;
    v7 = v87;
  }
  v14 = DiscoverSamplers((_QWORD *)a1, (__int64)v90);
  if ( v10 <= v14 )
    v10 = v14;
  if ( *(_BYTE *)(v7 + 156) && v10 <= 2 )
    v10 = 2;
  v15 = 0;
  v16 = v10;
  for ( i = 0; i < 4; ++i )
  {
    gsl::span<SamplerPresenceEntry,-1>::operator[](v90, i);
    v18 = DoesSamplerRequireConstantBufferData((const struct ShaderLinkingSamplerDesc *)(v7 + 32LL * i));
    *(_BYTE *)(v19 + 2) = v18;
    if ( v18 )
    {
      v52 = v15;
      v53 = i + 1;
      ++v15;
      *(_DWORD *)(v19 + 4) = v52;
      if ( v16 > i + 1 )
        v53 = v16;
      v16 = v53;
    }
  }
  v86 = v16;
  v20 = HasWhiteNoise(a1);
  v21 = v118;
  v22 = v20;
  if ( !v20 )
  {
    for ( j = v88; j != v21; ++j )
    {
      if ( HasWhiteNoise(*j) )
      {
        v22 = 1;
        break;
      }
    }
  }
  v24 = v89;
  v105 = *v89;
  ExpectedVertexShaderDesc = GetExpectedVertexShaderDesc(a1, &v105, v7, v10, v22);
  v26 = (VertexShaderDesc *)v116[0];
  *(_QWORD *)v116[0] = ExpectedVertexShaderDesc;
  LOBYTE(v27) = *(_BYTE *)(a1 + 32);
  v28 = InitializeShaderLinkingInput(ppLinker, v27, v26);
  v30 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x50Fu, 0LL);
  }
  else
  {
    v31 = UseFragmentsModuleNoRef((__int64)ppLinker, v83, *(_BYTE *)(v7 + 156), &v87);
    v30 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v31, 0x510u, 0LL);
    }
    else
    {
      v34 = v87;
      if ( v10 <= 2 && !v22 )
        goto LABEL_17;
      *(_QWORD *)&v97 = 3LL;
      WORD2(v118) = 258;
      LODWORD(v118) = 16843008;
      *((_QWORD *)&v97 + 1) = &v118;
      v106 = v97;
      LOWORD(v32) = v22 != 0 ? 12 : 259;
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   (unsigned int)ppLinker,
                   v32,
                   (unsigned int)&byte_18032C47F,
                   v87,
                   (__int64)"DecodeTexcoord3",
                   (__int64)&v106);
      v30 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, appended, 0x51Cu, 0LL);
      }
      else
      {
LABEL_17:
        *(_WORD *)v82 = 1;
        v35 = std::_Fnv1a_append_bytes(v33, v82, 2uLL);
        v36 = std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Find<enum ShaderLinkingArgument>(
                v95,
                v82,
                v35);
        if ( v36 != v96 && *(_DWORD *)(v7 + 144) > 1u )
        {
          *(_QWORD *)&v98 = 1LL;
          *((_QWORD *)&v98 + 1) = &v84;
          v64 = *(_QWORD *)(v7 + 136);
          v107 = v98;
          v84 = 1;
          v65 = CShaderLinkingGraphBuilder::AppendNode(
                  (unsigned int)ppLinker,
                  1,
                  (unsigned int)&byte_18032C47F,
                  v34,
                  v64,
                  (__int64)&v107);
          v30 = v65;
          if ( v65 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, v65, 0x528u, 0LL);
            goto LABEL_33;
          }
        }
        LOBYTE(v81) = 0;
        gsl::details::extent_type<-1>::extent_type<-1>(v91, v86);
        v91[1] = v113;
        if ( v91[0] == -1LL )
        {
          gsl::details::terminate(v37);
          __debugbreak();
        }
        v38 = PrepareSamplers((int)ppLinker, v7);
        v30 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v39, 0LL, 0, v38, 0x535u, 0LL);
        }
        else
        {
          v40 = 0;
          v41 = 0LL;
          if ( *v24 )
          {
            while ( 1 )
            {
              if ( (unsigned int)v41 >= v92 )
              {
                gsl::details::terminate(v39);
                JUMPOUT(0x180034590LL);
              }
              _mm_lfence();
              v58 = v88[v41];
              v120 = v41 + 48;
              qmemcpy(v119, "BodyFragment", sizeof(v119));
              v121 = 0;
              Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v85);
              ShaderBody = LoadShaderBody((__int64)ppLinker, v58, v59, v40, (__int64)v119, (struct ID3D11Module **)&v85);
              v30 = ShaderBody;
              if ( ShaderBody < 0 )
                break;
              v34 = v87;
              v62 = AppendShaderBody(
                      ppLinker,
                      (unsigned __int16)v41 | 0x500u,
                      (__int128 *)v58,
                      v7,
                      (__int64)v119,
                      v85,
                      v87,
                      &v81);
              v30 = v62;
              if ( v62 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v39, 0LL, 0, v62, 0x541u, 0LL);
                goto LABEL_33;
              }
              v41 = (unsigned int)(v41 + 1);
              v40 += *(_DWORD *)(v58 + 48);
              if ( (unsigned int)v41 >= *(_DWORD *)v89 )
                goto LABEL_22;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, ShaderBody, 0x540u, 0LL);
          }
          else
          {
LABEL_22:
            Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v85);
            v43 = LoadShaderBody(
                    (__int64)ppLinker,
                    a1,
                    v42,
                    v40,
                    (__int64)&byte_18032C47F,
                    (struct ID3D11Module **)&v85);
            v30 = v43;
            if ( v43 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x547u, 0LL);
            }
            else
            {
              v45 = AppendShaderBody(ppLinker, 10, (__int128 *)a1, v7, (__int64)&byte_18032C47F, v85, v34, &v81);
              v30 = v45;
              if ( v45 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v45, 0x548u, 0LL);
              }
              else
              {
                if ( *(_BYTE *)(v7 + 153) )
                {
                  *(_QWORD *)&v104 = 5LL;
                  *((_QWORD *)&v104 + 1) = &unk_1803485A0;
                  v108 = v104;
                  v67 = CShaderLinkingGraphBuilder::AppendNode(
                          (unsigned int)ppLinker,
                          10,
                          (unsigned int)&byte_18032C47F,
                          v34,
                          (__int64)"ApplyPSClipPlanes",
                          (__int64)&v108);
                  v30 = v67;
                  if ( v67 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0x559u, 0LL);
                    goto LABEL_33;
                  }
                }
                if ( *(_BYTE *)(v7 + 155) )
                {
                  *(_QWORD *)&v99 = 2LL;
                  *((_QWORD *)&v99 + 1) = "\n";
                  v109 = v99;
                  v54 = CShaderLinkingGraphBuilder::AppendNode(
                          (unsigned int)ppLinker,
                          10,
                          (unsigned int)&byte_18032C47F,
                          v34,
                          (__int64)"AlphaMultiply",
                          (__int64)&v109);
                  v30 = v54;
                  if ( v54 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x567u, 0LL);
                    goto LABEL_33;
                  }
                }
                if ( !(_BYTE)v81 && *(_DWORD *)(v7 + 128) != -1 )
                {
                  v69 = AppendLights(0xAu, ppLinker, (_DWORD *)(v7 + 128), -1);
                  v30 = v69;
                  if ( v69 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v69, 0x56Eu, 0LL);
                    goto LABEL_33;
                  }
                }
                if ( *(_BYTE *)(v7 + 158) && *(_BYTE *)(v7 + 157) )
                {
                  v101 = "NoOp";
                  ConversionShader = ColorConversion::GetConversionShader(
                                       DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
                                       0,
                                       8u,
                                       DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709,
                                       (struct ColorConversion::Shader *)&v101,
                                       0LL);
                  v30 = ConversionShader;
                  if ( ConversionShader < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, ConversionShader, 0x57Bu, 0LL);
                    goto LABEL_33;
                  }
                  *(_QWORD *)&v100 = 1LL;
                  *((_QWORD *)&v100 + 1) = "\n";
                  v110 = v100;
                  v73 = CShaderLinkingGraphBuilder::AppendNode(
                          (unsigned int)ppLinker,
                          10,
                          (unsigned int)&byte_18032C47F,
                          v34,
                          (__int64)v101,
                          (__int64)&v110);
                  v30 = v73;
                  if ( v73 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v73, 0x57Cu, 0LL);
                    goto LABEL_33;
                  }
                }
                if ( *(_BYTE *)(v7 + 159)
                  && (*(_QWORD *)&v102 = 1LL,
                      *((_QWORD *)&v102 + 1) = "\n",
                      v111 = v102,
                      v75 = CShaderLinkingGraphBuilder::AppendNode(
                              (unsigned int)ppLinker,
                              10,
                              (unsigned int)&byte_18032C47F,
                              v34,
                              (__int64)"BoostSDRLuminance",
                              (__int64)&v111),
                      v30 = v75,
                      v75 < 0) )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v76, 0LL, 0, v75, 0x583u, 0LL);
                }
                else
                {
                  if ( !*(_BYTE *)(v7 + 152) )
                    goto LABEL_31;
                  v77 = *(_BYTE *)(v7 + 158) == 0;
                  *((_QWORD *)&v103 + 1) = &v83;
                  v78 = (char *)v116;
                  *(_QWORD *)&v103 = 1LL;
                  if ( !v77 )
                    v78 = v117;
                  strcpy((char *)v116, "MinBlend");
                  strcpy(v117, "MinBlend_HDR");
                  LOWORD(v83) = 10;
                  v112 = v103;
                  v79 = CShaderLinkingGraphBuilder::AppendNode(
                          (unsigned int)ppLinker,
                          10,
                          (unsigned int)&byte_18032C47F,
                          v34,
                          (__int64)v78,
                          (__int64)&v112);
                  v30 = v79;
                  if ( v79 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v80, 0LL, 0, v79, 0x58Du, 0LL);
                  }
                  else
                  {
LABEL_31:
                    v48 = CShaderLinkingGraphBuilder::Link((CShaderLinkingGraphBuilder *)ppLinker, v46, v93);
                    v30 = v48;
                    if ( v48 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0x590u, 0LL);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_33:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SHADER_LINK_Stop,
      v50,
      1u,
      &v115);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v85);
  CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  return v30;
}
