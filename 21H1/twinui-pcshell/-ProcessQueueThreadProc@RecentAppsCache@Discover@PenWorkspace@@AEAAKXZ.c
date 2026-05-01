/*
 * XREFs of ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1801128EC
 * Callers:
 *     ?s_ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@CAKPEAX@Z @ 0x180200820 (-s_ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@CAKPEAX@Z.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000F6F0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x180033830 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180115128 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18017C820 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x1801FCA9C (-FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ.c)
 *     _anonymous_namespace_::GetCurTime @ 0x1801FCCB4 (_anonymous_namespace_--GetCurTime.c)
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801FD548 (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801FD8EC (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801FEA64 (-PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801FED60 (-SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::ProcessQueueThreadProc(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  HRESULT Instance; // eax
  int v3; // edi
  int Defaults; // eax
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  DWORD v8; // eax
  const char *v9; // r9
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // r15d
  int v14; // eax
  RTL_SRWLOCK *v15; // rdi
  volatile signed __int32 *v16; // rdi
  int v17; // eax
  int v18; // eax
  unsigned __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  struct _FILETIME FileTime; // [rsp+30h] [rbp-40h] BYREF
  RTL_SRWLOCK *v23; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v24[4]; // [rsp+40h] [rbp-30h]
  _SYSTEMTIME SystemTime; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  CoInitializeEx(0LL, 2u);
  if ( *((_QWORD *)this + 23)
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23),
        Instance = CoCreateInstance(
                     &CLSID_StartMenuCacheAndAppResolver,
                     0LL,
                     3u,
                     &GUID_de25675a_72de_44b4_9373_05170450c140,
                     (LPVOID *)this + 23),
        v3 = Instance,
        Instance >= 0) )
  {
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19F,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)Instance);
  }
  if ( v3 >= 0 )
  {
    if ( (int)PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk(this) < 0 )
    {
      PenWorkspaceBrokerTelemetry::FailedToLoadDataFromDisk();
      Defaults = PenWorkspace::Discover::RecentAppsCache::LoadDefaults(this);
      if ( Defaults < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x150,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)Defaults);
    }
    anonymous_namespace_::GetCurTime((LPFILETIME)this + 22);
    FileTime = (struct _FILETIME)(*((_QWORD *)this + 22) + 72000000000LL);
    v6 = HIDWORD(*(unsigned __int64 *)&FileTime);
    v7 = 0LL;
    *((_DWORD *)this + 44) = FileTime.dwLowDateTime;
LABEL_11:
    *((_DWORD *)this + 45) = v6;
    while ( 1 )
    {
      if ( !v7 )
      {
        v8 = WaitForSingleObjectEx(*((HANDLE *)this + 19), 0xFFFFFFFF, 0);
        if ( v8 != 258 && v8 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xA09,
            (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
            v9);
          __debugbreak();
        }
        if ( v8 )
          break;
      }
      if ( *((_BYTE *)this + 200) )
        break;
      AcquireSRWLockExclusive((PSRWLOCK)this + 20);
      v10 = *((_QWORD *)this + 17);
      v23 = (RTL_SRWLOCK *)((char *)this + 160);
      if ( v10 )
      {
        v11 = (_QWORD *)*((_QWORD *)this + 13);
        if ( v11 )
          v11 = (_QWORD *)*v11;
        v12 = *(_QWORD *)(v11[1] + 8 * (*((_QWORD *)this + 16) & (v11[2] - 1LL)));
        v13 = *(_DWORD *)(v12 + 8);
        *(_QWORD *)v24 = *(_QWORD *)v12;
        *((_QWORD *)this + 17) = v10 - 1;
        if ( v10 == 1 )
          *((_QWORD *)this + 16) = 0LL;
        else
          ++*((_QWORD *)this + 16);
        v7 = v10 - 1;
        if ( this != (PenWorkspace::Discover::RecentAppsCache *)-160LL )
          ReleaseSRWLockExclusive((PSRWLOCK)this + 20);
        GetSystemTime(&SystemTime);
        SystemTimeToFileTime(&SystemTime, &FileTime);
        v14 = *((_DWORD *)this + 20);
        if ( v14 )
        {
          if ( v14 == v24[0] )
          {
            v15 = (RTL_SRWLOCK *)(*((_QWORD *)this + 11) + 48LL);
            AcquireSRWLockExclusive(v15);
            *(_DWORD *)(*((_QWORD *)this + 11) + 32LL) += v13;
            *(struct _FILETIME *)(*((_QWORD *)this + 11) + 36LL) = FileTime;
            if ( v15 )
              ReleaseSRWLockExclusive(v15);
          }
        }
        *((_DWORD *)this + 20) = 0;
        v16 = (volatile signed __int32 *)*((_QWORD *)this + 12);
        *((_QWORD *)this + 12) = 0LL;
        *((_QWORD *)this + 11) = 0LL;
        if ( v16 && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
          std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v16);
        }
        if ( v24[1] )
          PenWorkspace::Discover::RecentAppsCache::TrackProcess(this, v24[1], &FileTime);
        if ( CompareFileTime(&FileTime, (const FILETIME *)this + 22) > 0 )
        {
          v17 = PenWorkspace::Discover::RecentAppsCache::PurgeLowUsageApps(this);
          if ( v17 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x187,
              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)(unsigned int)v17);
          v18 = PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(this);
          if ( v18 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x189,
              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)(unsigned int)v18);
          v19 = *(_QWORD *)&FileTime + 72000000000LL;
          *((_DWORD *)this + 44) = FileTime.dwLowDateTime - 1014444032;
          v6 = HIDWORD(v19);
          goto LABEL_11;
        }
      }
      else
      {
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v23);
      }
    }
    v20 = PenWorkspace::Discover::RecentAppsCache::PurgeLowUsageApps(this);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x18F,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v20);
    v21 = PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(this);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x192,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v21);
    CoUninitialize();
    (*(void (__fastcall **)(PenWorkspace::Discover::RecentAppsCache *))(*(_QWORD *)this + 16LL))(this);
    return 1LL;
  }
  else
  {
    CoUninitialize();
    (*(void (__fastcall **)(PenWorkspace::Discover::RecentAppsCache *))(*(_QWORD *)this + 16LL))(this);
    return 0LL;
  }
}
