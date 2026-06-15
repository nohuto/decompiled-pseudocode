/*
 * XREFs of ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800BBAA4
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800BB3D0 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x180035CE8 (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@?$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvcHostModule@Internal@Windows@@XZ @ 0x180054870 (-Create@-$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvc.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ @ 0x1800BB684 (-Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ.c)
 *     WPP_SF_ @ 0x1800BC030 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800BC05C (WPP_SF_d.c)
 *     ?DestroyAudioSessionManagerProvider@@YAXXZ @ 0x1800D1A2C (-DestroyAudioSessionManagerProvider@@YAXXZ.c)
 *     ?DestroyDeviceGraphManager@@YAXXZ @ 0x1800E5470 (-DestroyDeviceGraphManager@@YAXXZ.c)
 *     ?DestroySpatialAudioResourceManager@@YAXXZ @ 0x180107044 (-DestroySpatialAudioResourceManager@@YAXXZ.c)
 *     ?UninitializeEndpointCharacteristicsCache@@YAJXZ @ 0x1801202B8 (-UninitializeEndpointCharacteristicsCache@@YAJXZ.c)
 */

__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStop(CAudioSrv *this)
{
  CAudioSessionManager *v2; // rcx
  __int64 *v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  unsigned int v7; // eax
  void *v8; // rbx
  CPolicyConfig *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 38LL, &WPP_bd0a34596ab73049bcbc5190e65788c6_Traceguids);
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 26) )
  {
    v3 = Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::SvcHostModule>::Create();
    v4 = Windows::Internal::ServiceModuleBase::Uninitialize((Windows::Internal::ServiceModuleBase *)v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x625,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
    *((_DWORD *)this + 26) = 0;
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 25) )
  {
    if ( v2 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v2 + 28) & 4) != 0
      && *((_BYTE *)v2 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v2 + 2), 39LL, &WPP_bd0a34596ab73049bcbc5190e65788c6_Traceguids);
    }
    v7 = RpcServerUnregisterIfEx(&unk_180149EB0, 0LL, 1);
    if ( v7
      && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_bd0a34596ab73049bcbc5190e65788c6_Traceguids, v7);
    }
    *((_DWORD *)this + 25) = 0;
  }
  if ( g_DuckingManager )
    (*(void (__fastcall **)(struct IAudioDuckingManager *))(*(_QWORD *)g_DuckingManager + 24LL))(g_DuckingManager);
  EnterCriticalSection(&g_csVadList);
  ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll((__int64)&g_VADServerList);
  LeaveCriticalSection(&g_csVadList);
  DestroySpatialAudioResourceManager();
  DestroyAudioSessionManagerProvider();
  if ( g_AudioResourceManager )
  {
    (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 16LL))(g_AudioResourceManager);
    g_AudioResourceManager = 0LL;
  }
  DestroyDeviceGraphManager();
  v8 = g_AudioHealthMonitor;
  if ( g_AudioHealthMonitor )
  {
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)g_AudioHealthMonitor + 24));
    operator delete(v8, (const struct std::nothrow_t *)0x48);
  }
  g_AudioHealthMonitor = 0LL;
  UninitializeEndpointCharacteristicsCache();
  if ( g_pVolumeProvider )
  {
    (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 16LL))(g_pVolumeProvider);
    g_pVolumeProvider = 0LL;
  }
  v9 = g_PolicyConfig;
  if ( g_PolicyConfig )
  {
    g_PolicyConfig = 0LL;
    (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_bd0a34596ab73049bcbc5190e65788c6_Traceguids, 0LL);
  }
  return 0LL;
}
