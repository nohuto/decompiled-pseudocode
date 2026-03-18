/*
 * XREFs of ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180045280
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180047230 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x1800A02CC (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1802698B0 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z @ 0x180006838 (--4-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180045600 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180092F04 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x18009E448 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBAIXZ @ 0x18009FC48 (-ResolveKey@VertexShaderDesc@@QEBAIXZ.c)
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDevice@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDevice@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBUCommonRenderingShadersData@CD3DDevice@@@Z @ 0x1800A020C (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDevice@@V-$CMapEqual.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x1800A27B0 (-Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z.c)
 *     ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x1800CD4D0 (-GetShaderLinkingBody@CommonRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@1@W4D3DShaderPro.c)
 *     ??0ShaderLinkingSamplerDesc@@QEAA@XZ @ 0x1800DD9AC (--0ShaderLinkingSamplerDesc@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA?AV?$span@$$CBE$0?0@gsl@@AEBU1@@Z @ 0x18026B1E8 (-TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA-AV-$span@$$CBE$0-0@gsl@@AEBU1@@Z.c)
 */

__int64 __fastcall CD3DDevice::GetCommonOrCubeMapRenderingShadersNoRefInternal(
        CD3DDevice *this,
        __int64 a2,
        char a3,
        unsigned int *a4,
        struct ID3D11PixelShader **a5)
{
  ShaderLinkingSamplerDesc *v8; // rdi
  __int64 v9; // rbx
  int v10; // edi
  __int128 v11; // xmm1
  int v12; // eax
  __int128 v13; // xmm0
  int v14; // r12d
  unsigned int v15; // edi
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rbx
  unsigned int v23; // eax
  unsigned int v24; // edi
  bool v26; // zf
  __int64 ShaderLinkingBody; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  const void *v31; // r10
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct CD3DPixelShader *v36[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v39; // [rsp+60h] [rbp-A0h]
  unsigned int *v40; // [rsp+68h] [rbp-98h]
  struct ID3D11PixelShader **v41; // [rsp+70h] [rbp-90h]
  _OWORD v42[3]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-58h]
  _BYTE v44[56]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v46; // [rsp+F0h] [rbp-10h]
  __int128 v47; // [rsp+100h] [rbp+0h] BYREF
  bool v48; // [rsp+115h] [rbp+15h]
  bool v49; // [rsp+117h] [rbp+17h]
  int v50; // [rsp+180h] [rbp+80h]
  __int128 v51; // [rsp+188h] [rbp+88h]
  __int128 v52; // [rsp+198h] [rbp+98h]

  v41 = a5;
  v40 = a4;
  LODWORD(v35[0]) = 0;
  memset_0(&v47, 0, 0x80uLL);
  v8 = (ShaderLinkingSamplerDesc *)&v47;
  v9 = 4LL;
  do
  {
    ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc(v8);
    v8 = (ShaderLinkingSamplerDesc *)((char *)v8 + 32);
    --v9;
  }
  while ( v9 );
  v10 = *(_DWORD *)a2;
  v11 = *(_OWORD *)(a2 + 8);
  v12 = *(_DWORD *)a2;
  v50 = -1;
  v47 = v11;
  v49 = (v12 & 4) != 0;
  v52 = 0LL;
  BYTE1(v52) = (v10 & 0x10) != 0;
  BYTE7(v52) = *(_BYTE *)(a2 + 44);
  LOBYTE(v52) = (v10 & 8) != 0;
  v13 = *(_OWORD *)(a2 + 24);
  v14 = *((_DWORD *)this + 156);
  BYTE6(v52) = *(_BYTE *)(a2 + 45);
  BYTE8(v52) = *(_BYTE *)(a2 + 46);
  BYTE4(v52) = a3;
  v51 = v13;
  if ( v14 >= 37632 )
  {
    v50 = *(_DWORD *)(a2 + 40);
    v48 = (v10 & 0x20) != 0;
  }
  v15 = v10 & 3;
  ShaderLinkingConfig::GetLookupKey(&v47, &v45, v15);
  v18 = 0;
  if ( *((int *)this + 370) <= 0 )
    goto LABEL_19;
  v17 = v46;
  v16 = *((int *)this + 370);
  v19 = *((_QWORD *)this + 183);
  v20 = 0LL;
  while ( *(_QWORD *)v19 != v45 || *(_DWORD *)(v19 + 8) != (_DWORD)v46 )
  {
    ++v18;
    ++v20;
    v19 += 16LL;
    if ( v20 >= v16 )
      goto LABEL_19;
  }
  if ( v18 == -1 )
  {
LABEL_19:
    v22 = 0LL;
    v38 = 0LL;
  }
  else
  {
    v21 = *((_QWORD *)this + 184) + 16LL * v18;
    v22 = *(_QWORD *)v21;
    v38 = v22;
    if ( v22 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v22 + 8LL))(v22, v20, v16, v46);
    v23 = *(_DWORD *)(v21 + 8);
    if ( v22 )
    {
      v24 = v35[0];
LABEL_14:
      *v40 = v23;
      *v41 = (struct ID3D11PixelShader *)v22;
      goto LABEL_15;
    }
  }
  v26 = *((_BYTE *)this + 1433) == 0;
  v37 = 0x200000000LL;
  v35[0] = 0LL;
  if ( v26
    || (*(_OWORD *)v36 = *(_OWORD *)CommonRenderingShaderDesc::TryLookupPreCompiledBytecode(v36, a2, v16, v17),
        LODWORD(a2) = v36[0],
        !v36[0]) )
  {
    LOBYTE(v16) = v14 >= 37632;
    ShaderLinkingBody = CommonRenderingShaderBody::GetShaderLinkingBody(v44, v15, v16, v17);
    v42[0] = *(_OWORD *)ShaderLinkingBody;
    v42[1] = *(_OWORD *)(ShaderLinkingBody + 16);
    v42[2] = *(_OWORD *)(ShaderLinkingBody + 32);
    v43 = *(_QWORD *)(ShaderLinkingBody + 48);
    *(_OWORD *)v36 = 0LL;
    v28 = LinkShader((unsigned int)v42, (unsigned int)&v47, (unsigned int)v36, (unsigned int)&v37, (__int64)v35);
    v24 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xFE1u, 0LL);
      goto LABEL_34;
    }
    a2 = (*(int (__fastcall **)(__int64))(*(_QWORD *)v35[0] + 32LL))(v35[0]);
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35[0] + 24LL))(v35[0]);
    if ( a2 < 0 || !v30 && a2 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
  }
  v39 = VertexShaderDesc::ResolveKey((VertexShaderDesc *)&v37);
  v36[0] = 0LL;
  v32 = CD3DPixelShader::Create(this, v31, (unsigned int)a2, v36);
  v24 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xFEEu, 0LL);
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v36);
LABEL_34:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v35);
    goto LABEL_15;
  }
  wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=(&v38, *((_QWORD *)v36[0] + 14));
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v36);
  if ( (unsigned int)CMap<ShaderLinkingConfig::LookupKey,CD3DDevice::CommonRenderingShadersData,CMapEqualHelper<ShaderLinkingConfig::LookupKey,CD3DDevice::CommonRenderingShadersData>>::Add(
                       (char *)this + 1464,
                       &v45,
                       &v38) )
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v35);
    v23 = v39;
    v22 = v38;
    goto LABEL_14;
  }
  v24 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, -2147024882, 0xFF5u, 0LL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v35);
  v22 = v38;
LABEL_15:
  if ( v22 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v22 + 16LL))(v22, v20, v16, v17);
  return v24;
}
