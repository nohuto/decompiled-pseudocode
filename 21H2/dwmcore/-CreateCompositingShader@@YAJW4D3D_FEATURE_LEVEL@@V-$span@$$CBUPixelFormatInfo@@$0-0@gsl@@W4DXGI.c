/*
 * XREFs of ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1802AC260
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18027E284 (-GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI_.c)
 * Callees:
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x180032E6C (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x180033474 (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x180033748 (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x180033C34 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     AppendColorConversion @ 0x180034AAC (AppendColorConversion.c)
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x180034AFC (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x180035048 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800355F0 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180039534 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1801ED7C0 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 */

__int64 __fastcall CreateCompositingShader(
        int a1,
        unsigned __int64 *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        struct ID3D10Blob **a4)
{
  unsigned __int64 *v5; // r15
  unsigned __int64 v6; // r13
  char v7; // di
  gsl::details *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int FragmentsModuleNoRef; // eax
  __int64 v13; // rcx
  struct ID3D11Module *v14; // r14
  HRESULT (__stdcall *CreateInstance)(ID3D11Module *, LPCSTR, struct ID3D11ModuleInstance **); // rbx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // edi
  __int16 v24; // si
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  int appended; // eax
  gsl::details *v30; // rcx
  unsigned __int64 v31; // r13
  int ColorChannelDepth; // eax
  char v33; // bl
  int v34; // r8d
  int v35; // eax
  __int64 v36; // rcx
  enum DXGI_COLOR_SPACE_TYPE v37; // r15d
  int ConversionShader; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rcx
  bool v53[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v54; // [rsp+34h] [rbp-CCh] BYREF
  enum DXGI_COLOR_SPACE_TYPE v55; // [rsp+38h] [rbp-C8h]
  __int64 v56[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v57; // [rsp+50h] [rbp-B0h] BYREF
  struct ID3D11Module *v58[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v59; // [rsp+70h] [rbp-90h] BYREF
  __int128 v60; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 *v61; // [rsp+90h] [rbp-70h]
  struct ID3D10Blob **v62; // [rsp+98h] [rbp-68h]
  __int128 v63; // [rsp+A0h] [rbp-60h]
  struct ID3D11Linker *ppLinker[12]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v65[13]; // [rsp+110h] [rbp+10h] BYREF
  char v66; // [rsp+11Dh] [rbp+1Dh]
  char v67; // [rsp+11Eh] [rbp+1Eh]

  v62 = a4;
  v55 = a3;
  v56[0] = 0LL;
  v5 = a2;
  v61 = a2;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  v6 = *v5;
  v7 = a1 >= 37632;
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v57, *v5 + 1);
  *((_QWORD *)&v57 + 1) = &unk_1802CB7A0;
  if ( (_QWORD)v57 == -1LL )
  {
    gsl::details::terminate(v8);
    __debugbreak();
  }
  v60 = v57;
  v9 = CShaderLinkingGraphBuilder::Initialize(ppLinker, a1 >= 37632, (__int64 *)&v60);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x5B1u);
  }
  else
  {
    FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(v7, v58);
    v11 = FragmentsModuleNoRef;
    if ( FragmentsModuleNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, FragmentsModuleNoRef, 0x5B4u);
    }
    else
    {
      v14 = v58[0];
      CreateInstance = v58[0]->lpVtbl->CreateInstance;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v56);
      v16 = ((__int64 (__fastcall *)(struct ID3D11Module *, const char *, __int64 *))CreateInstance)(
              v14,
              &byte_18032C47F,
              v56);
      v11 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x5B5u);
      }
      else
      {
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v56[0] + 24LL))(v56[0], 2LL, 2LL);
        v11 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x5BBu);
        }
        else
        {
          v20 = ((__int64 (__fastcall *)(struct ID3D11Linker *, __int64))ppLinker[0]->lpVtbl->UseLibrary)(
                  ppLinker[0],
                  v56[0]);
          v11 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v20, 0x5BDu);
          }
          else
          {
            v23 = 0;
            if ( (_DWORD)v6 )
            {
              while ( 1 )
              {
                v24 = v23 | 0x100;
                v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v56[0] + 40LL))(
                        v56[0],
                        v23,
                        v23,
                        1LL);
                v11 = v25;
                if ( v25 < 0 )
                  break;
                v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v56[0] + 56LL))(
                        v56[0],
                        v23,
                        v23,
                        1LL);
                v11 = v27;
                if ( v27 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v27, 0x5C5u);
                  goto LABEL_45;
                }
                v66 = v23 + 48;
                *((_QWORD *)&v63 + 1) = &v54;
                qmemcpy(v65, "SampleTexture", sizeof(v65));
                *(_QWORD *)&v63 = 1LL;
                v54 = v23 | 0x100;
                v67 = 0;
                v59 = v63;
                appended = CShaderLinkingGraphBuilder::AppendNode(
                             (__int64)ppLinker,
                             v24,
                             (__int64)&byte_18032C47F,
                             (__int64)v14,
                             (__int64)v65,
                             &v59);
                v11 = appended;
                if ( appended < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)v30, 0LL, 0LL, appended, 0x5CBu);
                  goto LABEL_45;
                }
                if ( (int)v23 >= v6 )
                {
                  gsl::details::terminate(v30);
                  __debugbreak();
                }
                v31 = v5[1];
                DWORD2(v57) = 0;
                *(_QWORD *)&v57 = "NoOp";
                ColorChannelDepth = GetColorChannelDepth(*(_DWORD *)(v31 + 12LL * (int)v23));
                v33 = *(_DWORD *)(v31 + 12LL * (int)v23 + 4) == 3;
                if ( (int)ColorConversion::GetConversionShader(
                            (enum DXGI_COLOR_SPACE_TYPE)*(_DWORD *)(v31 + 12LL * (int)v23 + 8),
                            v33,
                            ColorChannelDepth,
                            v55,
                            (struct ColorConversion::Shader *)&v57,
                            v53) < 0 )
                {
                  v37 = DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
                  if ( v55 != DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020 )
                    v37 = v55;
                  ConversionShader = ColorConversion::GetConversionShader(
                                       (enum DXGI_COLOR_SPACE_TYPE)*(_DWORD *)(v31 + 12LL * (int)v23 + 8),
                                       v33,
                                       v34,
                                       v37,
                                       (struct ColorConversion::Shader *)&v57,
                                       v53);
                  v11 = ConversionShader;
                  if ( ConversionShader < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0LL, ConversionShader, 0x5E1u);
                    goto LABEL_45;
                  }
                  v59 = v57;
                  v40 = AppendColorConversion((int)ppLinker, (int)v14, v24, (__int64)&v59, v53[0]);
                  v11 = v40;
                  if ( v40 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0LL, v40, 0x5E2u);
                    goto LABEL_45;
                  }
                  v42 = ColorConversion::GetConversionShader(
                          v37,
                          *(_DWORD *)(v31 + 12LL * (int)v23 + 4) == 3,
                          v37 != DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 ? 16 : 8,
                          v55,
                          (struct ColorConversion::Shader *)&v57,
                          v53);
                  v11 = v42;
                  if ( v42 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0LL, v42, 0x5E8u);
                    goto LABEL_45;
                  }
                  v59 = v57;
                  v44 = AppendColorConversion((int)ppLinker, (int)v14, v24, (__int64)&v59, v53[0]);
                  v11 = v44;
                  if ( v44 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0LL, v44, 0x5E9u);
                    goto LABEL_45;
                  }
                  v5 = v61;
                }
                else
                {
                  v59 = v57;
                  v35 = AppendColorConversion((int)ppLinker, (int)v14, v24, (__int64)&v59, v53[0]);
                  v11 = v35;
                  if ( v35 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0LL, v35, 0x5D7u);
                    goto LABEL_45;
                  }
                }
                if ( v23 )
                {
                  *(_QWORD *)&v60 = 2LL;
                  LOWORD(v58[0]) = 10;
                  *((_QWORD *)&v60 + 1) = v58;
                  WORD1(v58[0]) = v23 | 0x100;
                  v59 = v60;
                  v48 = CShaderLinkingGraphBuilder::AppendNode(
                          (__int64)ppLinker,
                          10,
                          (__int64)&byte_18032C47F,
                          (__int64)v14,
                          (__int64)"CompositeSourceOver",
                          &v59);
                  v11 = v48;
                  if ( v48 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0LL, v48, 0x5F5u);
                    goto LABEL_45;
                  }
                }
                else
                {
                  v46 = CShaderLinkingGraphBuilder::CopyNode((unsigned __int64)ppLinker, 10, v24);
                  v11 = v46;
                  if ( v46 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0LL, v46, 0x5EFu);
                    goto LABEL_45;
                  }
                }
                if ( ++v23 >= *(_DWORD *)v5 )
                  goto LABEL_38;
                v6 = *v5;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0x5C4u);
            }
            else
            {
LABEL_38:
              v50 = CShaderLinkingGraphBuilder::Link((CShaderLinkingGraphBuilder *)ppLinker, v21, v62);
              v11 = v50;
              if ( v50 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0LL, v50, 0x5F9u);
            }
          }
        }
      }
    }
  }
LABEL_45:
  CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v56);
  return v11;
}
