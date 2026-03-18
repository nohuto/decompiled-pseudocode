/*
 * XREFs of ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800B5CB8
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18004BA40 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800B3DB4 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     AppendLights @ 0x18001B490 (AppendLights.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800B4944 (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     GetExpectedVertexShaderDesc @ 0x1800B4984 (GetExpectedVertexShaderDesc.c)
 *     InitializeShaderLinkingInput @ 0x1800B4A94 (InitializeShaderLinkingInput.c)
 *     UseFragmentsModuleNoRef @ 0x1800B4E2C (UseFragmentsModuleNoRef.c)
 *     HasWhiteNoise @ 0x1800B4F80 (HasWhiteNoise.c)
 *     LoadShaderBody @ 0x1800B50C8 (LoadShaderBody.c)
 *     AppendShaderBody @ 0x1800B52B8 (AppendShaderBody.c)
 *     DiscoverSamplers @ 0x1800B5C1C (DiscoverSamplers.c)
 *     ?DoesSamplerRequireConstantBufferData@@YA_NAEBUShaderLinkingSamplerDesc@@@Z @ 0x1800B626C (-DoesSamplerRequireConstantBufferData@@YA_NAEBUShaderLinkingSamplerDesc@@@Z.c)
 *     PrepareSamplers @ 0x1800B628C (PrepareSamplers.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800B6D88 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800B9C5C (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800B9EB4 (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BFC74 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C5020 (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800D600C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1801A8CB8 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 */

