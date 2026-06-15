/*
 * XREFs of ?RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800F7FEC
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualAudioStream@@V1@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualAudioStream@@AEAPEAUIAudioProcess@@$$QEAW4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180071FB0 (--$MakeAndInitialize@VCVirtualAudioStream@@V1@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CAT.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002A740 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??I?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCEndpointCharacteristics@@XZ @ 0x1800720E4 (--I-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCEndpoint.c)
 *     ??$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessionState@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualAudioSessionInfo@@AEAPEAUIAudioProcess@@AEAPEBG$$QEA_N3$$QEAW4_AudioSessionState@@@Z @ 0x1800722CC (--$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessi.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1800BC3E4 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800BD2D0 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x1800C7024 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 */

__int64 __fastcall CVirtualAudioStream::RuntimeClassInitialize(
        CVirtualAudioStream *this,
        struct IAudioProcess *a2,
        int a3,
        const unsigned __int16 *a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a5)
{
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v8; // eax
  char **v9; // r14
  unsigned __int64 v10; // rdi
  void *v11; // rcx
  int v12; // ebx
  __int64 *v13; // rax
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  unsigned __int64 v17; // [rsp+90h] [rbp+48h] BYREF
  struct IAudioProcess *v18; // [rsp+98h] [rbp+50h] BYREF
  bool v19; // [rsp+A0h] [rbp+58h] BYREF
  const unsigned __int16 *v20; // [rsp+A8h] [rbp+60h] BYREF

  v20 = a4;
  v18 = a2;
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)this + 4, (__int64)a2);
  v8 = a5;
  v9 = (char **)((char *)this + 24);
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 10) = v8;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)this + 3,
    0LL);
  v10 = -1LL;
  do
    ++v10;
  while ( a4[v10] );
  *v9 = 0LL;
  if ( v10 + 1 < v10 )
  {
    v12 = -2147024362;
LABEL_11:
    v14 = 26LL;
    goto LABEL_12;
  }
  v12 = ULongLongMult(v10 + 1, 2uLL, &v17);
  if ( v12 >= 0 )
    v12 = CTCoAllocPolicy::Alloc(v11, 0, v17, (void **)this + 3);
  if ( v12 < 0 )
    goto LABEL_11;
  StringCchCopyNExW(*v9, v10 + 1, a4, v10);
  LODWORD(v17) = 0;
  v19 = a3 == 3;
  LOBYTE(a5) = a5 == eCapture;
  v13 = wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::operator&((__int64 *)this + 6);
  v12 = Microsoft::WRL::Details::MakeAndInitialize<VirtualAudioSessionInfo,VirtualAudioSessionInfo,IAudioProcess * &,unsigned short const * &,bool,bool,enum _AudioSessionState>(
          (VirtualAudioSessionInfo **)v13,
          &v18,
          &v20,
          (bool *)&a5,
          &v19,
          (enum _AudioSessionState *)&v17);
  if ( v12 >= 0 )
    return 0LL;
  v14 = 28LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\virtualaudiostream.cpp",
    (const char *)(unsigned int)v12);
  return (unsigned int)v12;
}
