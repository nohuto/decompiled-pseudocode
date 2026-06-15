/*
 * XREFs of ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800EE044
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180013C08 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800ECEF8 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEBU_GUID@@7PEAPEAUISaDeviceProxy@@@Z @ 0x1800ED0CC (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 * Callees:
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180002F10 (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800BBC30 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     WPP_SF_ @ 0x1800BBF40 (WPP_SF_.c)
 *     ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x1800CF698 (-FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800EDE58 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        struct CAudioSessionManager *a7,
        struct ISaDeviceProxy **a8)
{
  struct CAudioSessionManager *v11; // rdi
  int ExclusiveModeAudioSession; // eax
  CAudioResourceManager *v13; // rcx
  struct std::nothrow_t *v14; // rbx
  __int64 *v15; // rdi
  int v16; // eax
  unsigned int v17; // esi
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 *i; // rsi
  struct std::nothrow_t *v21; // rdx
  __int64 *j; // r14
  struct std::nothrow_t *v24; // rdx
  int SaDeviceForExclusive; // eax
  void *v26; // [rsp+50h] [rbp-20h] BYREF
  void *v27[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v28; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  struct std::nothrow_t *v30; // [rsp+90h] [rbp+20h] BYREF

  v30 = this;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, (__int64)&WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids);
  }
  v30 = 0LL;
  v11 = a7;
  ExclusiveModeAudioSession = CAudioSessionManager::FindExclusiveModeAudioSession(a7, &v30);
  v14 = v30;
  if ( ExclusiveModeAudioSession < 0 )
  {
    SaDeviceForExclusive = CAudioResourceManager::RetryGetSaDeviceForExclusive(v13, a2, a3, a4, a5, a6, v11, a8);
    v17 = SaDeviceForExclusive;
    if ( SaDeviceForExclusive < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A2,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)SaDeviceForExclusive);
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  *(_OWORD *)v27 = 0LL;
  v28 = 0LL;
  CAudioSession::GetOwningProcesses((__int64)v30, (__int64)v27);
  v15 = (__int64 *)v27[0];
  if ( ((char *)v27[1] - (char *)v27[0]) >> 3 == 1
    && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v27[0] + 96LL))(*(_QWORD *)v27[0])
    && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*v15 + 104LL))(*v15) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v15 + 168LL))(*v15);
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v14 + 2) + 40LL))((__int64)v14 + 16, 0xFFFFFFFFLL);
    v16 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            a2,
            a3,
            a4,
            a5,
            a6,
            0LL,
            0LL,
            a8);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = (unsigned int)v16;
      v19 = 2194LL;
      goto LABEL_21;
    }
    for ( i = v15; i != v27[1]; ++i )
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(i);
    v21 = (struct std::nothrow_t *)((v28 - (_QWORD)v15) & 0xFFFFFFFFFFFFFFF8uLL);
    v30 = v21;
    v26 = v15;
    if ( (unsigned __int64)v21 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v26, (unsigned __int64 *)&v30);
      v21 = v30;
      v15 = (__int64 *)v26;
    }
    operator delete(v15, v21);
LABEL_16:
    v17 = 0;
    goto LABEL_17;
  }
  v17 = -2005139364;
  v18 = 2289827932LL;
  v19 = 2199LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)v18);
  if ( v15 )
  {
    for ( j = v15; j != v27[1]; ++j )
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(j);
    v24 = (struct std::nothrow_t *)((v28 - (_QWORD)v15) & 0xFFFFFFFFFFFFFFF8uLL);
    v30 = v24;
    v26 = v15;
    if ( (unsigned __int64)v24 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v26, (unsigned __int64 *)&v30);
      v24 = v30;
      v15 = (__int64 *)v26;
    }
    operator delete(v15, v24);
  }
LABEL_17:
  if ( v14 )
    (*(void (__fastcall **)(struct std::nothrow_t *))(*(_QWORD *)v14 + 16LL))(v14);
  return v17;
}
