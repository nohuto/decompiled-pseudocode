/*
 * XREFs of ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x18009E448
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180045280 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800A0AAC (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     AppendLights @ 0x18001C0B0 (AppendLights.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18009D420 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     DiscoverSamplers @ 0x18009E3AC (DiscoverSamplers.c)
 *     ?DoesSamplerRequireConstantBufferData@@YA_NAEBUShaderLinkingSamplerDesc@@@Z @ 0x18009E9FC (-DoesSamplerRequireConstantBufferData@@YA_NAEBUShaderLinkingSamplerDesc@@@Z.c)
 *     PrepareSamplers @ 0x18009EA1C (PrepareSamplers.c)
 *     AppendShaderBody @ 0x18009F064 (AppendShaderBody.c)
 *     LoadShaderBody @ 0x18009F134 (LoadShaderBody.c)
 *     HasWhiteNoise @ 0x18009F324 (HasWhiteNoise.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x18009F46C (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x18009F6C4 (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     UseFragmentsModuleNoRef @ 0x18009F75C (UseFragmentsModuleNoRef.c)
 *     InitializeShaderLinkingInput @ 0x18009F9B4 (InitializeShaderLinkingInput.c)
 *     GetExpectedVertexShaderDesc @ 0x18009FCA0 (GetExpectedVertexShaderDesc.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x18009FD58 (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BA17C (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BEBE0 (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1801AB718 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 */