__int64 __fastcall LinkShader(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, struct ID3D10Blob **a5)
{
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned int v10; // r13d
  unsigned int v11; // esi
  __int64 **v12; // rax
  __int64 v13; // r14
  __int64 **v14; // r15
  __int64 **v15; // r12
  __int64 v16; // rbx
  __int64 *v17; // r15
  unsigned int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  bool v21; // al
  int v22; // edx
  __int64 v23; // r9
  unsigned int v24; // r10d
  char v25; // r14
  __int64 **i; // rbx
  _DWORD *v27; // r12
  __int64 ExpectedVertexShaderDesc; // rax
  VertexShaderDesc *v29; // r8
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // ebx
  int v34; // eax
  int v35; // edx
  unsigned __int64 v36; // rcx
  void *v37; // r15
  unsigned __int64 appended; // rax
  int v39; // r11d
  __int64 v40; // r8
  __int64 *j; // rcx
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rcx
  unsigned int v45; // r14d
  unsigned int v46; // esi
  unsigned int v47; // r9d
  __int128 *v48; // r14
  struct ID3D11Module *v49; // r8
  int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v53; // rdx
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // r8
  int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  unsigned int v62; // ecx
  unsigned int v63; // eax
  __int64 **v64; // r13
  __int64 v65; // r12
  struct ID3D11Module *v66; // r8
  int v67; // eax
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // rcx
  int v71; // eax
  int v72; // eax
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // rcx
  int v76; // eax
  __int64 v77; // rcx
  int ConversionShader; // eax
  __int64 v79; // rcx
  int v80; // eax
  __int64 v81; // rcx
  int v82; // eax
  __int64 v83; // rcx
  bool v84; // zf
  __int64 *v85; // rax
  int v86; // eax
  __int64 v87; // rcx
  struct ColorConversion::Shader *v88; // [rsp+20h] [rbp-E0h]
  _WORD v89[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct ID3D11Module *v90; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v91; // [rsp+50h] [rbp-B0h]
  __int64 **v92; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v93; // [rsp+60h] [rbp-A0h]
  struct ID3D10Blob **v94; // [rsp+68h] [rbp-98h]
  int v95[6]; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v96; // [rsp+88h] [rbp-78h]
  __int64 v97; // [rsp+98h] [rbp-68h]
  __int64 v98; // [rsp+B0h] [rbp-50h]
  _OWORD v99[2]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v100[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD *v101[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v102[2]; // [rsp+120h] [rbp+20h] BYREF
  _OWORD *v103; // [rsp+130h] [rbp+30h] BYREF

  v101[0] = (_QWORD *)a1;
  v103 = a3;
  v94 = a5;
  v102[0] = a4;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)v95);
  v90 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SHADER_LINK_Start,
      v8,
      1LL,
      v100);
  v9 = *a3;
  v10 = *(_DWORD *)(a1 + 48);
  *((_QWORD *)&v100[0] + 1) = v99;
  v11 = 0;
  v12 = (__int64 **)a3[1];
  v13 = 0LL;
  *(_QWORD *)&v100[0] = 4LL;
  v14 = v12;
  memset(v99, 0, sizeof(v99));
  v92 = v12;
  v15 = &v12[v9];
  v93 = v9;
  v16 = v9 & 0x1FFFFFFFFFFFFFFFLL;
  if ( v12 > v15 )
    v16 = 0LL;
  if ( v16 )
  {
    do
    {
      v10 += *((_DWORD *)*v14 + 12);
      v63 = DiscoverSamplers(*v14++, (unsigned __int64 *)v100);
      if ( v11 <= v63 )
        v11 = v63;
      ++v13;
    }
    while ( v13 != v16 );
  }
  v17 = v101[0];
  v18 = DiscoverSamplers(v101[0], (unsigned __int64 *)v100);
  if ( v11 <= v18 )
    v11 = v18;
  if ( *(_BYTE *)(a2 + 156) && v11 <= 2 )
    v11 = 2;
  v19 = 0LL;
  v91 = v11;
  v20 = 0LL;
  do
  {
    if ( (unsigned int)v20 >= 4uLL )
    {
      ((void (__fastcall *)(_QWORD, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
        (unsigned int)v20,
        v20,
        v19);
      __debugbreak();
    }
    v21 = DoesSamplerRequireConstantBufferData((const struct ShaderLinkingSamplerDesc *)(a2 + 32LL * (unsigned int)v20));
    *((_BYTE *)v99 + 8 * v23 + 2) = v21;
    if ( v21 )
    {
      v61 = v19;
      v62 = v22 + 1;
      v19 = (unsigned int)(v19 + 1);
      *((_DWORD *)v99 + 2 * v23 + 1) = v61;
      if ( v24 > v22 + 1 )
        v62 = v24;
      v91 = v62;
    }
    v20 = (unsigned int)(v22 + 1);
  }
  while ( (unsigned int)v20 < 4 );
  v25 = HasWhiteNoise(v17);
  if ( !v25 )
  {
    for ( i = v92; i != v15; ++i )
    {
      if ( (unsigned __int8)HasWhiteNoise(*i) )
      {
        v25 = 1;
        break;
      }
    }
  }
  v27 = v103;
  v100[0] = *v103;
  ExpectedVertexShaderDesc = GetExpectedVertexShaderDesc(v17, v100, a2, v11, v25);
  v29 = (VertexShaderDesc *)v102[0];
  *(_QWORD *)v102[0] = ExpectedVertexShaderDesc;
  LOBYTE(v30) = *((_BYTE *)v17 + 32);
  v31 = InitializeShaderLinkingInput((struct ID3D11Linker **)v95, v30, v29);
  v33 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x49Du, 0LL);
  }
  else
  {
    v34 = UseFragmentsModuleNoRef((__int64)v95, v10, *(_BYTE *)(a2 + 156), v102);
    v33 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v34, 0x49Eu, 0LL);
    }
    else
    {
      v37 = (void *)v102[0];
      if ( (v11 > 2 || v25)
        && (*(_QWORD *)&v100[0] = 3LL,
            LODWORD(v103) = 16843008,
            WORD2(v103) = 258,
            *((_QWORD *)&v100[0] + 1) = &v103,
            LOWORD(v35) = v25 != 0 ? 12 : 259,
            v71 = CShaderLinkingGraphBuilder::AppendNode(
                    (unsigned int)v95,
                    v35,
                    (unsigned int)&word_1802CD8A6,
                    v102[0],
                    (__int64)"DecodeTexcoord3",
                    (__int64)v100),
            v33 = v71,
            v71 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v71, 0x4AAu, 0LL);
      }
      else
      {
        v89[0] = 1;
        appended = std::_Fnv1a_append_bytes(v36, (const unsigned __int8 *const)v89, 2uLL);
        v40 = 2 * (v98 & appended);
        for ( j = *(__int64 **)(v97 + 16 * (v98 & appended)); ; j = (__int64 *)*j )
        {
          v42 = *(__int64 **)(v97 + 8 * v40) == v96 ? (__int64)v96 : **(_QWORD **)(v97 + 8 * v40 + 8);
          if ( j == (__int64 *)v42 )
            break;
          if ( *((_WORD *)j + 8) == 1 )
            goto LABEL_25;
        }
        j = v96;
LABEL_25:
        if ( j != v96 && *(_DWORD *)(a2 + 144) > 1u )
        {
          *(_QWORD *)&v100[0] = 1LL;
          *((_QWORD *)&v100[0] + 1) = v89;
          v88 = *(struct ColorConversion::Shader **)(a2 + 136);
          v89[0] = 1;
          v72 = CShaderLinkingGraphBuilder::AppendNode(
                  (unsigned int)v95,
                  1,
                  v39,
                  (_DWORD)v37,
                  (__int64)v88,
                  (__int64)v100);
          v33 = v72;
          if ( v72 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, v72, 0x4B6u, 0LL);
            goto LABEL_40;
          }
        }
        *(_QWORD *)&v100[0] = v91;
        LOBYTE(v89[0]) = 0;
        *((_QWORD *)&v100[0] + 1) = v99;
        v43 = PrepareSamplers((int)v95, a2);
        v33 = v43;
        if ( v43 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x4C3u, 0LL);
        }
        else
        {
          v45 = 0;
          v46 = 0;
          if ( *v27 )
          {
            v64 = v92;
            while ( 1 )
            {
              if ( v46 >= v93 )
              {
                ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
                __debugbreak();
              }
              v65 = (__int64)v64[v46];
              WORD6(v100[0]) = (unsigned __int8)(v46 + 48);
              qmemcpy(v100, "BodyFragment", 12);
              Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v90);
              v67 = LoadShaderBody((__int64)v95, v65, v66, v45, (__int64)v100, &v90);
              v33 = v67;
              if ( v67 < 0 )
                break;
              v69 = AppendShaderBody(
                      v95,
                      (unsigned __int16)v46 | 0x500u,
                      (__int128 *)v65,
                      a2,
                      (__int64)v100,
                      (__int64)v90,
                      v37,
                      v89);
              v33 = v69;
              if ( v69 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v69, 0x4CFu, 0LL);
                goto LABEL_40;
              }
              v45 += *(_DWORD *)(v65 + 48);
              if ( ++v46 >= (unsigned int)v93 )
                goto LABEL_29;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0x4CEu, 0LL);
          }
          else
          {
LABEL_29:
            Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v90);
            v47 = v45;
            v48 = (__int128 *)v101[0];
            v50 = LoadShaderBody((__int64)v95, (__int64)v101[0], v49, v47, (__int64)&word_1802CD8A6, &v90);
            v33 = v50;
            if ( v50 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x4D5u, 0LL);
            }
            else
            {
              v52 = AppendShaderBody(v95, 10, v48, a2, (__int64)&word_1802CD8A6, (__int64)v90, v37, v89);
              v33 = v52;
              if ( v52 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v52, 0x4D6u, 0LL);
              }
              else
              {
                if ( *(_BYTE *)(a2 + 153) )
                {
                  *(_QWORD *)&v100[0] = 5LL;
                  *((_QWORD *)&v100[0] + 1) = &unk_1802DCC30;
                  v74 = CShaderLinkingGraphBuilder::AppendNode(
                          (unsigned int)v95,
                          10,
                          (unsigned int)&word_1802CD8A6,
                          (_DWORD)v37,
                          (__int64)"ApplyPSClipPlanes",
                          (__int64)v100);
                  v33 = v74;
                  if ( v74 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, v74, 0x4E7u, 0LL);
                    goto LABEL_40;
                  }
                }
                if ( *(_BYTE *)(a2 + 155) )
                {
                  *(_QWORD *)&v100[0] = 2LL;
                  *((_QWORD *)&v100[0] + 1) = &unk_1802AB090;
                  v59 = CShaderLinkingGraphBuilder::AppendNode(
                          (unsigned int)v95,
                          10,
                          (unsigned int)&word_1802CD8A6,
                          (_DWORD)v37,
                          (__int64)"AlphaMultiply",
                          (__int64)v100);
                  v33 = v59;
                  if ( v59 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x4F5u, 0LL);
                    goto LABEL_40;
                  }
                }
                if ( !LOBYTE(v89[0]) && *(_DWORD *)(a2 + 128) != -1 )
                {
                  v76 = AppendLights(0xAu, v95, (_DWORD *)(a2 + 128), -1);
                  v33 = v76;
                  if ( v76 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, v76, 0x4FCu, 0LL);
                    goto LABEL_40;
                  }
                }
                if ( *(_BYTE *)(a2 + 158) && *(_BYTE *)(a2 + 157) )
                {
                  v102[0] = (__int64)"NoOp";
                  ConversionShader = ColorConversion::GetConversionShader(
                                       DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
                                       0,
                                       8u,
                                       DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709,
                                       (struct ColorConversion::Shader *)v102,
                                       0LL);
                  v33 = ConversionShader;
                  if ( ConversionShader < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v79, 0LL, 0, ConversionShader, 0x509u, 0LL);
                    goto LABEL_40;
                  }
                  *(_QWORD *)&v100[0] = 1LL;
                  *((_QWORD *)&v100[0] + 1) = "\n";
                  v80 = CShaderLinkingGraphBuilder::AppendNode(
                          (unsigned int)v95,
                          10,
                          (unsigned int)&word_1802CD8A6,
                          (_DWORD)v37,
                          v102[0],
                          (__int64)v100);
                  v33 = v80;
                  if ( v80 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0, v80, 0x50Au, 0LL);
                    goto LABEL_40;
                  }
                }
                if ( *(_BYTE *)(a2 + 159)
                  && (*(_QWORD *)&v100[0] = 1LL,
                      *((_QWORD *)&v100[0] + 1) = "\n",
                      v82 = CShaderLinkingGraphBuilder::AppendNode(
                              (unsigned int)v95,
                              10,
                              (unsigned int)&word_1802CD8A6,
                              (_DWORD)v37,
                              (__int64)"BoostSDRLuminance",
                              (__int64)v100),
                      v33 = v82,
                      v82 < 0) )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, v82, 0x511u, 0LL);
                }
                else
                {
                  if ( !*(_BYTE *)(a2 + 152) )
                    goto LABEL_38;
                  v84 = *(_BYTE *)(a2 + 158) == 0;
                  *((_QWORD *)&v100[0] + 1) = v89;
                  *(_QWORD *)&v100[0] = 1LL;
                  v85 = v102;
                  if ( !v84 )
                    v85 = (__int64 *)v101;
                  strcpy((char *)v102, "MinBlend");
                  strcpy((char *)v101, "MinBlend_HDR");
                  strcpy((char *)v89, "\n");
                  v86 = CShaderLinkingGraphBuilder::AppendNode(
                          (unsigned int)v95,
                          10,
                          (unsigned int)&word_1802CD8A6,
                          (_DWORD)v37,
                          (__int64)v85,
                          (__int64)v100);
                  v33 = v86;
                  if ( v86 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v87, 0LL, 0, v86, 0x51Bu, 0LL);
                  }
                  else
                  {
LABEL_38:
                    v55 = CShaderLinkingGraphBuilder::Link((CShaderLinkingGraphBuilder *)v95, v53, v94);
                    v33 = v55;
                    if ( v55 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x51Eu, 0LL);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_40:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SHADER_LINK_Stop,
      v57,
      1LL,
      v100);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v90);
  CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)v95);
  return v33;
}
