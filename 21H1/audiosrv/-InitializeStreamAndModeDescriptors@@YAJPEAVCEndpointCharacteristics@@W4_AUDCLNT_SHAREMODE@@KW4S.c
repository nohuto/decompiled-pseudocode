/*
 * XREFs of ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x1800709E8
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014880 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EB68C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800211E4 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180023580 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180037DE8 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180038064 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?reset@?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_GUID@@@Z @ 0x180045068 (-reset@-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wistd@@.c)
 *     ?GetMMDevice@CEndpointCharacteristics@@QEAAXPEAPEAUIMMDevice@@@Z @ 0x180046D08 (-GetMMDevice@CEndpointCharacteristics@@QEAAXPEAPEAUIMMDevice@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     memset_0 @ 0x18006B59C (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006CEBC (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z @ 0x1800ECBE8 (-GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18011D214 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall InitializeStreamAndModeDescriptors(
        CEndpointCharacteristics *a1,
        int a2,
        unsigned int a3,
        int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        _QWORD *a6,
        IID *a7,
        _OWORD *a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        IID *a15,
        __int64 a16,
        GUID *a17,
        __int64 a18,
        __int64 a19,
        char a20,
        char a21,
        char a22,
        __int64 a23,
        __int64 a24,
        _QWORD *a25,
        _QWORD *a26)
{
  unsigned int v26; // r15d
  int v27; // r13d
  CEndpointCharacteristics *v28; // rsi
  IID *v29; // r14
  unsigned int *v30; // rbx
  char *v31; // rdi
  unsigned int v32; // esi
  __int64 v33; // r9
  __int64 v34; // rdx
  unsigned int *v35; // rax
  int v36; // edx
  int StreamEffect; // eax
  __int64 v38; // rdx
  __int64 v39; // rdx
  unsigned int v40; // r13d
  unsigned int *v41; // rax
  SIZE_T v42; // rsi
  unsigned int *v43; // rax
  unsigned int v44; // r8d
  unsigned int v45; // ecx
  GUID v46; // xmm0
  SIZE_T v47; // rsi
  unsigned int *v48; // rax
  unsigned int v49; // r15d
  int v50; // esi
  unsigned int v51; // ecx
  void **v52; // rcx
  int v53; // eax
  unsigned __int64 v54; // r9
  __int64 v55; // rdx
  unsigned int v56; // r14d
  SIZE_T v57; // rsi
  unsigned int *v58; // rax
  unsigned int v59; // r8d
  unsigned int v60; // ecx
  unsigned int *v61; // rax
  GUID *v62; // rax
  int ContainerProperty; // eax
  _QWORD *v64; // rcx
  int ModeEffect; // eax
  unsigned __int64 v66; // r9
  __int64 v67; // rdx
  int v68; // r15d
  unsigned int v69; // r14d
  __int64 v70; // rsi
  char *v71; // rax
  unsigned int v72; // r8d
  unsigned int v73; // ecx
  CEndpointCharacteristics *v74; // rax
  unsigned int *v75; // rax
  char *v76; // rax
  struct IAudioSystemEffects2 **v78; // [rsp+28h] [rbp-D9h]
  __int64 v79; // [rsp+48h] [rbp-B9h] BYREF
  struct ICompositeSystemEffect *v80; // [rsp+50h] [rbp-B1h] BYREF
  struct IAudioProcessingObject *v81; // [rsp+58h] [rbp-A9h] BYREF
  CEndpointCharacteristics *v82; // [rsp+60h] [rbp-A1h] BYREF
  __int64 v83; // [rsp+68h] [rbp-99h]
  struct ICompositeSystemEffect *v84; // [rsp+70h] [rbp-91h] BYREF
  unsigned int *v85; // [rsp+78h] [rbp-89h]
  unsigned int v86; // [rsp+80h] [rbp-81h]
  IID *v87; // [rsp+88h] [rbp-79h]
  IID rclsid; // [rsp+98h] [rbp-69h] BYREF
  char v89; // [rsp+A8h] [rbp-59h]
  IID *v90; // [rsp+B8h] [rbp-49h]
  _QWORD *v91; // [rsp+C0h] [rbp-41h]
  _QWORD *v92; // [rsp+C8h] [rbp-39h]
  struct IMMDevice *v93; // [rsp+D0h] [rbp-31h] BYREF
  char *v94; // [rsp+D8h] [rbp-29h]
  CLSID pClsid; // [rsp+E0h] [rbp-21h] BYREF
  char v96; // [rsp+F0h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+2Fh]

  LODWORD(v83) = a4;
  v26 = a3;
  v86 = a3;
  v27 = a2;
  LODWORD(v84) = a2;
  v28 = a1;
  v82 = a1;
  v87 = a7;
  v29 = a15;
  v90 = a15;
  v92 = a25;
  v91 = a26;
  v30 = 0LL;
  v85 = 0LL;
  v31 = 0LL;
  v94 = 0LL;
  v93 = 0LL;
  CEndpointCharacteristics::GetMMDevice(a1, &v93);
  if ( !a25 )
    goto LABEL_111;
  if ( (v26 & 0x800000) != 0 )
  {
    if ( v27 )
    {
      v32 = -2147418113;
      v33 = 2147549183LL;
      v34 = 263LL;
LABEL_105:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v34,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v33);
      goto LABEL_154;
    }
    v35 = (unsigned int *)CoTaskMemAlloc(0x130uLL);
    v30 = v35;
    v85 = v35;
    if ( !v35 )
    {
      v32 = -2147024882;
      v33 = 2147942414LL;
      v34 = 268LL;
      goto LABEL_105;
    }
    memset_0(v35, 0, 0x130uLL);
    v30[34] = v26;
    v30[40] = 1 << v30[50];
    *(GUID *)&v30[4 * v30[50]++ + 72] = GUID_fed4acc3_87c9_45e9_a026_5b59a855e687;
    v30[1] = 1;
    goto LABEL_92;
  }
  if ( !v27 && (a5 & 0xFFFFFFFC) == 0 && a5 != eOffloadConnector )
  {
    v81 = 0LL;
    v36 = 0;
    LODWORD(v79) = 0;
    if ( a5 != eLoopbackConnector )
    {
      v80 = 0LL;
      if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(v28, a5) )
      {
        rclsid = *v87;
        StreamEffect = CEndpointCharacteristics::GetStreamEffect(v28, &rclsid, 0, a5, &v80, 0LL, 0LL);
        v32 = StreamEffect;
        if ( StreamEffect < 0 )
        {
          v38 = 302LL;
LABEL_17:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v38,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)StreamEffect);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v80);
LABEL_63:
          v52 = (void **)&v81;
LABEL_64:
          wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(v52, 0LL);
          goto LABEL_154;
        }
      }
      else
      {
        StreamEffect = CEndpointCharacteristics::GetLfx(v28, a5, &v80, 0LL, v78);
        v32 = StreamEffect;
        if ( StreamEffect < 0 )
        {
          v38 = 307LL;
          goto LABEL_17;
        }
      }
      if ( v80 )
      {
        *(_QWORD *)&rclsid.Data1 = &v81;
        *(_QWORD *)rclsid.Data4 = 0LL;
        v89 = 1;
        (*(void (__fastcall **)(struct ICompositeSystemEffect *, __int64 *, unsigned __int8 *))(*(_QWORD *)v80 + 32LL))(
          v80,
          &v79,
          rclsid.Data4);
        if ( v89 )
          wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            *(void ***)&rclsid.Data1,
            *(void **)rclsid.Data4);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v80);
      v36 = v79;
    }
    if ( (_DWORD)v83 )
    {
      if ( (_DWORD)v83 != 1 )
      {
        if ( (_DWORD)v83 != 2 )
        {
          v32 = -2147024809;
          v39 = 439LL;
LABEL_62:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v39,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)v32);
          goto LABEL_63;
        }
        v40 = 3;
        v41 = (unsigned int *)CoTaskMemAlloc(0x150uLL);
        v30 = v41;
        v85 = v41;
        if ( !v41 )
        {
          v32 = -2147024882;
          v39 = 422LL;
          goto LABEL_62;
        }
        memset_0(v41, 0, 0x150uLL);
        *v30 = (a5 != eLoopbackConnector) + 1;
        v30[34] = v26;
        v30[50] = 3;
        *((GUID *)v30 + 18) = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
        *((GUID *)v30 + 19) = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
        *((GUID *)v30 + 20) = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
        v30[40] = 0;
        goto LABEL_59;
      }
      v40 = v36 + 2;
      v42 = 16 * ((unsigned int)(v36 + 2) + 18LL);
      v43 = (unsigned int *)CoTaskMemAlloc(v42);
      v30 = v43;
      v85 = v43;
      if ( !v43 )
      {
        v32 = -2147024882;
        v39 = 387LL;
        goto LABEL_62;
      }
      memset_0(v43, 0, v42);
      *v30 = 1;
      v30[34] = v26;
      *((_QWORD *)v30 + 18) = 0LL;
      v30[40] = 0;
      v30[50] = 0;
      *((_QWORD *)v30 + 34) = a23;
      *((_QWORD *)v30 + 35) = a24;
      if ( a22 )
        *((_QWORD *)v30 + 33) = a19;
      v44 = 0;
      if ( (_DWORD)v79 )
      {
        v45 = 0;
        while ( v45 <= 0x1F )
        {
          v30[40] |= 1 << v45;
          *(_OWORD *)&v30[4 * v30[50] + 72] = *(_OWORD *)&v81[2 * v44].lpVtbl;
          v45 = v30[50] + 1;
          v30[50] = v45;
          if ( ++v44 >= (unsigned int)v79 )
            goto LABEL_37;
        }
        v39 = 403LL;
LABEL_61:
        v32 = -2147418113;
        goto LABEL_62;
      }
LABEL_37:
      *(GUID *)&v30[4 * v30[50]++ + 72] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
      v46 = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
    }
    else
    {
      v40 = v36 + 4;
      v47 = 16 * ((unsigned int)(v36 + 4) + 18LL);
      v48 = (unsigned int *)CoTaskMemAlloc(v47);
      v30 = v48;
      v85 = v48;
      if ( !v48 )
      {
        v32 = -2147024882;
        v39 = 321LL;
        goto LABEL_62;
      }
      memset_0(v48, 0, v47);
      *v30 = 0;
      v30[34] = v26;
      *((_QWORD *)v30 + 18) = 0LL;
      v30[50] = 0;
      v30[40] = 0;
      if ( a21 )
      {
        v30[40] = 1;
        *(GUID *)&v30[4 * v30[50]++ + 72] = GUID_7bf2a436_2a30_4797_90ee_0f66b8426d75;
      }
      else
      {
        v49 = 0;
        if ( (_DWORD)v79 )
        {
          while ( 1 )
          {
            if ( v81[2 * v49].lpVtbl != *(struct IAudioProcessingObjectVtbl **)&GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data1
              || v81[2 * v49 + 1].lpVtbl != *(struct IAudioProcessingObjectVtbl **)GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data4
              || !IsGetDefaultSpatialRenderingModePresent()
              || RpcImpersonateClient(0LL) < 0
              || (v50 = IsVirtualSurroundAllowedForProcess(a9), RpcRevertToSelf(), v50) )
            {
              v51 = v30[50];
              if ( v51 > 0x1F )
              {
                v39 = 356LL;
                goto LABEL_61;
              }
              v30[40] |= 1 << v51;
              *(_OWORD *)&v30[4 * v30[50]++ + 72] = *(_OWORD *)&v81[2 * v49].lpVtbl;
            }
            if ( ++v49 >= (unsigned int)v79 )
            {
              v29 = v90;
              break;
            }
          }
        }
        v26 = v86;
      }
      *(GUID *)&v30[4 * v30[50]++ + 72] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
      *(GUID *)&v30[4 * v30[50]++ + 72] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
      *(GUID *)&v30[4 * v30[50]++ + 72] = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
      if ( a21 || !a20 || CoGetPSClsid(&GUID_a026a0bf_1e7e_430b_b0d5_d4f3689d02ae, &pClsid) < 0 )
        goto LABEL_59;
      v46 = GUID_122595e5_20a2_47d3_8604_4a613ff6cca7;
    }
    *(GUID *)&v30[4 * v30[50]++ + 72] = v46;
LABEL_59:
    v30[1] = v26 >> 31;
    if ( v30[50] > v40 )
    {
      v39 = 443LL;
      goto LABEL_61;
    }
    wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v81,
      0LL);
    v27 = (int)v84;
    goto LABEL_92;
  }
  v80 = 0LL;
  LODWORD(v79) = 0;
  if ( a5 != eOffloadConnector || v27 )
  {
    v61 = (unsigned int *)CoTaskMemAlloc(0x130uLL);
    v30 = v61;
    v85 = v61;
    if ( !v61 )
    {
      v32 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E6,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_89;
    }
    memset_0(v61, 0, 0x130uLL);
    *v30 = v83;
    v30[34] = v26;
  }
  else
  {
    rclsid = *v87;
    v81 = 0LL;
    v53 = CEndpointCharacteristics::GetStreamEffect(
            v28,
            &rclsid,
            0,
            a5,
            (struct ICompositeSystemEffect **)&v81,
            0LL,
            0LL);
    v32 = v53;
    if ( v53 < 0 )
    {
      v54 = (unsigned int)v53;
      v55 = 452LL;
LABEL_84:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v55,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v54);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v81);
LABEL_89:
      v52 = (void **)&v80;
      goto LABEL_64;
    }
    if ( v81 )
    {
      *(_QWORD *)&pClsid.Data1 = &v80;
      *(_QWORD *)pClsid.Data4 = 0LL;
      v96 = 1;
      ((void (__fastcall *)(struct IAudioProcessingObject *, __int64 *, unsigned __int8 *))v81->lpVtbl->GetLatency)(
        v81,
        &v79,
        pClsid.Data4);
      if ( v96 )
        wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          *(void ***)&pClsid.Data1,
          *(void **)pClsid.Data4);
    }
    v56 = v79;
    v57 = 16 * ((unsigned int)v79 + 18LL);
    v58 = (unsigned int *)CoTaskMemAlloc(v57);
    v30 = v58;
    v85 = v58;
    if ( !v58 )
    {
      v32 = -2147024882;
      v55 = 459LL;
LABEL_83:
      v54 = v32;
      goto LABEL_84;
    }
    memset_0(v58, 0, v57);
    *v30 = 0;
    v30[34] = v26;
    *((_QWORD *)v30 + 18) = 0LL;
    v30[50] = 0;
    v30[40] = 0;
    v59 = 0;
    if ( (_DWORD)v79 )
    {
      v60 = 0;
      while ( v60 <= 0x1F )
      {
        v30[40] |= 1 << v60;
        *(_OWORD *)&v30[4 * v30[50] + 72] = *((_OWORD *)v80 + v59);
        v60 = v30[50] + 1;
        v30[50] = v60;
        if ( ++v59 >= (unsigned int)v79 )
          goto LABEL_80;
      }
      v55 = 470LL;
      goto LABEL_82;
    }
LABEL_80:
    v30[1] = 0;
    if ( v30[50] > v56 )
    {
      v55 = 478LL;
LABEL_82:
      v32 = -2147418113;
      goto LABEL_83;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v81);
    v29 = v90;
  }
  wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v80,
    0LL);
LABEL_92:
  *(IID *)(v30 + 41) = *v87;
  *(_OWORD *)(v30 + 45) = *a8;
  v30[2] = a5;
  *((_QWORD *)v30 + 16) = a10;
  v30[30] = *(unsigned __int16 *)(a10 + 16) + 18;
  *((_QWORD *)v30 + 3) = a12;
  *((_QWORD *)v30 + 4) = a13;
  v30[3] = a9;
  *((_QWORD *)v30 + 2) = a14;
  v62 = &GUID_00000000_0000_0000_0000_000000000000;
  if ( a17 )
    v62 = a17;
  *((GUID *)v30 + 3) = *v62;
  *((_OWORD *)v30 + 13) = *(_OWORD *)a18;
  *((_OWORD *)v30 + 14) = *(_OWORD *)(a18 + 16);
  *((_OWORD *)v30 + 15) = *(_OWORD *)(a18 + 32);
  *((_QWORD *)v30 + 32) = *(_QWORD *)(a18 + 48);
  *((_QWORD *)v30 + 14) = a19;
  *((GUID *)v30 + 4) = GUID_00000000_0000_0000_0000_000000000000;
  if ( v29
    && (*(_QWORD *)&v29->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
     || *(_QWORD *)v29->Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4) )
  {
    rclsid = *v29;
    ContainerProperty = GetContainerProperty(&rclsid, &PKEY_Audio_CPMemoryManager, (struct _GUID *)v30 + 4);
    v32 = ContainerProperty;
    if ( ContainerProperty < 0 )
    {
      v34 = 513LL;
LABEL_104:
      v33 = (unsigned int)ContainerProperty;
      goto LABEL_105;
    }
  }
  *((GUID *)v30 + 5) = GUID_00000000_0000_0000_0000_000000000000;
  if ( v29
    && (*(_QWORD *)&v29->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
     || *(_QWORD *)v29->Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4) )
  {
    rclsid = *v29;
    ContainerProperty = GetContainerProperty(&rclsid, &PKEY_Audio_CPEventManager, (struct _GUID *)v30 + 5);
    v32 = ContainerProperty;
    if ( ContainerProperty < 0 )
    {
      v34 = 520LL;
      goto LABEL_104;
    }
  }
  if ( a16
    && (*(_QWORD *)a16 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
     || *(_QWORD *)(a16 + 8) != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4) )
  {
    *((_OWORD *)v30 + 6) = *(_OWORD *)a16;
  }
  v28 = v82;
LABEL_111:
  v64 = v91;
  if ( v91 )
  {
    v80 = 0LL;
    LODWORD(v79) = 0;
    rclsid = *v87;
    v81 = 0LL;
    v84 = 0LL;
    ModeEffect = CEndpointCharacteristics::GetModeEffect(v28, &rclsid, 0, a5, &v84, &v81, 0LL);
    v32 = ModeEffect;
    if ( ModeEffect < 0 )
    {
      v66 = (unsigned int)ModeEffect;
      v67 = 535LL;
LABEL_140:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v67,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v66);
LABEL_145:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v81);
      wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v80,
        0LL);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v84);
      goto LABEL_154;
    }
    if ( v84 )
    {
      *(_QWORD *)&pClsid.Data1 = &v80;
      *(_QWORD *)pClsid.Data4 = 0LL;
      v96 = 1;
      (*(void (__fastcall **)(struct ICompositeSystemEffect *, __int64 *, unsigned __int8 *))(*(_QWORD *)v84 + 32LL))(
        v84,
        &v79,
        pClsid.Data4);
      if ( v96 )
        wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          *(void ***)&pClsid.Data1,
          *(void **)pClsid.Data4);
    }
    if ( (v26 & 0x800000) != 0 )
    {
      if ( v27 )
      {
        v67 = 545LL;
LABEL_138:
        v32 = -2147418113;
        goto LABEL_139;
      }
    }
    else if ( !v27 && (a5 & 0xFFFFFFFC) == 0 && a5 != eLoopbackConnector )
    {
      v68 = v83;
      if ( (_DWORD)v83 != 2
        && *a6 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
        && a6[1] == *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4
        && (unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(v82, a5) )
      {
        v69 = 1;
        if ( (unsigned int)v79 > 1 )
          v69 = v79;
        v70 = 16LL * v69;
        v71 = (char *)CoTaskMemAlloc(v70 + 60);
        v31 = v71;
        v94 = v71;
        if ( !v71 )
        {
          v32 = -2147024882;
          v67 = 568LL;
LABEL_139:
          v66 = v32;
          goto LABEL_140;
        }
        memset_0(v71, 0, v70 + 60);
        *(_DWORD *)v31 = v68;
        *((_DWORD *)v31 + 1) = 0;
        *((_DWORD *)v31 + 14) = 0;
        v72 = 0;
        if ( (_DWORD)v79 )
        {
          v73 = 0;
          while ( v73 <= 0x1F )
          {
            *((_DWORD *)v31 + 8) |= 1 << v73;
            *(_OWORD *)&v31[16 * *((unsigned int *)v31 + 14) + 60] = *((_OWORD *)v80 + v72);
            v73 = *((_DWORD *)v31 + 14) + 1;
            *((_DWORD *)v31 + 14) = v73;
            if ( ++v72 >= (unsigned int)v79 )
              goto LABEL_135;
          }
          v67 = 576LL;
          goto LABEL_138;
        }
LABEL_135:
        *(IID *)(v31 + 36) = *v87;
        if ( v81 )
        {
          ((void (__fastcall *)(struct IAudioProcessingObject *, GUID *, CEndpointCharacteristics **))v81->lpVtbl->QueryInterface)(
            v81,
            &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
            &v82);
          v74 = v82;
        }
        else
        {
          v74 = 0LL;
          v82 = 0LL;
        }
        *((_DWORD *)v31 + 13) = v74 != 0LL;
        if ( *((_DWORD *)v31 + 14) > v69 )
        {
          v32 = -2147418113;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x24B,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)0x8000FFFFLL);
          if ( v82 )
            (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v82 + 16LL))(v82);
          goto LABEL_145;
        }
        *((_QWORD *)v31 + 2) = a11;
        *((_DWORD *)v31 + 2) = *(unsigned __int16 *)(a11 + 16) + 18;
        if ( v82 )
          (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v82 + 16LL))(v82);
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v81);
    wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v80,
      0LL);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v84);
    v64 = v91;
  }
  if ( v92 )
  {
    v75 = v30;
    v30 = 0LL;
    *v92 = v75;
  }
  if ( v64 )
  {
    v76 = v31;
    v31 = 0LL;
    *v64 = v76;
  }
  v32 = 0;
LABEL_154:
  if ( v31 )
    CoTaskMemFree(v31);
  if ( v30 )
    CoTaskMemFree(v30);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v93);
  return v32;
}
