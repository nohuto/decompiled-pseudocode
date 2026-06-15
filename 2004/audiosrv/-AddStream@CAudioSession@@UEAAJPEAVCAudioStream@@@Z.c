/*
 * XREFs of ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18002E3B0
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18002D620 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800C7290 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002EA90 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ?GrowBuffer@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18002F18C (-GrowBuffer@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@AEAA_N.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B69C4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_d @ 0x1800BC05C (WPP_SF_d.c)
 *     WPP_SF_qq @ 0x1800CC120 (WPP_SF_qq.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioSession::AddStream(CAudioSession *this, struct _RTL_CRITICAL_SECTION *a2)
{
  unsigned __int64 v4; // r15
  __int64 v5; // r9
  BOOL v6; // esi
  int v7; // eax
  __int64 OwningThread_low; // rdx
  int v9; // edx
  unsigned int v10; // esi
  unsigned int LockSemaphore_high; // r15d
  int v12; // esi
  __int64 v13; // rcx
  const char *v14; // r9
  HANDLE LockSemaphore; // rcx
  int v17; // eax
  int v18; // [rsp+20h] [rbp-88h]
  LPCRITICAL_SECTION lpCriticalSection[14]; // [rsp+38h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  CAudioSession *v21; // [rsp+B0h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+B8h] [rbp+10h]
  __int64 v23; // [rsp+C8h] [rbp+20h] BYREF

  v22 = a2;
  v21 = this;
  (*(void (__fastcall **)(struct IAudioPolicyManager *, LPCRITICAL_SECTION *))(*(_QWORD *)g_PolicyManager + 192LL))(
    g_PolicyManager,
    lpCriticalSection);
  lpCriticalSection[1] = (LPCRITICAL_SECTION)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  lpCriticalSection[2] = (LPCRITICAL_SECTION)((char *)this + 48);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids, this, a2);
  }
  v4 = *((_QWORD *)this + 13);
  if ( v4 >= *((_QWORD *)this + 14)
    && !(unsigned __int8)ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::GrowBuffer(
                           (char *)this + 96,
                           v4 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v4) = a2;
  ++*((_QWORD *)this + 13);
  ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))a2->DebugInfo[1].CriticalSection)(a2);
  v23 = 0LL;
  (*(void (__fastcall **)(LONG *, __int64 *))(*(_QWORD *)&a2->LockCount + 24LL))(&a2->LockCount, &v23);
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v23 + 96LL))(v23) && LODWORD(a2[8].OwningThread) == 3 )
    *((_DWORD *)this + 120) = 1;
  if ( g_DuckingManager
    && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v23 + 96LL))(v23)
    && *((_DWORD *)this + 120) )
  {
    LODWORD(a2[8].OwningThread) = 3;
  }
  if ( !(*(unsigned int (__fastcall **)(LONG *))(*(_QWORD *)&a2->LockCount + 56LL))(&a2->LockCount)
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v23 + 352LL))(v23) )
  {
    LODWORD(a2[8].OwningThread) = 19;
  }
  v5 = (unsigned int)(*((_DWORD *)this + 22) + 1);
  *((_DWORD *)this + 22) = v5;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids, v5);
  }
  v6 = (*(unsigned __int8 (__fastcall **)(LONG *))(*(_QWORD *)&a2->LockCount + 64LL))(&a2->LockCount) != 0;
  v7 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)a2[2].DebugInfo + 120LL))(a2[2].DebugInfo);
  OwningThread_low = LODWORD(a2[8].OwningThread);
  if ( v6 )
    v9 = dword_180161550[OwningThread_low];
  else
    v9 = dword_1801614F0[OwningThread_low];
  if ( v7 )
    v7 = 16;
  v10 = (LOBYTE(a2[5].LockSemaphore) == 0) + 2 * (v9 + v7);
  LockSemaphore_high = HIDWORD(a2[5].LockSemaphore);
  if ( v10 == LockSemaphore_high )
    goto LABEL_21;
  HIDWORD(a2[5].LockSemaphore) = v10;
  LockSemaphore = a2[1].LockSemaphore;
  v21 = 0LL;
  (*(void (__fastcall **)(HANDLE, CAudioSession **))(*(_QWORD *)LockSemaphore + 80LL))(LockSemaphore, &v21);
  v17 = (*(__int64 (__fastcall **)(CAudioSession *, __int64, _QWORD, _QWORD))(*(_QWORD *)v21 + 200LL))(
          v21,
          1LL,
          v10,
          LockSemaphore_high);
  v12 = v17;
  if ( v17 >= 0 )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
LABEL_21:
    v12 = 0;
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2EA,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v17,
    v18);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
LABEL_22:
  a2[2].LockCount = *((_DWORD *)this + 70);
  v13 = *(_QWORD *)&a2[5].LockCount;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( this != (CAudioSession *)-48LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
  lpCriticalSection[4] = (LPCRITICAL_SECTION)&CAudioStreamCreate::`vftable';
  lpCriticalSection[5] = (LPCRITICAL_SECTION)this;
  lpCriticalSection[6] = a2;
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496));
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  if ( !SetEvent(a2[8].DebugInfo) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x91C,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v14);
    __debugbreak();
  }
  if ( v12 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::AddStream", 0xB3Bu, v12);
  return (unsigned int)v12;
}
