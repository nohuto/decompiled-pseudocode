/*
 * XREFs of ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x18003A800
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x180021B54 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x180023250 (-Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 *     ??1CSurfaceShaderComposer@@QEAA@XZ @ 0x180023F74 (--1CSurfaceShaderComposer@@QEAA@XZ.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBAIXZ @ 0x180032EF4 (-ResolveKey@VertexShaderDesc@@QEBAIXZ.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180039660 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@.c)
 *     ?Add@?$CMap@IV?$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@V?$CMapEqualHelper@IV?$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@@@@@QEAAHAEBIAEBV?$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18003AEC8 (-Add@-$CMap@IV-$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@V-$CMapEqualHel.c)
 *     ?size_bytes@?$span@$$CBUD3D11_INPUT_ELEMENT_DESC@@$0?0@gsl@@QEBA_KXZ @ 0x18003AFDC (-size_bytes@-$span@$$CBUD3D11_INPUT_ELEMENT_DESC@@$0-0@gsl@@QEBA_KXZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CD3DDevice::GenerateShaders(CD3DDevice *this)
{
  unsigned __int8 v2; // r15
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // esi
  int CommonOrCubeMapRenderingShadersNoRefInternal; // eax
  unsigned int v15; // ecx
  unsigned __int64 v16; // r10
  unsigned int v17; // r14d
  signed int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // r13
  char v21; // cl
  unsigned int v22; // eax
  __int128 v23; // xmm0
  __int64 v24; // r15
  size_t v25; // rax
  size_t v26; // rax
  __int64 v27; // rbx
  gsl::details *v28; // rcx
  gsl::details *v29; // rcx
  __int64 v30; // rbx
  _OWORD *v31; // r12
  __int64 *v32; // r15
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int i; // esi
  __int64 v36; // r14
  __int64 (__fastcall *v37)(__int64, char *, char *); // r15
  char *v38; // rbx
  __int64 v39; // rcx
  unsigned int v40; // esi
  __int64 v41; // r14
  __int64 (__fastcall *v42)(__int64, __int16 *, char *); // r15
  char *v43; // rbx
  __int64 v44; // rcx
  unsigned int j; // esi
  __int64 v46; // r14
  __int64 (__fastcall *v47)(__int64, char *, char *); // r15
  char *v48; // rbx
  __int64 v49; // rcx
  unsigned int v50; // ecx
  CSurfaceShaderComposer *v51; // rdi
  unsigned int v53; // [rsp+28h] [rbp-E0h]
  bool v54; // [rsp+48h] [rbp-C0h]
  unsigned int v55[4]; // [rsp+50h] [rbp-B8h] BYREF
  struct ID3D11PixelShader *v56; // [rsp+60h] [rbp-A8h] BYREF
  int v57; // [rsp+68h] [rbp-A0h]
  __int128 v58; // [rsp+70h] [rbp-98h] BYREF
  void *Src_8[2]; // [rsp+80h] [rbp-88h] BYREF
  int v60; // [rsp+90h] [rbp-78h]
  const char *v61; // [rsp+98h] [rbp-70h]
  int v62; // [rsp+A0h] [rbp-68h]
  int v63; // [rsp+A8h] [rbp-60h]
  int v64; // [rsp+ACh] [rbp-5Ch]
  __int128 v65; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v66[3]; // [rsp+C0h] [rbp-48h] BYREF
  _OWORD v67[26]; // [rsp+D8h] [rbp-30h] BYREF

  v57 = *((_DWORD *)this + 146);
  v2 = v57 >= 37632;
  v3 = 0LL;
  v54 = v57 >= 37632;
  v55[0] = 0;
  v4 = 0;
  do
  {
    if ( ((v4 & 0x10) == 0 || *((_DWORD *)this + 233)) && v2 >= (unsigned __int8)((v4 & 4) != 0) )
    {
      v65 = *((_OWORD *)&unk_1802CB0A0 + v4);
      v5 = v65;
      if ( (_QWORD)v65 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          McTemplateU0q_EventWriteTransfer(v3, &EVTDESC_D3DSHADER_CREATE_Start, 0LL);
        v6 = (__int64 *)*((_QWORD *)this + 69);
        v7 = *v6;
        v56 = 0LL;
        v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD, struct ID3D11PixelShader **))(v7 + 96))(
               v6,
               *((_QWORD *)&v65 + 1),
               v5,
               0LL,
               &v56);
        v10 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1C5u, 0LL);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v56);
          return v10;
        }
        CMap<unsigned int,wil::com_ptr_t<ID3D11VertexShader,wil::err_returncode_policy>,CMapEqualHelper<unsigned int,wil::com_ptr_t<ID3D11VertexShader,wil::err_returncode_policy>>>::Add(
          (char *)this + 1512,
          v55,
          &v56);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          McTemplateU0q_EventWriteTransfer(v11, &EVTDESC_D3DSHADER_CREATE_Stop, 0LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v56);
        LODWORD(v3) = v55[0];
      }
    }
    v3 = (unsigned int)(v3 + 1);
    v55[0] = v3;
    v4 = v3;
  }
  while ( (unsigned int)v3 < 0x20 );
  v12 = 0;
  v13 = 0;
  do
  {
    v63 = -1;
    Src_8[1] = "NoOp";
    Src_8[0] = (void *)v12;
    v64 = 0;
    v60 = 0;
    v61 = "NoOp";
    v62 = 0;
    CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDevice::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                     this,
                                                     (const struct CommonRenderingShaderDesc *)Src_8,
                                                     0,
                                                     v55,
                                                     &v56);
    v10 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v53 = 471;
      goto LABEL_67;
    }
    v16 = 1LL;
    if ( ((__int64)Src_8[0] & 1) == 0 )
      goto LABEL_18;
    LODWORD(Src_8[0]) |= 4u;
    CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDevice::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                     this,
                                                     (const struct CommonRenderingShaderDesc *)Src_8,
                                                     0,
                                                     v55,
                                                     &v56);
    v10 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v53 = 479;
LABEL_67:
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, v53, 0LL);
      return v10;
    }
    v16 = 1LL;
LABEL_18:
    v12 = v13 + 1;
    v13 = v12;
  }
  while ( v12 < 4 );
  v17 = 0;
  v18 = 0;
  while ( 2 )
  {
    v19 = 0;
    v20 = v18;
    do
    {
      *(_QWORD *)v55 = 0LL;
      v21 = 0;
      BYTE2(v55[0]) = v16;
      if ( v20 - 2 <= v16 )
        v21 = v16;
      LOBYTE(v55[0]) = v21;
      v55[1] = ((v20 - 1) & 0xFFFFFFFFFFFFFFFDuLL) != 0 ? 2 : 4;
      HIBYTE(v55[0]) = v19 != 0;
      v22 = VertexShaderDesc::ResolveKey((VertexShaderDesc *)v55);
      if ( v2 >= (unsigned __int8)(v16 & (v22 >> 2)) )
      {
        v23 = *((_OWORD *)&unk_1802CB0A0 + v22);
        v56 = (struct ID3D11PixelShader *)*((_QWORD *)&unk_1802CB0A0 + 2 * v22);
        *(_OWORD *)Src_8 = v23;
        if ( v56 )
        {
          v58 = *((_OWORD *)&unk_1802CB400 + v20);
          *(_OWORD *)v55 = *((_OWORD *)&unk_1802CB320 + (int)v19);
          v24 = *(_QWORD *)v55;
          if ( *(_QWORD *)v55 )
          {
            v25 = gsl::span<D3D11_INPUT_ELEMENT_DESC const,-1>::size_bytes(&v58);
            memcpy_0(v67, *((const void **)&v58 + 1), v25);
            v26 = gsl::span<D3D11_INPUT_ELEMENT_DESC const,-1>::size_bytes(v55);
            v27 = v58;
            memcpy_0(&v67[2 * v58], *(const void **)&v55[2], v26);
            gsl::details::extent_type<-1>::extent_type<-1>(v66, v27 + v24);
            if ( v66[0] == -1 )
            {
              gsl::details::terminate(v28);
              JUMPOUT(0x18003ADC8LL);
            }
            v30 = *(_QWORD *)gsl::details::extent_type<-1>::extent_type<-1>(&v65, v66[0]);
            if ( v30 == -1 )
            {
              gsl::details::terminate(v29);
              __debugbreak();
            }
            v31 = v67;
          }
          else
          {
            v31 = (_OWORD *)*((_QWORD *)&v58 + 1);
            LODWORD(v30) = v58;
          }
          *(_QWORD *)v55 = *((_QWORD *)this + 69);
          v32 = (__int64 *)((char *)this + 32 * v19 + 8 * v17 + 1592);
          v33 = *v32;
          v34 = **(_QWORD **)v55;
          *v32 = 0LL;
          *(_QWORD *)&v58 = *(_QWORD *)(v34 + 88);
          if ( v33 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
          CommonOrCubeMapRenderingShadersNoRefInternal = ((__int64 (__fastcall *)(_QWORD, _OWORD *, _QWORD, void *, struct ID3D11PixelShader *, char *))v58)(
                                                           *(_QWORD *)v55,
                                                           v31,
                                                           (unsigned int)v30,
                                                           Src_8[1],
                                                           v56,
                                                           (char *)this + 32 * v19 + 8 * v17 + 1592);
          v10 = CommonOrCubeMapRenderingShadersNoRefInternal;
          if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
          {
            v53 = 525;
            goto LABEL_67;
          }
          v2 = v54;
          v16 = 1LL;
        }
      }
      v19 += v16;
    }
    while ( v19 < 2 );
    v18 = ++v17;
    if ( v17 < 4 )
      continue;
    break;
  }
  for ( i = 0; i < 0x18; ++i )
  {
    v36 = *((_QWORD *)this + 69);
    v37 = *(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v36 + 160LL);
    v38 = (char *)this + 8 * i;
    v39 = *((_QWORD *)v38 + 211);
    *((_QWORD *)v38 + 211) = 0LL;
    if ( v39 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
    CommonOrCubeMapRenderingShadersNoRefInternal = v37(v36, &byte_180373FA0[264 * i], v38 + 1688);
    v10 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v53 = 534;
      goto LABEL_67;
    }
  }
  v40 = 0;
  do
  {
    v41 = *((_QWORD *)this + 69);
    v42 = *(__int64 (__fastcall **)(__int64, __int16 *, char *))(*(_QWORD *)v41 + 176LL);
    v43 = (char *)this + 8 * v40;
    v44 = *((_QWORD *)v43 + 283);
    *((_QWORD *)v43 + 283) = 0LL;
    if ( v44 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    CommonOrCubeMapRenderingShadersNoRefInternal = v42(v41, &_ImageBase[20 * v40 + 1886372], v43 + 2264);
    v10 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v53 = 540;
      goto LABEL_67;
    }
    ++v40;
  }
  while ( !v40 );
  for ( j = 0; j < 4; ++j )
  {
    v46 = *((_QWORD *)this + 69);
    v47 = *(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v46 + 168LL);
    v48 = (char *)this + 8 * j;
    v49 = *((_QWORD *)v48 + 284);
    *((_QWORD *)v48 + 284) = 0LL;
    if ( v49 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    CommonOrCubeMapRenderingShadersNoRefInternal = v47(v46, &byte_180375860[52 * j], v48 + 2272);
    v10 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v53 = 546;
      goto LABEL_67;
    }
  }
  if ( v57 >= 37632 )
  {
    *(_OWORD *)Src_8 = (unsigned __int64)this + 1584;
    LOBYTE(v60) = 1;
    v10 = CSurfaceShaderComposer::Create(this, (struct CSurfaceShaderComposer **)&Src_8[1]);
    if ( (_BYTE)v60 )
    {
      v51 = *(CSurfaceShaderComposer **)Src_8[0];
      *(_QWORD *)Src_8[0] = Src_8[1];
      if ( v51 )
      {
        CSurfaceShaderComposer::~CSurfaceShaderComposer(v51);
        operator delete(v51, 0x80uLL);
      }
    }
    if ( (v10 & 0x80000000) != 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v10, 0x229u, 0LL);
  }
  return v10;
}
