/*
 * XREFs of ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800D0B1C
 * Callers:
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z @ 0x1800D1ECC (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180002F10 (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18002CB20 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800BBD20 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?MatchesParameters@CAudioSession@@QEAAH_NPEBG1@Z @ 0x1800C9AFC (-MatchesParameters@CAudioSession@@QEAAH_NPEBG1@Z.c)
 *     ?CapabilityAccessCheck@CAudioSessionManager@@CAJPEBGKPEA_N@Z @ 0x1800CEFDC (-CapabilityAccessCheck@CAudioSessionManager@@CAJPEBGKPEA_N@Z.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800CFFEC (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess(
        __int64 a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        __int64 a4,
        bool a5)
{
  const unsigned __int16 *v5; // rdi
  const unsigned __int16 *v6; // rsi
  struct _RTL_CRITICAL_SECTION *v8; // r12
  __int64 v9; // rcx
  __int64 v10; // r12
  CAudioSession **NextValue; // rax
  __int64 v12; // rdx
  CAudioSession *v13; // r13
  int OwningProcesses; // eax
  void *v15; // rbx
  __int64 *j; // rdi
  struct std::nothrow_t *v17; // rdx
  __int64 *v18; // rsi
  _QWORD *v19; // r14
  __int64 v20; // rdi
  unsigned int v21; // ebx
  const WCHAR *v22; // rax
  int v23; // eax
  __int64 v24; // r8
  int v25; // eax
  __int64 *i; // rbx
  struct std::nothrow_t *v27; // rdx
  void *v29; // [rsp+20h] [rbp-40h] BYREF
  __int64 StartPosition; // [rsp+28h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+30h] [rbp-30h]
  struct _RTL_CRITICAL_SECTION *v32; // [rsp+38h] [rbp-28h]
  void *v33[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v34; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  struct std::nothrow_t *v36; // [rsp+A0h] [rbp+40h] BYREF
  const unsigned __int16 *v37; // [rsp+A8h] [rbp+48h]
  const unsigned __int16 *v38; // [rsp+B0h] [rbp+50h]

  v38 = a3;
  v37 = a2;
  v5 = a3;
  v6 = a2;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  v31 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v32 = v8;
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(a1 + 56);
  if ( StartPosition )
  {
    v10 = v9;
    do
    {
      NextValue = (CAudioSession **)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                                      v10,
                                      &StartPosition);
      v13 = *NextValue;
      if ( *NextValue && (unsigned int)CAudioSession::MatchesParameters(*NextValue, v12, v6, v5) )
      {
        *(_OWORD *)v33 = 0LL;
        v34 = 0LL;
        OwningProcesses = CAudioSession::GetOwningProcesses((__int64)v13, (__int64)v33);
        if ( OwningProcesses >= 0 )
        {
          v18 = (__int64 *)v33[0];
          v19 = v33[0];
          if ( v33[0] != v33[1] )
          {
            while ( 1 )
            {
              a5 = 0;
              v20 = *v19;
              v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v19 + 40LL))(*v19);
              v22 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 56LL))(v20);
              v23 = CAudioSessionManager::CapabilityAccessCheck(v22, v21, &a5);
              if ( v23 < 0 )
                break;
              if ( !a5 )
                goto LABEL_18;
              if ( ++v19 == v33[1] )
                goto LABEL_20;
            }
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              1717LL,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
              (const char *)(unsigned int)v23);
LABEL_18:
            LOBYTE(v24) = 1;
            v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*((_QWORD *)v13 + 2) + 32LL))(
                    (__int64)v13 + 16,
                    0LL,
                    v24);
            if ( v25 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                1721LL,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                (const char *)(unsigned int)v25);
          }
LABEL_20:
          if ( v18 )
          {
            for ( i = v18; i != v33[1]; ++i )
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(i);
            v27 = (struct std::nothrow_t *)((v34 - (_QWORD)v18) & 0xFFFFFFFFFFFFFFF8uLL);
            v36 = v27;
            v29 = v18;
            if ( (unsigned __int64)v27 >= 0x1000 )
            {
              std::_Adjust_manually_vector_aligned(&v29, (unsigned __int64 *)&v36);
              v27 = v36;
              v18 = (__int64 *)v29;
            }
            operator delete(v18, v27);
          }
          v6 = v37;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1708LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
            (const char *)(unsigned int)OwningProcesses);
          v15 = v33[0];
          if ( v33[0] )
          {
            for ( j = (__int64 *)v33[0]; j != v33[1]; ++j )
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(j);
            v17 = (struct std::nothrow_t *)((v34 - (_QWORD)v15) & 0xFFFFFFFFFFFFFFF8uLL);
            v36 = v17;
            v29 = v15;
            if ( (unsigned __int64)v17 >= 0x1000 )
            {
              std::_Adjust_manually_vector_aligned(&v29, (unsigned __int64 *)&v36);
              v17 = v36;
              v15 = v29;
            }
            operator delete(v15, v17);
          }
        }
      }
      v5 = v38;
    }
    while ( StartPosition );
    v8 = v31;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
