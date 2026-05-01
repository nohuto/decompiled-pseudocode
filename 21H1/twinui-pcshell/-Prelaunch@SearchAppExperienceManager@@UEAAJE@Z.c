/*
 * XREFs of ?Prelaunch@SearchAppExperienceManager@@UEAAJE@Z @ 0x1801D2E60
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180193310 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??1CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801939A8 (--1CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?CortanaExperienceManager_PreLaunch_LaunchRequired@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801942C4 (-CortanaExperienceManager_PreLaunch_LaunchRequired@CortanaExperienceManager_PreLaunch@CortanaPro.c)
 *     ?StartActivity@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAAXXZ @ 0x180197CF0 (-StartActivity@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180197E28 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderT.c)
 */

__int64 __fastcall SearchAppExperienceManager::Prelaunch(SearchAppExperienceManager *this)
{
  WINBOOL v2; // edx
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-E0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v8; // [rsp+40h] [rbp-C0h]
  _QWORD v9[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  wil::ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v9);
  v9[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)v9);
  LOBYTE(v6) = 0;
  if ( (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 64) + 72LL))(*((_QWORD *)this + 64), &v6) >= 0
    && (_BYTE)v6
    || (CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::CortanaExperienceManager_PreLaunch_LaunchRequired((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)v9),
        v8 = 0LL,
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"StartMode=Idle&QuerySource=Hidden&Positioner=desktop",
          0x35u,
          0x34u),
        v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 63) + 72LL))(*((_QWORD *)this + 63), v8),
        v4 = v3,
        v3 >= 0) )
  {
    wil::ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v9, v2);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x186,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    v8 = 0LL;
  }
  CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::~CortanaExperienceManager_PreLaunch((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)v9);
  return v4;
}
