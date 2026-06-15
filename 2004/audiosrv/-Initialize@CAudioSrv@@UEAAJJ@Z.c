/*
 * XREFs of ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180063220
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056810 (--2@YAPEAX_K@Z.c)
 *     ?KsNotifications_ServiceStart@@YAJXZ @ 0x1800585A4 (-KsNotifications_ServiceStart@@YAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z @ 0x18006319C (--0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z.c)
 *     ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x1800634E8 (--0-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ.c)
 *     ?MME_ServiceStart@@YAJXZ @ 0x1800635D8 (-MME_ServiceStart@@YAJXZ.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063D30 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180064FD4 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AC9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800B8878 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x1800BBF8C (McTemplateU0zq_EtwEventWriteTransfer.c)
 *     WPP_SF_ @ 0x1800BC030 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800BC05C (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::Initialize(CAudioSrv *this, int a2)
{
  _BYTE *v4; // rax
  _BYTE *v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rax
  CPowerReferenceManager *v7; // rax
  CPowerReferenceManager *v8; // rbx
  CPowerReferenceManager *v9; // rbx
  HRESULT v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ebx
  LPVOID ppv; // [rsp+30h] [rbp-49h] BYREF
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+38h] [rbp-41h] BYREF
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+50h] [rbp-29h] BYREF

  memset_0(&spc, 0, sizeof(spc));
  if ( !a2 )
  {
    v4 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v5 = v4;
    ppv = v4;
    if ( v4 )
    {
      ATL::CAtlExeModuleT<CAudioServiceModule>::CAtlExeModuleT<CAudioServiceModule>(v4);
      *(_QWORD *)v5 = &CAudioServiceModule::`vftable';
      v5[96] = 0;
    }
    else
    {
      v5 = 0LL;
    }
    *((_QWORD *)this + 11) = v5;
    if ( !v5 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_bd0a34596ab73049bcbc5190e65788c6_Traceguids);
      }
      a2 = -2147024882;
    }
  }
  GetPwrCapabilities(&spc);
  if ( !a2 )
  {
    v6 = (struct _RTL_CRITICAL_SECTION *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
    ppv = v6;
    if ( v6 )
      v6 = (struct _RTL_CRITICAL_SECTION *)CAudioDGProcess::CAudioDGProcess(
                                             (CAudioDGProcess *)v6,
                                             (struct IMonitorDGTermination *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL)));
    g_ADGProcess = v6;
    if ( v6 )
    {
      v7 = (CPowerReferenceManager *)operator new(0x198uLL);
      v8 = v7;
      if ( v7 )
      {
        memset_0(v7, 0, 0x198uLL);
        v7 = CPowerReferenceManager::CPowerReferenceManager(v8);
      }
      v9 = g_powerReferenceManager;
      g_powerReferenceManager = v7;
      if ( v9 )
      {
        CPowerReferenceManager::~CPowerReferenceManager(v9);
        operator delete(v9, (const struct std::nothrow_t *)0x198);
      }
    }
    else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_bd0a34596ab73049bcbc5190e65788c6_Traceguids);
    }
  }
  ppv = 0LL;
  v10 = CoCreateInstance(&CLSID_GlobalOptions, 0LL, 1u, &GUID_0000015b_0000_0000_c000_000000000046, &ppv);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16LL,
        &WPP_bd0a34596ab73049bcbc5190e65788c6_Traceguids,
        (unsigned int)v10);
    }
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)ppv + 24LL))(ppv, 5LL, 1LL);
  }
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( !v11 )
  {
    v11 = CAudioSrv::VAD_AudiosrvServiceStart(this);
    if ( !v11 )
    {
      v12 = MME_ServiceStart();
      v15 = v12;
      if ( v12 < 0 && (Microsoft_Windows_AudioEnableBits & 4) != 0 )
        McTemplateU0zq_EtwEventWriteTransfer(v14, v13, L"MME", (unsigned int)v12);
      EventAttributes.nLength = 24;
      EventAttributes.lpSecurityDescriptor = 0LL;
      EventAttributes.bInheritHandle = 0;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_bd0a34596ab73049bcbc5190e65788c6_Traceguids);
      }
      if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
             L"D:(A;;0x00100003;;;S-1-5-80-2676549577-1911656217-2625096541-4178041876-1366760775)(A;;0x00100000;;;SY)",
             1u,
             &EventAttributes.lpSecurityDescriptor,
             0LL) )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_bd0a34596ab73049bcbc5190e65788c6_Traceguids);
        }
        g_hCanAcceptMMCClientEvent = CreateEventExW(
                                       &EventAttributes,
                                       L"Global\\AudioSrv_CanAcceptMMCClient",
                                       1u,
                                       0x100002u);
        LocalFree(EventAttributes.lpSecurityDescriptor);
      }
      if ( v15 < 0 )
        AudSrvTraceLoggingErrorHelper("CAudioSrv::Initialize", 596, v15);
      if ( (char *)MyAtmosCheckCallback::m_pCallback != (char *)CPolicyConfig::UpdateRenderingEndpointsSpatialSettingsAsync )
      {
        EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
        MyAtmosCheckCallback::m_pCallback = (void (*)(void))CPolicyConfig::UpdateRenderingEndpointsSpatialSettingsAsync;
        LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
      }
      return (unsigned int)KsNotifications_ServiceStart();
    }
  }
  return v11;
}
