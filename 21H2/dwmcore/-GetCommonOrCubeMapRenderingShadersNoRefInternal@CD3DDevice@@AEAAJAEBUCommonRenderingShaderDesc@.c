/*
 * XREFs of ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180039660
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800381B0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x18003A800 (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1802AAC10 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBAIXZ @ 0x180032EF4 (-ResolveKey@VertexShaderDesc@@QEBAIXZ.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180033FB0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180039A40 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDevice@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDevice@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBUCommonRenderingShadersData@CD3DDevice@@@Z @ 0x18003A778 (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDevice@@V-$CMapEqual.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x18003B49C (-Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x1800EDD18 (-GetShaderLinkingBody@CommonRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@1@W4D3DShaderPro.c)
 *     ??4?$com_ptr_t@UID3D11PixelShader@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUID3D11PixelShader@@@Z @ 0x1800F40E0 (--4-$com_ptr_t@UID3D11PixelShader@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUID3D11PixelS.c)
 *     ??0ShaderLinkingSamplerDesc@@QEAA@XZ @ 0x1800FC018 (--0ShaderLinkingSamplerDesc@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA?AV?$span@$$CBE$0?0@gsl@@AEBU1@@Z @ 0x1802AD414 (-TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA-AV-$span@$$CBE$0-0@gsl@@AEBU1@@Z.c)
 */

