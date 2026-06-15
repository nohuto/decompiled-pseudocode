/*
 * XREFs of ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180012C00
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014200 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18000F700 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x1800130F0 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x1800C6394 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CA550 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall BuildDeviceGraphForStream(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        _OWORD *a10,
        __int64 a11,
        __int64 a12,
        void *Src,
        int a14,
        __int64 a15,
        unsigned int a16,
        char a17,
        __int64 a18,
        __int64 a19)
{
  int v20; // edx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r15d
  LPVOID *v25; // rdi
  _QWORD *v26; // rsi
  _QWORD *v27; // rbx
  __int64 v28; // rsi
  bool v29; // al
  unsigned int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rcx
  __int64 v37; // r14
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  void *v42; // [rsp+20h] [rbp-D9h]
  unsigned int v43; // [rsp+20h] [rbp-D9h]
  int v44; // [rsp+20h] [rbp-D9h]
  __int64 v45; // [rsp+60h] [rbp-99h] BYREF
  __int64 v46; // [rsp+68h] [rbp-91h] BYREF
  __int64 *v47; // [rsp+70h] [rbp-89h]
  __int64 v48; // [rsp+78h] [rbp-81h] BYREF
  char v49; // [rsp+80h] [rbp-79h]
  char v50; // [rsp+89h] [rbp-70h]
  __int64 v51; // [rsp+90h] [rbp-69h]
  void *v52; // [rsp+98h] [rbp-61h] BYREF
  __int64 v53[2]; // [rsp+A0h] [rbp-59h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-49h]
  char v55; // [rsp+B8h] [rbp-41h]
  __int64 v56; // [rsp+C0h] [rbp-39h]
  __int64 v57; // [rsp+C8h] [rbp-31h]
  _QWORD v58[2]; // [rsp+D0h] [rbp-29h] BYREF
  __int64 v59; // [rsp+E0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+3Fh]

  v54 = a4;
  v59 = a2;
  v51 = a11;
  v57 = a15;
  v45 = a18;
  v56 = a19;
  if ( (a6 & 4) != 0 || (a6 & 0xFFF8) != 0 || a7 == 1 && a6 < 0 || (a6 & 0x88000000) == 0x8000000 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x80070057LL,
      (int)v42);
    return 2147942487LL;
  }
  v52 = 0LL;
  if ( a12 )
    v20 = *(_DWORD *)(a12 + 52);
  else
    v20 = 0;
  *(_OWORD *)v53 = *a10;
  v21 = DeriveStreamGroupParametersForStream(
          a1,
          a8,
          a14,
          *(_QWORD *)(a11 + 32),
          v42,
          (__int64)v53,
          a17,
          (a6 & 1) != 0,
          Src,
          v20,
          (__int64)&v52);
  v24 = v21;
  v25 = (LPVOID *)v52;
  if ( v21 >= 0 )
  {
    v26 = 0LL;
    v53[0] = 0LL;
    if ( !a14 && !*((_BYTE *)v52 + 48) )
    {
      v27 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v27 )
      {
        v27[1] = 0LL;
        v27[2] = 0LL;
        *v27 = 0LL;
      }
      else
      {
        v27 = 0LL;
      }
      if ( !v27 )
      {
        v24 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x373,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8007000ELL,
          v43);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x433,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8007000ELL,
          v44);
        goto LABEL_54;
      }
      v28 = *v27;
      *v27 = a3;
      if ( a3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      v29 = a5 != 3 && a5 != 8 && (a6 & 0x1000000) == 0;
      *((_BYTE *)v27 + 8) = v29;
      v27[2] = v25;
      v26 = v27;
      v53[0] = (__int64)v27;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v22,
        (__int64)&AudioResourceManager_StreamSettings_Derived,
        v23,
        1LL,
        (__int64)v58);
    v30 = RpcImpersonateClient(0LL);
    if ( !v30 )
    {
      v50 = 1;
      v31 = 0LL;
      v58[0] = 0LL;
      if ( v45 )
      {
        wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(v58);
        v31 = v58[0];
        v37 = v51;
LABEL_46:
        *(_QWORD *)(v37 + 152) = *v25;
        v54 = v37;
        v55 = 1;
        v38 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v31 + 24LL))(
                v31,
                v59,
                v37,
                v57);
        v24 = v38;
        if ( v38 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x45D,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v38,
            a16);
        }
        else
        {
          if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
            McGenEventWrite_EtwEventWriteTransfer(
              v39,
              (__int64)&AudioResourceManager_Stream_Created,
              v40,
              1LL,
              (__int64)&v59);
          v24 = 0;
        }
        *(_QWORD *)(v37 + 152) = 0LL;
        goto LABEL_51;
      }
      v46 = 0LL;
      v47 = &v46;
      v48 = 0LL;
      v49 = 1;
      v24 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, LPVOID *, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                               + 48LL))(
              g_DeviceGraphManager,
              v54,
              v25,
              a16);
      if ( v49 )
      {
        v32 = *v47;
        *v47 = v48;
        if ( v32 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x440,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v24,
          a12);
      }
      else
      {
        v33 = v46;
        v31 = v46;
        v58[0] = v46;
        if ( v46 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 8LL))(v46);
          v33 = v46;
        }
        if ( !v26 )
        {
          v37 = v51;
LABEL_44:
          if ( v33 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
          goto LABEL_46;
        }
        v45 = 0LL;
        v47 = &v45;
        v48 = 0LL;
        v49 = 1;
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, __int64 *))(*(_QWORD *)v33 + 296LL))(
                v33,
                v26,
                a16,
                &v48);
        if ( v49 )
        {
          v34 = *v47;
          *v47 = v48;
          if ( v34 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
        if ( v24 >= 0 )
        {
          v35 = v31;
          v36 = v45;
          v31 = v45;
          v58[0] = v45;
          if ( v45 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 8LL))(v45);
            v36 = v45;
          }
          if ( v35 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
            v36 = v45;
          }
          v37 = v51;
          *(_DWORD *)(v51 + 196) = 1;
          if ( v36 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
          v33 = v46;
          goto LABEL_44;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x449,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v24,
          a12);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v45);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v46);
LABEL_51:
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      RpcRevertToSelf();
      goto LABEL_54;
    }
    v24 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x438,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)v30,
            v43);
LABEL_54:
    if ( v26 )
    {
      if ( *v26 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v26 + 16LL))(*v26);
      operator delete(v26, (const struct std::nothrow_t *)0x18);
    }
    goto LABEL_58;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x42F,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v21,
    v43);
LABEL_58:
  if ( v25 )
  {
    operator delete(v25[7], (const struct std::nothrow_t *)0x10);
    v25[7] = 0LL;
    CoTaskMemFree(v25[2]);
    v25[2] = 0LL;
    CoTaskMemFree(*v25);
    *v25 = 0LL;
    operator delete(v25, (const struct std::nothrow_t *)0x40);
  }
  return (unsigned int)v24;
}
