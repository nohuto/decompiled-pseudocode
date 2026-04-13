/*
 * XREFs of ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x1800741C8
 * Callers:
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800742CC (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VIS_ea_1800742CC.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x18007438C (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     ?RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180074840 (-RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsC.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x180078BD8 (-HasKey@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x1800AF3F0 (-GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VPropertySetHel.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall Windows::Services::TargetedContent::Internal::AlreadyRegistered(_QWORD *a1, __int64 a2)
{
  int HasKey; // eax
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rbx
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v11; // [rsp+60h] [rbp+18h] BYREF

  CreativeFramework::CommonHelper::SettingsContainer::GetValues(*a1, &v8);
  v11 = 0;
  HasKey = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
             v8,
             a2,
             &v11);
  if ( HasKey < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x62,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)HasKey);
    JUMPOUT(0x1800742C5LL);
  }
  v5 = v9;
  if ( v9 )
  {
    if ( !_InterlockedDecrement(v9 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( !_InterlockedDecrement(v5 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = (volatile signed __int32 *)a1[1];
  if ( v6 )
  {
    if ( !_InterlockedDecrement(v6 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( !_InterlockedDecrement(v6 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return v11;
}
