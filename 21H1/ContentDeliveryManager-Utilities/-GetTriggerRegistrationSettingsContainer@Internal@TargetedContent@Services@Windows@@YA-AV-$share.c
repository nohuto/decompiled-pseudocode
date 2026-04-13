/*
 * XREFs of ?GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x180071E04
 * Callers:
 *     ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180071ED0 (-GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA-AV.c)
 *     ?UpdateTriggerStateIfNeeded@Internal@TargetedContent@Services@Windows@@YAJPEAUHSTRING__@@AEAVsrwlock@wil@@V?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@W4TargetedContentTriggerState@2345@1@Z@std@@@Z @ 0x18007639C (-UpdateTriggerStateIfNeeded@Internal@TargetedContent@Services@Windows@@YAJPEAUHSTRING__@@AEAVsrw.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800180B8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@_N@Z @ 0x1800ACFE0 (-CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VISetting.c)
 *     ?MakeRootSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x1800AD830 (-MakeRootSettingsContainer@CommonHelper@CreativeFramework@@YA-AV-$shared_ptr@VISettingsContainer.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTriggerRegistrationSettingsContainer(__int64 a1)
{
  __int64 v2; // rbx
  HSTRING_HEADER *v3; // rax
  __int64 v4; // r9
  volatile signed __int32 *v5; // rbx
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int32 *v8; // [rsp+28h] [rbp-40h]
  __int64 v9; // [rsp+30h] [rbp-38h]
  HSTRING_HEADER v10; // [rsp+38h] [rbp-30h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v9 = -2LL;
  v7 = a1;
  v2 = *(_QWORD *)CreativeFramework::CommonHelper::MakeRootSettingsContainer(&v7);
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, (const WCHAR **)&off_1800EFCE8);
  LOBYTE(v4) = 1;
  CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(v2, a1, v3[1].Reserved.Reserved1, v4, v7);
  v11 = 0LL;
  v5 = v8;
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return a1;
}
