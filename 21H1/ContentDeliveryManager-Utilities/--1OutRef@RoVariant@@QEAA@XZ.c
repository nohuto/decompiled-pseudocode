/*
 * XREFs of ??1OutRef@RoVariant@@QEAA@XZ @ 0x180071AF8
 * Callers:
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x18007217C (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x1800728F0 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180076ADC (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerState_::_1_::dtor$8 @ 0x1800D1170 (_Windows--Services--TargetedContent--Internal--SetTriggerState_--_1_--dtor$8.c)
 *     _Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer_::_1_::dtor$9 @ 0x1800D1236 (_Windows--Services--TargetedContent--Internal--EnumerateAllTriggersInContainer_--_1_--dtor$9.c)
 *     _CreativeFramework::Triggers::PropertySetHelperBase_&RuntimeClass_Windows_Foundation_Collections_PropertySet_::SetCompositeValue_::_1_::dtor$2 @ 0x1800D196E (_CreativeFramework--Triggers--PropertySetHelperBase_-RuntimeClass_Windows_Foundatio_ea_1800D196E.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall RoVariant::OutRef::~OutRef(RoVariant::OutRef *this)
{
  __int64 *v1; // r14
  __int64 v2; // rbx
  __int64 v3; // rsi
  int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(__int64 **)this;
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    v5 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v2)(
           *((_QWORD *)this + 1),
           &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
           &v8);
    v4 = v5;
    if ( v5 < 0 )
    {
      if ( v5 == -2147467262 )
      {
        v3 = v2;
        v4 = 3;
      }
      else
      {
        v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      }
    }
    else
    {
      v3 = v8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      v4 = 7;
    }
  }
  else
  {
    v3 = 0LL;
    v4 = 0;
  }
  v6 = *v1;
  *v1 = v3;
  v7 = *((_DWORD *)v1 + 2);
  *((_DWORD *)v1 + 2) = v4;
  if ( v6 )
  {
    if ( ((v7 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
