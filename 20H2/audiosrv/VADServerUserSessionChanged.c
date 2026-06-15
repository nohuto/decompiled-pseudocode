/*
 * XREFs of VADServerUserSessionChanged @ 0x18002A948
 * Callers:
 *     ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x18002A8F0 (-Invoke@SESSION_EVENT@@UEAAXXZ.c)
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180001F80 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180002010 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180023320 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x180023340 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18002ABC0 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002AD50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002AEC8 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18002C4A0 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800BB3CC (WPP_SF_d.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800CF35C (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ??$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCAudioSessionManagerProvider@@U?$integral_constant@_N$00@wistd@@PEAPEAV3@@Z @ 0x1800D0A20 (--$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCA.c)
 *     ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x1800D1074 (-NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z.c)
 */

__int64 __fastcall VADServerUserSessionChanged(unsigned int a1, struct CAudioSessionManagerProvider *a2)
{
  DWORD v2; // r15d
  struct CAudioSessionManagerProvider *v3; // r13
  unsigned int v4; // edi
  __int64 v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // rdx
  struct _RTL_CRITICAL_SECTION *v8; // r12
  __int64 *v9; // rsi
  unsigned int v10; // r13d
  __int64 *v11; // r12
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r8
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v16; // rbx
  struct _RTL_CRITICAL_SECTION *v18[2]; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v19[144]; // [rsp+30h] [rbp-39h] BYREF
  struct CAudioSessionManagerProvider *v21; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int TsAudioProtocol; // [rsp+E0h] [rbp+77h]
  __int64 StartPosition; // [rsp+E8h] [rbp+7Fh] BYREF

  v21 = a2;
  v2 = *((_DWORD *)a2 + 1);
  v3 = a2;
  v4 = a1;
  if ( (unsigned int)IsTSSessionIdAudioProtocolSupported() )
  {
    v5 = 0LL;
    TsAudioProtocol = GetTsAudioProtocol(v2);
    StartPosition = 0LL;
    v6 = TsAudioProtocol;
    EnterCriticalSection(&g_SessionManagerProviderLock);
    if ( g_SingletonAudioSessionManagerProvider )
    {
      wil::details::default_query_policy::query_dispatch<CAudioSessionManagerProvider,CAudioSessionManagerProvider>(
        g_SingletonAudioSessionManagerProvider,
        v7,
        &StartPosition);
      v5 = StartPosition;
    }
    LeaveCriticalSection(&g_SessionManagerProviderLock);
    if ( v5 )
    {
      v8 = (struct _RTL_CRITICAL_SECTION *)(v5 + 16);
      EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 16));
      v9 = *(__int64 **)(v5 + 56);
      if ( v9 != *(__int64 **)(v5 + 64) )
      {
        v10 = TsAudioProtocol;
        v11 = *(__int64 **)(v5 + 64);
        do
        {
          v12 = *v9;
          CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v19);
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 53LL, &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids, v2);
          }
          if ( *(_DWORD *)(v12 + 304) != v10 )
          {
            Microsoft::WRL::Wrappers::CriticalSection::Lock((struct _RTL_CRITICAL_SECTION *)(v12 + 16), v18);
            StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(v12 + 56);
            while ( StartPosition )
            {
              v13 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                                 v12 + 56,
                                 &StartPosition);
              if ( v13 && *(_DWORD *)(v13 + 716) == v2 )
              {
                LOBYTE(v14) = 1;
                (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v13 + 16) + 32LL))(v13 + 16, 4LL, v14);
              }
            }
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v18);
          }
          CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v19);
          ++v9;
        }
        while ( v9 != v11 );
        v4 = a1;
        v8 = (struct _RTL_CRITICAL_SECTION *)(v5 + 16);
        v3 = v21;
      }
      if ( v8 )
        LeaveCriticalSection(v8);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
      v6 = TsAudioProtocol;
    }
    if ( g_pVolumeProvider )
      (*(void (__fastcall **)(struct IVolumeProvider *, _QWORD, _QWORD))(*(_QWORD *)g_pVolumeProvider + 32LL))(
        g_pVolumeProvider,
        v2,
        v6);
    if ( v4 - 1 > 4 )
    {
      if ( v4 <= 6 )
        goto LABEL_35;
      if ( v4 <= 9 )
        return 0LL;
      if ( v4 == 11 )
      {
        v21 = 0LL;
        AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v21);
        v16 = v21;
        if ( AudioSessionManagerProvider >= 0 )
          CAudioSessionManagerProvider::NotifySessionTerminate(v21, *((_DWORD *)v3 + 1));
        if ( v16 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v16);
      }
      else
      {
LABEL_35:
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_bd0a34596ab73049bcbc5190e65788c6_Traceguids, v4);
        }
      }
    }
  }
  return 0LL;
}