__int64 __fastcall LinkShader(
        __int64 a1,
        __int64 a2,
        struct _EVENT_DATA_DESCRIPTOR *a3,
        __int64 a4,
        struct ID3D10Blob **a5)
{
  __int64 v8; // r8
  unsigned __int64 Ptr; // rcx
  unsigned int v10; // r13d
  unsigned int v11; // esi
  _QWORD **v12; // rax
  __int64 v13; // r14
  _QWORD **v14; // r15
  _QWORD *v15; // r12
  __int64 v16; // rbx
  _QWORD *v17; // r15
  unsigned int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  bool v21; // al
  int v22; // edx
  __int64 v23; // r9
  unsigned int v24; // r10d
  char v25; // r14
  _QWORD *i; // rbx
  struct _EVENT_DATA_DESCRIPTOR *v27; // r12
  __int64 ExpectedVertexShaderDesc; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // ebx
  int v33; // eax
  unsigned __int64 v34; // rcx
  __int64 v35; // r15
  unsigned __int64 appended; // rax
  __int64 v37; // r11
  __int64 v38; // r8
  __int64 *j; // rcx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  int v43; // r14d
  unsigned int v44; // esi
  int v45; // r9d
  int v46; // r14d
  int v47; // r8d
  int v48; // eax
  __int64 v49; // rcx
  int v50; // eax
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v51; // rdx
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // r8
  int v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  unsigned int v60; // ecx
  unsigned int v61; // eax
  _QWORD *v62; // r13
  __int64 v63; // r12
  int v64; // r8d
  int ShaderBody; // eax
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rcx
  int v69; // eax
  int v70; // eax
  __int64 v71; // rcx
  int v72; // eax
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // rcx
  int ConversionShader; // eax
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // rcx
  int v80; // eax
  __int64 v81; // rcx
  bool v82; // zf
  __int64 *v83; // rax
  int v84; // eax
  __int64 v85; // rcx
  struct ColorConversion::Shader *v86; // [rsp+20h] [rbp-E0h]
  _WORD v87[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v88; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v89; // [rsp+50h] [rbp-B0h]
  _QWORD *v90; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v91; // [rsp+60h] [rbp-A0h]
  struct ID3D10Blob **v92; // [rsp+68h] [rbp-98h]
  struct ID3D11Linker *ppLinker[3]; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v94; // [rsp+88h] [rbp-78h]
  __int64 v95; // [rsp+98h] [rbp-68h]
  __int64 v96; // [rsp+B0h] [rbp-50h]
  _OWORD v97[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v98; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD *v99[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v100[2]; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR *v101; // [rsp+130h] [rbp+30h] BYREF

  v99[0] = (_QWORD *)a1;
  v101 = a3;
  v92 = a5;
  v100[0] = a4;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  v88 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SHADER_LINK_Start,
      v8,
      1u,
      &v98);
  Ptr = a3->Ptr;
  v10 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)&v98.Size = v97;
  v11 = 0;
  v12 = *(_QWORD ***)&a3->Size;
  v13 = 0LL;
  v98.Ptr = 4LL;
  v14 = v12;
  memset(v97, 0, sizeof(v97));
  v90 = v12;
  v15 = &v12[Ptr];
  v91 = Ptr;
  v16 = Ptr & 0x1FFFFFFFFFFFFFFFLL;
  if ( v12 > v15 )
    v16 = 0LL;
  if ( v16 )
  {
    do
    {
      v10 += *((_DWORD *)*v14 + 12);
      v61 = DiscoverSamplers(*v14++, &v98.Ptr);
      if ( v11 <= v61 )
        v11 = v61;
      ++v13;
    }
    while ( v13 != v16 );
  }
  v17 = v99[0];
  v18 = DiscoverSamplers(v99[0], &v98.Ptr);
  if ( v11 <= v18 )
    v11 = v18;
  if ( *(_BYTE *)(a2 + 156) && v11 <= 2 )
    v11 = 2;
  v19 = 0LL;
  v89 = v11;
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
    *((_BYTE *)v97 + 8 * v23 + 2) = v21;
    if ( v21 )
    {
      v59 = v19;
      v60 = v22 + 1;
      v19 = (unsigned int)(v19 + 1);
      *((_DWORD *)v97 + 2 * v23 + 1) = v59;
      if ( v24 > v22 + 1 )
        v60 = v24;
      v89 = v60;
    }
    v20 = (unsigned int)(v22 + 1);
  }
  while ( (unsigned int)v20 < 4 );
  v25 = HasWhiteNoise(v17);
  if ( !v25 )
  {
    for ( i = v90; i != v15; ++i )
    {
      if ( (unsigned __int8)HasWhiteNoise(*i) )
      {
        v25 = 1;
        break;
      }
    }
  }
  v27 = v101;
  v98 = *v101;
  ExpectedVertexShaderDesc = GetExpectedVertexShaderDesc((_DWORD)v17, (unsigned int)&v98, a2, v11, v25);
  *(_QWORD *)v100[0] = ExpectedVertexShaderDesc;
  v29 = InitializeShaderLinkingInput(ppLinker);
  v32 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x49Du, 0LL);
  }
  else
  {
    LOBYTE(v31) = *(_BYTE *)(a2 + 156);
    v33 = UseFragmentsModuleNoRef(ppLinker, v10, v31, v100);
    v32 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x49Eu, 0LL);
    }
    else
    {
      v35 = v100[0];
      if ( (v11 > 2 || v25)
        && (v98.Ptr = 3LL,
            LODWORD(v101) = 16843008,
            WORD2(v101) = 258,
            *(_QWORD *)&v98.Size = &v101,
            v69 = CShaderLinkingGraphBuilder::AppendNode(
                    ppLinker,
                    v25 != 0 ? 12 : 259,
                    (__int64)&word_1802CFB96,
                    v100[0],
                    (__int64)"DecodeTexcoord3",
                    (__int128 *)&v98),
            v32 = v69,
            v69 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v69, 0x4AAu, 0LL);
      }
      else
      {
        v87[0] = 1;
        appended = std::_Fnv1a_append_bytes(v34, (const unsigned __int8 *const)v87, 2uLL);
        v38 = 2 * (v96 & appended);
        for ( j = *(__int64 **)(v95 + 16 * (v96 & appended)); ; j = (__int64 *)*j )
        {
          v40 = *(__int64 **)(v95 + 8 * v38) == v94 ? (__int64)v94 : **(_QWORD **)(v95 + 8 * v38 + 8);
          if ( j == (__int64 *)v40 )
            break;
          if ( *((_WORD *)j + 8) == 1 )
            goto LABEL_25;
        }
        j = v94;
LABEL_25:
        if ( j != v94 && *(_DWORD *)(a2 + 144) > 1u )
        {
          v98.Ptr = 1LL;
          *(_QWORD *)&v98.Size = v87;
          v86 = *(struct ColorConversion::Shader **)(a2 + 136);
          v87[0] = 1;
          v70 = CShaderLinkingGraphBuilder::AppendNode(ppLinker, 1, v37, v35, (__int64)v86, (__int128 *)&v98);
          v32 = v70;
          if ( v70 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v70, 0x4B6u, 0LL);
            goto LABEL_40;
          }
        }
        v98.Ptr = v89;
        LOBYTE(v87[0]) = 0;
        *(_QWORD *)&v98.Size = v97;
        v41 = PrepareSamplers(ppLinker, a2, &v98);
        v32 = v41;
        if ( v41 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x4C3u, 0LL);
        }
        else
        {
          v43 = 0;
          v44 = 0;
          if ( LODWORD(v27->Ptr) )
          {
            v62 = v90;
            while ( 1 )
            {
              if ( v44 >= v91 )
              {
                ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
                __debugbreak();
              }
              v63 = v62[v44];
              LOWORD(v98.Reserved) = (unsigned __int8)(v44 + 48);
              qmemcpy(&v98, "BodyFragment", 12);
              Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v88);
              ShaderBody = LoadShaderBody((unsigned int)ppLinker, v63, v64, v43, (__int64)&v98, (__int64)&v88);
              v32 = ShaderBody;
              if ( ShaderBody < 0 )
                break;
              v67 = AppendShaderBody(
                      (unsigned int)ppLinker,
                      (unsigned __int16)v44 | 0x500u,
                      v63,
                      a2,
                      (__int64)&v98,
                      v88,
                      v35,
                      (__int64)v87);
              v32 = v67;
              if ( v67 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0x4CFu, 0LL);
                goto LABEL_40;
              }
              v43 += *(_DWORD *)(v63 + 48);
              if ( ++v44 >= (unsigned int)v91 )
                goto LABEL_29;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, ShaderBody, 0x4CEu, 0LL);
          }
          else
          {
LABEL_29:
            Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v88);
            v45 = v43;
            v46 = (int)v99[0];
            v48 = LoadShaderBody((unsigned int)ppLinker, v99[0], v47, v45, (__int64)&word_1802CFB96, (__int64)&v88);
            v32 = v48;
            if ( v48 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0x4D5u, 0LL);
            }
            else
            {
              v50 = AppendShaderBody(
                      (unsigned int)ppLinker,
                      10,
                      v46,
                      a2,
                      (__int64)&word_1802CFB96,
                      v88,
                      v35,
                      (__int64)v87);
              v32 = v50;
              if ( v50 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v50, 0x4D6u, 0LL);
              }
              else
              {
                if ( *(_BYTE *)(a2 + 153) )
                {
                  v98.Ptr = 5LL;
                  *(_QWORD *)&v98.Size = &unk_1802DFBC0;
                  v72 = CShaderLinkingGraphBuilder::AppendNode(
                          ppLinker,
                          10,
                          (__int64)&word_1802CFB96,
                          v35,
                          (__int64)"ApplyPSClipPlanes",
                          (__int128 *)&v98);
                  v32 = v72;
                  if ( v72 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, v72, 0x4E7u, 0LL);
                    goto LABEL_40;
                  }
                }
                if ( *(_BYTE *)(a2 + 155) )
                {
                  v98.Ptr = 2LL;
                  *(_QWORD *)&v98.Size = &unk_1802ADB20;
                  v57 = CShaderLinkingGraphBuilder::AppendNode(
                          ppLinker,
                          10,
                          (__int64)&word_1802CFB96,
                          v35,
                          (__int64)"AlphaMultiply",
                          (__int128 *)&v98);
                  v32 = v57;
                  if ( v57 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x4F5u, 0LL);
                    goto LABEL_40;
                  }
                }
                if ( !LOBYTE(v87[0]) && *(_DWORD *)(a2 + 128) != -1 )
                {
                  v74 = AppendLights(0xAu, ppLinker, (_DWORD *)(a2 + 128), -1);
                  v32 = v74;
                  if ( v74 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, v74, 0x4FCu, 0LL);
                    goto LABEL_40;
                  }
                }
                if ( *(_BYTE *)(a2 + 158) && *(_BYTE *)(a2 + 157) )
                {
                  v100[0] = (__int64)"NoOp";
                  ConversionShader = ColorConversion::GetConversionShader(
                                       DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
                                       0,
                                       8u,
                                       DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709,
                                       (struct ColorConversion::Shader *)v100,
                                       0LL);
                  v32 = ConversionShader;
                  if ( ConversionShader < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, ConversionShader, 0x509u, 0LL);
                    goto LABEL_40;
                  }
                  v98.Ptr = 1LL;
                  *(_QWORD *)&v98.Size = "\n";
                  v78 = CShaderLinkingGraphBuilder::AppendNode(
                          ppLinker,
                          10,
                          (__int64)&word_1802CFB96,
                          v35,
                          v100[0],
                          (__int128 *)&v98);
                  v32 = v78;
                  if ( v78 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v79, 0LL, 0, v78, 0x50Au, 0LL);
                    goto LABEL_40;
                  }
                }
                if ( *(_BYTE *)(a2 + 159)
                  && (v98.Ptr = 1LL,
                      *(_QWORD *)&v98.Size = "\n",
                      v80 = CShaderLinkingGraphBuilder::AppendNode(
                              ppLinker,
                              10,
                              (__int64)&word_1802CFB96,
                              v35,
                              (__int64)"BoostSDRLuminance",
                              (__int128 *)&v98),
                      v32 = v80,
                      v80 < 0) )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0, v80, 0x511u, 0LL);
                }
                else
                {
                  if ( !*(_BYTE *)(a2 + 152) )
                    goto LABEL_38;
                  v82 = *(_BYTE *)(a2 + 158) == 0;
                  *(_QWORD *)&v98.Size = v87;
                  v98.Ptr = 1LL;
                  v83 = v100;
                  if ( !v82 )
                    v83 = (__int64 *)v99;
                  strcpy((char *)v100, "MinBlend");
                  strcpy((char *)v99, "MinBlend_HDR");
                  strcpy((char *)v87, "\n");
                  v84 = CShaderLinkingGraphBuilder::AppendNode(
                          ppLinker,
                          10,
                          (__int64)&word_1802CFB96,
                          v35,
                          (__int64)v83,
                          (__int128 *)&v98);
                  v32 = v84;
                  if ( v84 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v85, 0LL, 0, v84, 0x51Bu, 0LL);
                  }
                  else
                  {
LABEL_38:
                    v53 = CShaderLinkingGraphBuilder::Link((CShaderLinkingGraphBuilder *)ppLinker, v51, v92);
                    v32 = v53;
                    if ( v53 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x51Eu, 0LL);
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
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SHADER_LINK_Stop,
      v55,
      1u,
      &v98);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v88);
  CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  return v32;
}
