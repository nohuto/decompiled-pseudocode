/*
 * XREFs of ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x1800AD1E0
 * Callers:
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x180071FB8 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x18007217C (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     ?RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180072630 (-RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsC.c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x1800728F0 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800755D4 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180071C14 (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ??2@YAPEAX_K@Z @ 0x1800ADD58 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CreativeFramework::CommonHelper::SettingsContainer::GetValues(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  struct Windows::Foundation::Collections::IPropertySet *v6; // rsi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Foundation::Collections::IPropertySet *v11; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+58h] [rbp+10h]
  _DWORD *v13; // [rsp+60h] [rbp+18h]

  v12 = a2;
  v11 = 0LL;
  v3 = *(__int64 **)(a1 + 8);
  v4 = *v3;
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Foundation::Collections::IPropertySet **))(v4 + 64))(
         v3,
         &v11);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x1800AD2A9LL);
  }
  v6 = v11;
  v7 = operator new(0x28uLL);
  v8 = v7;
  v13 = v7;
  if ( v7 )
  {
    v7[2] = 1;
    v7[3] = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj<CreativeFramework::Triggers::PropertySetHelper>::`vftable';
    CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
      (CreativeFramework::Triggers::PropertySetHelper *)(v7 + 4),
      v6);
  }
  else
  {
    v8 = 0LL;
  }
  a2[1] = v8;
  *a2 = v8 + 4;
  if ( v11 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v11 + 16LL))(v11);
  return a2;
}