__int64 __fastcall CD3DDevice::GetCommonOrCubeMapRenderingShadersNoRefInternal(
        CD3DDevice *this,
        const struct CommonRenderingShaderDesc *a2,
        char a3,
        unsigned int *a4,
        struct ID3D11PixelShader **a5)
{
  ShaderLinkingSamplerDesc *v5; // rdi
  __int64 v9; // rbx
  int v10; // ebx
  __int128 v11; // xmm1
  int v12; // eax
  __int128 v13; // xmm0
  int v14; // r12d
  unsigned int v15; // ebx
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rdx
  struct ID3D11PixelShader *v20; // rdi
  bool v21; // zf
  __int64 ShaderLinkingBody; // rax
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // ebx
  __int64 v26; // rbx
  struct CD3DPixelShader *v27; // rsi
  unsigned int v28; // r10d
  int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // eax
  __int64 v33; // r14
  struct ID3D10Blob *v35[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct CD3DPixelShader *v36[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct ID3D11PixelShader *v37; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v40; // [rsp+68h] [rbp-98h]
  struct ID3D11PixelShader **v41; // [rsp+70h] [rbp-90h]
  _OWORD v42[3]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-58h]
  char v44[56]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v46; // [rsp+F0h] [rbp-10h]
  __int128 v47; // [rsp+100h] [rbp+0h] BYREF
  __int128 v48; // [rsp+110h] [rbp+10h]
  __int128 v49; // [rsp+120h] [rbp+20h]
  __int128 v50; // [rsp+130h] [rbp+30h]
  __int128 v51; // [rsp+140h] [rbp+40h]
  __int128 v52; // [rsp+150h] [rbp+50h]
  __int128 v53; // [rsp+160h] [rbp+60h]
  __int128 v54; // [rsp+170h] [rbp+70h]
  int v55; // [rsp+180h] [rbp+80h]
  __int128 v56; // [rsp+188h] [rbp+88h]
  __int128 v57; // [rsp+198h] [rbp+98h]

  v5 = (ShaderLinkingSamplerDesc *)&v47;
  v41 = a5;
  v47 = 0LL;
  v40 = a4;
  v48 = 0LL;
  v49 = 0LL;
  LODWORD(v35[0]) = 0;
  v9 = 4LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  do
  {
    ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc(v5);
    v5 = (ShaderLinkingSamplerDesc *)((char *)v5 + 32);
    --v9;
  }
  while ( v9 );
  v10 = *(_DWORD *)a2;
  v11 = *(_OWORD *)((char *)a2 + 8);
  v12 = *(_DWORD *)a2;
  v55 = -1;
  v47 = v11;
  BYTE8(v48) = (v12 & 4) != 0;
  v57 = 0LL;
  BYTE1(v57) = (v10 & 0x10) != 0;
  BYTE7(v57) = *((_BYTE *)a2 + 44);
  LOBYTE(v57) = (v10 & 8) != 0;
  v13 = *(_OWORD *)((char *)a2 + 24);
  v14 = *((_DWORD *)this + 146);
  BYTE6(v57) = *((_BYTE *)a2 + 45);
  BYTE8(v57) = *((_BYTE *)a2 + 46);
  BYTE4(v57) = a3;
  v56 = v13;
  if ( v14 >= 37632 )
  {
    v55 = *((_DWORD *)a2 + 10);
    BYTE5(v48) = (v10 & 0x20) != 0;
  }
  v15 = v10 & 3;
  ShaderLinkingConfig::GetLookupKey(&v47, &v45, v15);
  v17 = 0;
  if ( *((int *)this + 388) <= 0 )
    goto LABEL_10;
  v16 = *((int *)this + 388);
  v18 = *((_QWORD *)this + 192);
  v19 = 0LL;
  while ( *(_QWORD *)v18 != v45 || *(_DWORD *)(v18 + 8) != (_DWORD)v46 )
  {
    ++v17;
    ++v19;
    v18 += 16LL;
    if ( v19 >= v16 )
      goto LABEL_10;
  }
  if ( v17 == -1 )
  {
LABEL_10:
    v20 = 0LL;
    v37 = 0LL;
  }
  else
  {
    v33 = *((_QWORD *)this + 193) + 16LL * v17;
    v20 = *(struct ID3D11PixelShader **)v33;
    v37 = v20;
    if ( v20 )
    {
      ((void (__fastcall *)(struct ID3D11PixelShader *, __int64, __int64, __int64))v20->lpVtbl->AddRef)(
        v20,
        v19,
        v16,
        v46);
      v32 = *(_DWORD *)(v33 + 8);
      v25 = (unsigned int)v35[0];
      goto LABEL_21;
    }
    v38 = *(_DWORD *)(v33 + 8);
  }
  v21 = *((_BYTE *)this + 1505) == 0;
  v39 = 0x200000000LL;
  v35[0] = 0LL;
  if ( v21 || (*(_OWORD *)v36 = *(_OWORD *)CommonRenderingShaderDesc::TryLookupPreCompiledBytecode(v36, a2), !v36[0]) )
  {
    LOBYTE(v16) = v14 >= 37632;
    ShaderLinkingBody = CommonRenderingShaderBody::GetShaderLinkingBody(v44, v15, v16);
    v42[0] = *(_OWORD *)ShaderLinkingBody;
    v42[1] = *(_OWORD *)(ShaderLinkingBody + 16);
    v42[2] = *(_OWORD *)(ShaderLinkingBody + 32);
    v43 = *(_QWORD *)(ShaderLinkingBody + 48);
    v36[0] = 0LL;
    v36[1] = 0LL;
    v23 = LinkShader((__int64)v42, (__int64)&v47, v36, (__int64)&v39, v35);
    v25 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xCCFu, 0LL);
      goto LABEL_34;
    }
    v26 = ((int (__fastcall *)(struct ID3D10Blob *))v35[0]->lpVtbl->GetBufferSize)(v35[0]);
    v27 = (struct CD3DPixelShader *)((__int64 (__fastcall *)(struct ID3D10Blob *))v35[0]->lpVtbl->GetBufferPointer)(v35[0]);
    gsl::details::extent_type<-1>::extent_type<-1>(v36, v26);
    if ( v36[0] == (struct CD3DPixelShader *)-1LL || !v27 && v36[0] )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
  }
  else
  {
    v27 = v36[1];
  }
  v38 = VertexShaderDesc::ResolveKey((VertexShaderDesc *)&v39);
  v36[0] = 0LL;
  v29 = CD3DPixelShader::Create(this, v27, v28, v36);
  v25 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xCDCu, 0LL);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v36);
LABEL_34:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v35);
    goto LABEL_22;
  }
  wil::com_ptr_t<ID3D11PixelShader,wil::err_returncode_policy>::operator=(&v37, *((_QWORD *)v36[0] + 12));
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v36);
  if ( (unsigned int)CMap<ShaderLinkingConfig::LookupKey,CD3DDevice::CommonRenderingShadersData,CMapEqualHelper<ShaderLinkingConfig::LookupKey,CD3DDevice::CommonRenderingShadersData>>::Add(
                       (char *)this + 1536,
                       &v45,
                       &v37) )
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v35);
    v32 = v38;
    v20 = v37;
LABEL_21:
    *v40 = v32;
    *v41 = v20;
    goto LABEL_22;
  }
  v25 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, -2147024882, 0xCE3u, 0LL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v35);
  v20 = v37;
LABEL_22:
  if ( v20 )
    ((void (__fastcall *)(struct ID3D11PixelShader *))v20->lpVtbl->Release)(v20);
  return v25;
}
