/*
 * XREFs of ?UpdateTriggerStateIfNeeded@Internal@TargetedContent@Services@Windows@@YAJPEAUHSTRING__@@AEAVsrwlock@wil@@V?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@W4TargetedContentTriggerState@2345@1@Z@std@@@Z @ 0x18007901C
 * Callers:
 *     _lambda_b59dbdfd0007f2d89c20db91cc7697cd_::operator() @ 0x18006A198 (_lambda_b59dbdfd0007f2d89c20db91cc7697cd_--operator().c)
 * Callees:
 *     ?GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x180074A84 (-GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$share.c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x180075570 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ??2@YAPEAX_K@Z @ 0x1800B2468 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800B2658 (-_Xbad_alloc@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Services::TargetedContent::Internal::UpdateTriggerStateIfNeeded(
        HSTRING a1,
        __int64 a2,
        __int64 a3)
{
  PCWSTR StringRawBuffer; // rax
  char *v5; // rax
  __int64 *TriggerRegistrationSettingsContainer; // rax
  __int64 v7; // rdx
  const char *v8; // r9
  __int64 v9; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  PCWSTR v14; // [rsp+20h] [rbp-88h] BYREF
  __int128 v15; // [rsp+28h] [rbp-80h]
  __int64 v16; // [rsp+38h] [rbp-70h]
  __int64 v17; // [rsp+40h] [rbp-68h]
  _BYTE *v18; // [rsp+48h] [rbp-60h]
  _BYTE v19[16]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v20[24]; // [rsp+68h] [rbp-40h] BYREF
  char *v21; // [rsp+80h] [rbp-28h]
  __int64 v22; // [rsp+88h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v17 = -2LL;
  v22 = a3;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  try
  {
    v14 = StringRawBuffer;
    v18 = v20;
    *(_QWORD *)&v15 = &v14;
    *((_QWORD *)&v15 + 1) = &`anonymous namespace'::g_triggerManagerLock;
    v16 = a3;
    v21 = 0LL;
    v5 = (char *)operator new(0x28uLL);
    if ( !v5 )
      std::_Xbad_alloc();
    *(_QWORD *)v5 = off_1800EAB48;
    *(_OWORD *)(v5 + 8) = v15;
    *((_QWORD *)v5 + 3) = v16;
    v21 = v5;
    TriggerRegistrationSettingsContainer = (__int64 *)Windows::Services::TargetedContent::Internal::GetTriggerRegistrationSettingsContainer((__int64)v19);
    Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer(
      TriggerRegistrationSettingsContainer,
      (__int64)v20);
  }
  catch ( ... )
  {
    LODWORD(v14) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x255,
                     (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                     v8);
    v11 = v22;
    v12 = *(_QWORD *)(v22 + 24);
    if ( v12 )
    {
      LOBYTE(v13) = v12 != v22;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v13);
      *(_QWORD *)(v11 + 24) = 0LL;
    }
    return (unsigned int)v14;
  }
  v9 = *(_QWORD *)(a3 + 24);
  if ( v9 )
  {
    LOBYTE(v7) = v9 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v7);
    *(_QWORD *)(a3 + 24) = 0LL;
  }
  return 0LL;
}
