/*
 * XREFs of ?Prelaunch@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x180196930
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

__int64 __fastcall CortanaSharedExperienceManager::Prelaunch(CortanaSharedExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-E0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v7; // [rsp+40h] [rbp-C0h]
  _QWORD v8[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  wil::ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v8);
  v8[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)v8);
  LOBYTE(v5) = 0;
  if ( (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 63) + 72LL))(*((_QWORD *)this + 63), &v5) >= 0
    && (_BYTE)v5
    || (CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::CortanaExperienceManager_PreLaunch_LaunchRequired((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)v8),
        v7 = 0LL,
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"StartMode=Idle&QuerySource=Hidden&Positioner=desktop",
          0x35u,
          0x34u),
        v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 62) + 72LL))(*((_QWORD *)this + 62), v7),
        v3 = v2,
        v2 >= 0) )
  {
    wil::ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(v8);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    v7 = 0LL;
  }
  CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::~CortanaExperienceManager_PreLaunch((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)v8);
  return v3;
}
