/*
 * XREFs of ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18005F720
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18005DBD0 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x18005FE40 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x1800DA094 (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800E34C0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E3528 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801A70BC (-IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall CCommonRenderingEffect::SetStateOnDevice(
        CCommonRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  int v6; // r12d
  const char *v7; // rcx
  __int64 v9; // rax
  int *v10; // rax
  unsigned int v11; // r8d
  int v12; // esi
  bool v13; // al
  char **v14; // rax
  __int128 v15; // xmm0
  int v16; // r15d
  unsigned int v17; // r14d
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rcx
  CD3DDevice *v21; // rbx
  int CommonOrCubeMapRenderingShadersNoRefInternal; // eax
  unsigned int v23; // ecx
  unsigned int v24; // r14d
  __int64 v25; // r12
  __int64 v26; // rdx
  DXGI_COLOR_SPACE_TYPE v27; // esi
  void (__fastcall *v28)(__int64, __int64, _QWORD, _QWORD); // r15
  _DWORD *v29; // rax
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v34; // rcx
  __int64 v35; // rax
  CD3DDevice *v36; // r11
  char *v37; // r10
  int v38; // r8d
  unsigned int v39; // ecx
  __int64 v40; // rdx
  _QWORD *v41; // r9
  int v42; // ecx
  unsigned int ColorChannelDepth; // r10d
  char v44; // r8
  DXGI_COLOR_SPACE_TYPE v45; // r11d
  int v46; // ebx
  bool v47; // r9
  int v48; // edx
  unsigned int v49; // ecx
  unsigned int v50; // eax
  __int128 v51; // xmm0
  __int64 v52; // rcx
  __int64 (__fastcall ***v53)(_QWORD, _BYTE *); // rcx
  __int64 v54; // rax
  __int64 v55; // xmm0_8
  __int64 v56; // rcx
  __int64 v57; // rcx
  char v58; // al
  __int64 v59; // rcx
  char v60; // al
  __int64 (__fastcall ***v61)(_QWORD, _BYTE *); // rcx
  __int64 (__fastcall ***v62)(_QWORD, __int128 *); // rcx
  __int64 v63; // rax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  __int64 v67; // r10
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // r8
  int v71; // eax
  __int64 v72; // r11
  __int64 *v73; // rcx
  __int64 v74; // rax
  _QWORD *v75; // r9
  int v76; // eax
  DXGI_COLOR_SPACE_TYPE v77; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v78; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v79; // [rsp+40h] [rbp-C0h]
  __int16 v80; // [rsp+50h] [rbp-B0h]
  _QWORD v81[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v82; // [rsp+70h] [rbp-90h]
  __int64 v83; // [rsp+80h] [rbp-80h]
  __int64 v84; // [rsp+88h] [rbp-78h] BYREF
  __int128 v85; // [rsp+90h] [rbp-70h]
  __int128 v86; // [rsp+A0h] [rbp-60h]
  int v87; // [rsp+B0h] [rbp-50h]
  int v88; // [rsp+B4h] [rbp-4Ch]
  CD3DDevice *v89; // [rsp+B8h] [rbp-48h]
  struct ID3D11PixelShader *v90; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v91; // [rsp+C8h] [rbp-38h]
  __int64 v92; // [rsp+D8h] [rbp-28h]
  unsigned int *v93; // [rsp+E0h] [rbp-20h]
  enum DXGI_FORMAT v94[2]; // [rsp+E8h] [rbp-18h]
  DXGI_COLOR_SPACE_TYPE v95; // [rsp+F0h] [rbp-10h]
  __int128 v96; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v97; // [rsp+108h] [rbp+8h] BYREF
  __int128 v98; // [rsp+118h] [rbp+18h] BYREF
  _DWORD v99[3]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v100; // [rsp+134h] [rbp+34h]
  int v101; // [rsp+13Ch] [rbp+3Ch]
  int v102; // [rsp+140h] [rbp+40h]
  __int128 v103; // [rsp+144h] [rbp+44h]
  int v104; // [rsp+154h] [rbp+54h]
  int v105; // [rsp+158h] [rbp+58h]
  _BYTE v106[16]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v107[16]; // [rsp+170h] [rbp+70h] BYREF

  v3 = 0LL;
  v4 = *((_QWORD *)a2 + 4);
  v6 = *((_DWORD *)a2 + 27);
  v7 = "NoOp";
  v89 = (CD3DDevice *)*((_QWORD *)a2 + 1);
  v92 = *((_QWORD *)a2 + 2);
  v93 = a3;
  v84 = 0LL;
  v88 = 0;
  v9 = *((_QWORD *)a2 + 6);
  v90 = 0LL;
  *(_QWORD *)&v85 = "NoOp";
  DWORD2(v85) = 0;
  *(_QWORD *)&v86 = "NoOp";
  DWORD2(v86) = 0;
  v96 = 0LL;
  v97 = 0LL;
  if ( v9 )
  {
    v10 = (int *)(v9 + 16);
  }
  else
  {
    if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                       + (unsigned int)tls_index)
                                                                     + 4LL) )
    {
      Init_thread_header(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
      if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA == -1 )
      {
        `CLightsMask::NoLights'::`2'::noLights = -1;
        Init_thread_footer(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
      }
    }
    v10 = &`CLightsMask::NoLights'::`2'::noLights;
    v7 = "NoOp";
  }
  v87 = *v10;
  BYTE1(v88) = v6 == 1;
  BYTE2(v88) = *((_BYTE *)a2 + 82) == 2;
  *(_QWORD *)&v98 = "NoOp";
  v11 = 0;
  DWORD2(v98) = 0;
  v12 = -2003292288;
  v13 = v6 == 1 && !ColorConversion::IsHDRColorSpace(DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709);
  LOBYTE(v88) = v13;
  v14 = (char **)&ColorConversion::g_rgShaders;
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      v15 = v98;
      goto LABEL_8;
    }
    v14 = &off_180341F90;
  }
  v15 = *(_OWORD *)v14;
  v12 = 0;
  v98 = *(_OWORD *)v14;
  v11 = DWORD2(v98);
LABEL_8:
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, v12, 0x8Fu, 0LL);
    return (unsigned int)v12;
  }
  if ( v11 > 1 )
    v86 = v15;
  v16 = v84;
  if ( *(_BYTE *)(v4 + 368) )
  {
    v16 = v84 | 0x10;
    LODWORD(v84) = v84 | 0x10;
  }
  if ( *((_DWORD *)a2 + 16) == 22 )
  {
    v16 |= 8u;
    LODWORD(v84) = v16;
  }
  v17 = 0;
  v77 = v95;
  v18 = 0LL;
  while ( 1 )
  {
    v19 = 48 * v18;
    v20 = *((_QWORD *)this + 6 * v18 + 2);
    if ( !v20 && !*(_QWORD *)((char *)this + v19 + 24) )
      goto LABEL_18;
    v78 = 0LL;
    if ( v20 )
    {
      if ( (*(int (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v20 + 48LL))(v20, &v78) < 0 )
        goto LABEL_31;
    }
    else
    {
      v78 = *(_QWORD **)((char *)this + v19 + 24);
      v52 = (__int64)v78 + *(int *)(v78[1] + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 8LL))(v52);
    }
    v81[0] = 0LL;
    if ( (*(int (__fastcall **)(_QWORD *, char *, _QWORD *))(*v78 + 48LL))(v78, (char *)this + v19 + 32, v81) < 0 )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v81);
LABEL_31:
      if ( v78 )
      {
        v34 = (__int64)v78 + *(int *)(v78[1] + 4LL) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      }
      v35 = 0LL;
      goto LABEL_34;
    }
    v53 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(int *)(*(_QWORD *)(v81[0] + 8LL) + 12LL) + v81[0] + 8LL);
    v54 = (**v53)(v53, v106);
    v55 = *(_QWORD *)v54;
    v77 = *(_DWORD *)(v54 + 8);
    *(_QWORD *)v94 = v55;
    v83 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v81[0] + 8LL))(v81[0]);
    if ( v81[0] )
    {
      v56 = *(int *)(*(_QWORD *)(v81[0] + 8LL) + 4LL) + v81[0] + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v78);
    v35 = v83;
LABEL_34:
    v36 = v89;
    *((_QWORD *)&v96 + v18) = v35;
    v37 = (char *)this + 2 * v18;
    v38 = 0;
    v39 = (unsigned __int8)*(_WORD *)&v37[v18 + 112];
    v79 = *(_WORD *)&v37[v18 + 112];
    v40 = HIBYTE(v79) + 4 * v39;
    v41 = (_QWORD *)((char *)v36 + 32 * (_DWORD)v40 + 8 * (unsigned int)(unsigned __int8)v37[v18 + 114] + 1808);
    v83 = (__int64)v41;
    if ( *v41 )
      goto LABEL_35;
    v82 = *(_WORD *)&v37[v18 + 112];
    if ( HIBYTE(v82) && v37[v18 + 114] )
      v64 = 37120;
    else
      v64 = 37632;
    if ( *((_DWORD *)v36 + 156) < v64 )
      break;
    v80 = *(_WORD *)&v37[v18 + 112];
    if ( (_BYTE)v80 )
      v65 = 21;
    else
      v65 = 0;
    v99[0] = v65;
    v66 = ExtendMode::ToD3D11TextureAddressMode(HIBYTE(v80), v40, 0LL);
    v68 = *(unsigned __int8 *)(v18 + v67 + 114);
    v99[1] = v66;
    v71 = ExtendMode::ToD3D11TextureAddressMode(v68, v69, v70);
    v73 = *(__int64 **)(v72 + 592);
    v99[2] = v71;
    v100 = 3LL;
    v101 = 1;
    v102 = 8;
    v103 = 0LL;
    v104 = 0;
    v105 = 2139095039;
    v74 = *v73;
    *v75 = 0LL;
    v76 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, _QWORD *))(v74 + 184))(v73, v99, v75);
    LODWORD(v78) = v76;
    v38 = v76;
    if ( v76 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v76, 0xE8Bu, 0LL);
      v38 = (int)v78;
      goto LABEL_36;
    }
    v41 = (_QWORD *)v83;
LABEL_35:
    *((_QWORD *)&v97 + v18) = *v41;
LABEL_36:
    if ( v38 < 0 )
      goto LABEL_146;
    if ( !v17 )
    {
      v16 |= 1u;
      LODWORD(v84) = v16;
      if ( *((_BYTE *)this + v19 + 56) )
        goto LABEL_39;
      v57 = *(_QWORD *)((char *)this + v19 + 16);
      if ( v57 )
      {
        v58 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 8LL))(v57);
        v42 = v16;
        if ( v58 )
          goto LABEL_39;
      }
      else
      {
        v61 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)((char *)this + v19 + 24)
                                                        + 8LL
                                                        + *(int *)(*(_QWORD *)(*(_QWORD *)((char *)this + v19 + 24) + 8LL)
                                                                 + 8LL));
        if ( *(_DWORD *)((**v61)(v61, v107) + 4) == 3 )
        {
LABEL_39:
          v16 |= 4u;
          LODWORD(v84) = v16;
        }
        v42 = v16;
      }
      if ( *((_BYTE *)this + 2 * v18 + v18 + 112) == 2 )
      {
        v16 = v42 | 0x20;
        LODWORD(v84) = v42 | 0x20;
      }
      *(_QWORD *)&v91 = "NoOp";
      DWORD2(v91) = 0;
      ColorChannelDepth = GetColorChannelDepth(v94[0]);
      LODWORD(v78) = ColorChannelDepth;
      if ( *((_BYTE *)this + v19 + 56) )
      {
LABEL_44:
        v44 = 1;
      }
      else
      {
        v59 = *(_QWORD *)((char *)this + v19 + 16);
        if ( v59 )
        {
          v60 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 8LL))(v59);
          ColorChannelDepth = (unsigned int)v78;
          v44 = v60;
        }
        else
        {
          v62 = (__int64 (__fastcall ***)(_QWORD, __int128 *))(*(_QWORD *)((char *)this + v19 + 24)
                                                             + 8LL
                                                             + *(int *)(*(_QWORD *)(*(_QWORD *)((char *)this + v19 + 24)
                                                                                  + 8LL)
                                                                      + 8LL));
          v63 = (**v62)(v62, &v98);
          ColorChannelDepth = (unsigned int)v78;
          if ( *(_DWORD *)(v63 + 4) == 3 )
            goto LABEL_44;
          v44 = 0;
        }
      }
      v45 = v77;
      v46 = -2003292288;
      v47 = v6 == 1 && !ColorConversion::IsHDRColorSpace(v77);
      v48 = 0;
      if ( v45 )
      {
        switch ( v45 )
        {
          case DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709:
            if ( v6 )
            {
              if ( v6 == 1 )
              {
                v48 = 40;
                v46 = 0;
                v49 = 40;
                goto LABEL_51;
              }
              if ( v6 != 12 )
                goto LABEL_50;
              v48 = 4;
            }
            else
            {
              v48 = 2;
            }
            break;
          case DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P709:
            if ( v6 )
            {
              if ( v6 != 1 )
                goto LABEL_50;
              if ( ColorChannelDepth == 8 )
              {
                v48 = 16;
                v46 = 0;
                v49 = 16;
                goto LABEL_51;
              }
              if ( ColorChannelDepth == 10 )
              {
                v48 = 24;
                break;
              }
            }
            else
            {
              if ( ColorChannelDepth == 8 )
              {
                v48 = 14;
                v46 = 0;
                v49 = 14;
                goto LABEL_51;
              }
              if ( ColorChannelDepth == 10 )
              {
LABEL_112:
                v48 = 22;
                break;
              }
            }
            goto LABEL_50;
          case DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P2020:
            if ( !v6 )
              goto LABEL_112;
            if ( v6 != 1 )
              goto LABEL_50;
            v48 = 24;
            break;
          case DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020:
            if ( v6 )
            {
              if ( v6 == 1 )
              {
                v48 = 12;
                v46 = 0;
                v49 = 12;
                goto LABEL_51;
              }
              if ( v6 != 12 )
                goto LABEL_50;
            }
            else
            {
              v48 = 10;
            }
            break;
          case DXGI_COLOR_SPACE_RGB_STUDIO_G2084_NONE_P2020:
            if ( v6 )
            {
              if ( v6 == 1 )
              {
                v48 = 36;
                v46 = 0;
                v49 = 36;
                goto LABEL_51;
              }
              if ( v6 != 12 )
                goto LABEL_50;
              v48 = 38;
            }
            else
            {
              v48 = 34;
            }
            break;
          case DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P709:
            if ( v6 )
            {
              if ( v6 != 1 )
                goto LABEL_50;
              if ( ColorChannelDepth == 8 )
              {
                v48 = 20;
                v46 = 0;
                v49 = 20;
                goto LABEL_51;
              }
              if ( ColorChannelDepth == 10 )
              {
                v48 = 28;
                break;
              }
            }
            else
            {
              if ( ColorChannelDepth == 8 )
              {
                v48 = 18;
                v46 = 0;
                v49 = 18;
                goto LABEL_51;
              }
              if ( ColorChannelDepth == 10 )
              {
                v48 = 26;
                break;
              }
            }
            goto LABEL_50;
          case DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P2020:
            if ( v6 )
            {
              if ( v6 != 1 )
                goto LABEL_50;
              v48 = 32;
            }
            else
            {
              v48 = 30;
            }
            break;
          default:
            goto LABEL_50;
        }
LABEL_49:
        v46 = 0;
      }
      else
      {
        if ( !v6 )
          goto LABEL_49;
        if ( v6 == 1 )
        {
          v48 = 6;
          goto LABEL_49;
        }
      }
LABEL_50:
      v49 = v48;
      if ( v46 < 0 )
      {
        v51 = v91;
      }
      else
      {
LABEL_51:
        v50 = v48 + 1;
        if ( !v44 )
          v50 = v49;
        v49 = 2 * v50;
        v51 = *((_OWORD *)&ColorConversion::g_rgShaders + v50);
        v91 = v51;
      }
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v46, 0xC1u, 0LL);
        return (unsigned int)v46;
      }
      if ( DWORD2(v91) > 1 )
        v85 = v51;
      if ( !v47 )
        LOBYTE(v88) = 0;
      goto LABEL_18;
    }
    v16 |= 2u;
    LODWORD(v84) = v16;
LABEL_18:
    ++v17;
    ++v18;
    if ( v17 >= 2 )
    {
      v21 = v89;
      v77 = 0x80000000;
      CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDevice::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                       v89,
                                                       (__int64)&v84,
                                                       0,
                                                       (unsigned int *)&v77,
                                                       &v90);
      v24 = CommonOrCubeMapRenderingShadersNoRefInternal;
      if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, 0xDDu, 0LL);
        return v24;
      }
      v25 = v92;
      v26 = 0LL;
      v27 = v77;
      v28 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v92 + 88LL);
      if ( *((int *)v21 + 364) <= 0 )
        goto LABEL_150;
      v29 = (_DWORD *)*((_QWORD *)v21 + 180);
      v30 = *((int *)v21 + 364);
      v31 = 0LL;
      while ( *v29 != v77 )
      {
        v26 = (unsigned int)(v26 + 1);
        ++v31;
        ++v29;
        if ( v31 >= v30 )
          goto LABEL_150;
      }
      if ( (_DWORD)v26 == -1 )
      {
LABEL_150:
        v32 = 0LL;
      }
      else
      {
        v32 = *(_QWORD *)(*((_QWORD *)v21 + 181) + 8LL * (int)v26);
        if ( !v32 )
        {
LABEL_28:
          v28(v25, v3, 0LL, 0LL);
          (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v25 + 72LL))(
            v25,
            v90,
            0LL,
            0LL);
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v25 + 64LL))(v25, 0LL, 2LL, &v96);
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v25 + 80LL))(v25, 0LL, 2LL, &v97);
          *v93 = v27;
          return v24;
        }
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v32 + 8LL))(v32, v26, v30);
        v3 = v32;
      }
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      goto LABEL_28;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, -2147024809, 0xE86u, 0LL);
  v38 = -2147024809;
LABEL_146:
  v46 = v38;
  MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0xA8u, 0LL);
  return (unsigned int)v46;
}
