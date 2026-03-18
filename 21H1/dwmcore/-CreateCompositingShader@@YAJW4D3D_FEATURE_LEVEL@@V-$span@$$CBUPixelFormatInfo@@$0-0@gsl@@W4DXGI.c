/*
 * XREFs of ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18026A8B8
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1802403E8 (-GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180047950 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18009D420 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x18009D9C8 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x18009EB20 (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 *     AppendColorConversion @ 0x18009EE3C (AppendColorConversion.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x18009F2A8 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x18009F46C (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x18009F6C4 (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x18009FD58 (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1801AB718 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 */

__int64 __fastcall CreateCompositingShader(
        int a1,
        unsigned __int64 *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        struct ID3D10Blob **a4)
{
  unsigned __int64 *v5; // r15
  unsigned __int64 v6; // r13
  bool v7; // di
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int FragmentsModuleNoRef; // eax
  __int64 v12; // rcx
  struct ID3D11Module *v13; // r14
  HRESULT (__stdcall *CreateInstance)(ID3D11Module *, LPCSTR, struct ID3D11ModuleInstance **); // rbx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // edi
  __int16 v23; // si
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int appended; // eax
  __int64 v29; // rcx
  unsigned __int64 v30; // r13
  int ColorChannelDepth; // eax
  char v32; // bl
  int v33; // r8d
  int v34; // eax
  __int64 v35; // rcx
  enum DXGI_COLOR_SPACE_TYPE v36; // r15d
  int ConversionShader; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  bool v52[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v53; // [rsp+34h] [rbp-CCh] BYREF
  enum DXGI_COLOR_SPACE_TYPE v54; // [rsp+38h] [rbp-C8h]
  __int64 v55[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v56; // [rsp+50h] [rbp-B0h] BYREF
  struct ID3D11Module *v57[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v58; // [rsp+70h] [rbp-90h] BYREF
  __int128 v59; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 *v60; // [rsp+90h] [rbp-70h]
  struct ID3D10Blob **v61; // [rsp+98h] [rbp-68h]
  __int128 v62; // [rsp+A0h] [rbp-60h]
  struct ID3D11Linker *ppLinker[12]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v64[13]; // [rsp+110h] [rbp+10h] BYREF
  char v65; // [rsp+11Dh] [rbp+1Dh]
  char v66; // [rsp+11Eh] [rbp+1Eh]

  v61 = a4;
  v54 = a3;
  v55[0] = 0LL;
  v5 = a2;
  v60 = a2;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  v6 = *v5;
  v7 = a1 >= 37632;
  *(_QWORD *)&v56 = *v5 + 1;
  if ( (__int64)v56 < 0 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  *((_QWORD *)&v56 + 1) = &unk_180286180;
  v59 = v56;
  v8 = CShaderLinkingGraphBuilder::Initialize(ppLinker, a1 >= 37632, &v59);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x53Fu, 0LL);
  }
  else
  {
    LOBYTE(v9) = v7;
    FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(v9, v57);
    v10 = FragmentsModuleNoRef;
    if ( FragmentsModuleNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, FragmentsModuleNoRef, 0x542u, 0LL);
    }
    else
    {
      v13 = v57[0];
      CreateInstance = v57[0]->lpVtbl->CreateInstance;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v55);
      v15 = ((__int64 (__fastcall *)(struct ID3D11Module *, const unsigned __int16 *, __int64 *))CreateInstance)(
              v13,
              &word_1802CFB96,
              v55);
      v10 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x543u, 0LL);
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v55[0] + 24LL))(v55[0], 2LL, 2LL);
        v10 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x549u, 0LL);
        }
        else
        {
          v19 = ((__int64 (__fastcall *)(struct ID3D11Linker *, __int64))ppLinker[0]->lpVtbl->UseLibrary)(
                  ppLinker[0],
                  v55[0]);
          v10 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v19, 0x54Bu, 0LL);
          }
          else
          {
            v22 = 0;
            if ( (_DWORD)v6 )
            {
              while ( 1 )
              {
                v23 = v22 | 0x100;
                v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v55[0] + 40LL))(
                        v55[0],
                        v22,
                        v22,
                        1LL);
                v10 = v24;
                if ( v24 < 0 )
                  break;
                v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v55[0] + 56LL))(
                        v55[0],
                        v22,
                        v22,
                        1LL);
                v10 = v26;
                if ( v26 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x553u, 0LL);
                  goto LABEL_45;
                }
                v65 = v22 + 48;
                *((_QWORD *)&v62 + 1) = &v53;
                qmemcpy(v64, "SampleTexture", sizeof(v64));
                *(_QWORD *)&v62 = 1LL;
                v53 = v22 | 0x100;
                v66 = 0;
                v58 = v62;
                appended = CShaderLinkingGraphBuilder::AppendNode(
                             ppLinker,
                             v23,
                             (__int64)&word_1802CFB96,
                             (__int64)v13,
                             (__int64)v64,
                             &v58);
                v10 = appended;
                if ( appended < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, appended, 0x559u, 0LL);
                  goto LABEL_45;
                }
                if ( (int)v22 >= v6 )
                {
                  ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
                  __debugbreak();
                }
                v30 = v5[1];
                DWORD2(v56) = 0;
                *(_QWORD *)&v56 = "NoOp";
                ColorChannelDepth = GetColorChannelDepth(*(_DWORD *)(v30 + 12LL * (int)v22));
                v32 = *(_DWORD *)(v30 + 12LL * (int)v22 + 4) == 3;
                if ( (int)ColorConversion::GetConversionShader(
                            (enum DXGI_COLOR_SPACE_TYPE)*(_DWORD *)(v30 + 12LL * (int)v22 + 8),
                            v32,
                            ColorChannelDepth,
                            v54,
                            (struct ColorConversion::Shader *)&v56,
                            v52) < 0 )
                {
                  v36 = v54;
                  if ( v54 == DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020 )
                    v36 = DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
                  ConversionShader = ColorConversion::GetConversionShader(
                                       (enum DXGI_COLOR_SPACE_TYPE)*(_DWORD *)(v30 + 12LL * (int)v22 + 8),
                                       v32,
                                       v33,
                                       v36,
                                       (struct ColorConversion::Shader *)&v56,
                                       v52);
                  v10 = ConversionShader;
                  if ( ConversionShader < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, ConversionShader, 0x56Fu, 0LL);
                    goto LABEL_45;
                  }
                  v58 = v56;
                  v39 = AppendColorConversion(ppLinker, (__int64)v13, v23, (__int64)&v58, v52[0]);
                  v10 = v39;
                  if ( v39 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x570u, 0LL);
                    goto LABEL_45;
                  }
                  v41 = ColorConversion::GetConversionShader(
                          v36,
                          *(_DWORD *)(v30 + 12LL * (int)v22 + 4) == 3,
                          v36 != DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 ? 16 : 8,
                          v54,
                          (struct ColorConversion::Shader *)&v56,
                          v52);
                  v10 = v41;
                  if ( v41 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x576u, 0LL);
                    goto LABEL_45;
                  }
                  v58 = v56;
                  v43 = AppendColorConversion(ppLinker, (__int64)v13, v23, (__int64)&v58, v52[0]);
                  v10 = v43;
                  if ( v43 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x577u, 0LL);
                    goto LABEL_45;
                  }
                  v5 = v60;
                }
                else
                {
                  v58 = v56;
                  v34 = AppendColorConversion(ppLinker, (__int64)v13, v23, (__int64)&v58, v52[0]);
                  v10 = v34;
                  if ( v34 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x565u, 0LL);
                    goto LABEL_45;
                  }
                }
                if ( v22 )
                {
                  *(_QWORD *)&v59 = 2LL;
                  LOWORD(v57[0]) = 10;
                  *((_QWORD *)&v59 + 1) = v57;
                  WORD1(v57[0]) = v22 | 0x100;
                  v58 = v59;
                  v47 = CShaderLinkingGraphBuilder::AppendNode(
                          ppLinker,
                          10,
                          (__int64)&word_1802CFB96,
                          (__int64)v13,
                          (__int64)"CompositeSourceOver",
                          &v58);
                  v10 = v47;
                  if ( v47 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x583u, 0LL);
                    goto LABEL_45;
                  }
                }
                else
                {
                  v45 = CShaderLinkingGraphBuilder::CopyNode((unsigned __int64)ppLinker, 10, v23);
                  v10 = v45;
                  if ( v45 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x57Du, 0LL);
                    goto LABEL_45;
                  }
                }
                v20 = 1LL;
                if ( ++v22 >= *(_DWORD *)v5 )
                  goto LABEL_38;
                v6 = *v5;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x552u, 0LL);
            }
            else
            {
LABEL_38:
              v49 = CShaderLinkingGraphBuilder::Link(
                      (CShaderLinkingGraphBuilder *)ppLinker,
                      (const struct CShaderLinkingGraphBuilder::SignatureParameter *)v20,
                      v61);
              v10 = v49;
              if ( v49 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x587u, 0LL);
            }
          }
        }
      }
    }
  }
LABEL_45:
  CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v55);
  return v10;
}
