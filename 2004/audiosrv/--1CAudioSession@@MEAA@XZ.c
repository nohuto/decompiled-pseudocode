/*
 * XREFs of ??1CAudioSession@@MEAA@XZ @ 0x180006994
 * Callers:
 *     ??_ECPerStreamVolumeAudioSession@@UEAAPEAXI@Z @ 0x180005960 (--_ECPerStreamVolumeAudioSession@@UEAAPEAXI@Z.c)
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x1800C6E74 (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 *     ??_ECAudioSession@@MEAAPEAXI@Z @ 0x1800C7178 (--_ECAudioSession@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006EA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??1?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAA@XZ @ 0x180007B7C (--1-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?clear@?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18006E7F8 (-clear@-$forward_list@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800BBD20 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     WPP_SF_qS @ 0x1800BE3A0 (WPP_SF_qS.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSession::~CAudioSession(CAudioSession *this)
{
  unsigned int v2; // esi
  unsigned __int64 v3; // rdi
  unsigned int v4; // esi
  unsigned __int64 v5; // rdi
  unsigned int v6; // esi
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  void *v9; // rdi
  HANDLE ProcessHeap; // rax
  __int64 v11; // rsi
  char *v12; // rdi
  char *v13; // rbp
  char *v14; // rsi
  struct std::nothrow_t *v15; // rdx
  __int64 v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  struct std::nothrow_t *v20; // [rsp+70h] [rbp+8h] BYREF
  void *v21; // [rsp+78h] [rbp+10h] BYREF

  *(_QWORD *)this = &CAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CAudioSession::`vftable'{for `CUnknown'};
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      43,
      (unsigned int)&WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids,
      (_DWORD)this,
      *((_QWORD *)this + 91));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v2 = 0;
  if ( *((_QWORD *)this + 13) )
  {
    v3 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 12) + 8 * v3) + 64LL))(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * v3));
      if ( v3 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v3) = 0LL;
      v3 = ++v2;
    }
    while ( (unsigned __int64)v2 < *((_QWORD *)this + 13) );
  }
  if ( this != (CAudioSession *)-48LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v4 = 0;
  if ( *((_QWORD *)this + 22) )
  {
    v5 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 21) + 8 * v5) + 64LL))(*(_QWORD *)(*((_QWORD *)this + 21) + 8 * v5));
      if ( v5 >= *((_QWORD *)this + 22) )
        ATL::AtlThrowImpl(-2147024809);
      *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v5) = 0LL;
      v5 = ++v4;
    }
    while ( (unsigned __int64)v4 < *((_QWORD *)this + 22) );
  }
  if ( this != (CAudioSession *)-128LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v6 = 0;
  if ( *((_QWORD *)this + 31) )
  {
    v7 = 0LL;
    do
    {
      v8 = *(_QWORD *)(*((_QWORD *)this + 30) + 8 * v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
      if ( v7 >= *((_QWORD *)this + 31) )
        ATL::AtlThrowImpl(-2147024809);
      *(_QWORD *)(*((_QWORD *)this + 30) + 8 * v7) = 0LL;
      v7 = ++v6;
    }
    while ( (unsigned __int64)v6 < *((_QWORD *)this + 31) );
  }
  if ( this != (CAudioSession *)-200LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 5);
  v9 = (void *)*((_QWORD *)this + 121);
  if ( v9 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v9);
  }
  *((_QWORD *)this + 108) = &AudioSrvVolumeTelemetrySessionVolume::`vftable';
  if ( *((_QWORD *)this + 109) )
  {
    v11 = *((_QWORD *)this + 109);
    if ( GetTickCount64() - v11 > 0x3E8 )
      (**((void (__fastcall ***)(char *, __int64, _QWORD))this + 108))(
        (char *)this + 864,
        v11 - *((_QWORD *)this + 110),
        *((unsigned int *)this + 222));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 896));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
  v12 = (char *)*((_QWORD *)this + 97);
  if ( v12 )
  {
    v13 = (char *)*((_QWORD *)this + 98);
    v14 = (char *)*((_QWORD *)this + 97);
    if ( v12 != v13 )
    {
      do
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v14);
        v14 += 8;
      }
      while ( v14 != v13 );
    }
    v15 = (struct std::nothrow_t *)((*((_QWORD *)this + 99) - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL);
    v20 = v15;
    v21 = v12;
    if ( (unsigned __int64)v15 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v21, (unsigned __int64 *)&v20);
      v15 = v20;
      v12 = (char *)v21;
    }
    operator delete(v12, v15);
    *((_QWORD *)this + 97) = 0LL;
    *((_QWORD *)this + 98) = 0LL;
    *((_QWORD *)this + 99) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 91) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 87) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 84) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 83) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 82) - 24LL));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 616));
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::~CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>((LPCRITICAL_SECTION)((char *)this + 496));
  v16 = *((_QWORD *)this + 61);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::clear((char *)this + 472);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 41) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 40) - 24LL));
  v17 = (void *)*((_QWORD *)this + 30);
  if ( v17 )
    free(v17);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 5);
  v18 = (void *)*((_QWORD *)this + 21);
  if ( v18 )
    free(v18);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v19 = (void *)*((_QWORD *)this + 12);
  if ( v19 )
    free(v19);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  *((_QWORD *)this + 4) = &CUnknown::`vftable';
}
