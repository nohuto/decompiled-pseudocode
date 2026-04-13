/*
 * XREFs of _lambda_e34527cb48b3e2822e62a7657f7a4fcf_::operator() @ 0x180078B74
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_e34527cb48b3e2822e62a7657f7a4fcf__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x18007B7E0 (std--_Func_impl_std--_Callable_obj__lambda_e34527cb48b3e2822e62a7657f7a4fcf__0__std_ea_18007B7E0.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x180033834 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x1800747DC (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180076A60 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800B05D0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall lambda_e34527cb48b3e2822e62a7657f7a4fcf_::operator()(__int64 a1, HSTRING a2, int a3, int a4)
{
  const WCHAR *v7; // rbx
  const WCHAR *StringRawBuffer; // rax
  RTL_SRWLOCK *v9; // rsi
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal **v10; // r8
  int TriggerRegistrationFromSetting; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 *v15; // rax
  const char *v16; // r9
  __int64 v17; // rcx
  int v19; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v21[4]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v23; // [rsp+80h] [rbp+8h] BYREF

  v21[2] = -2LL;
  v7 = **(const WCHAR ***)a1;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( CompareStringOrdinal(StringRawBuffer, -1, v7, -1, 1) != 2 || **(_DWORD **)(a1 + 8) != a3 )
    return 1;
  v9 = *(RTL_SRWLOCK **)(a1 + 16);
  AcquireSRWLockExclusive(v9);
  v21[3] = v9;
  v20 = 0LL;
  TriggerRegistrationFromSetting = Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting(
                                     *(Windows::Services::TargetedContent::Internal **)(a1 + 24),
                                     (struct CreativeFramework::Triggers::PropertySetHelper *)&v20,
                                     v10);
  try
  {
    if ( TriggerRegistrationFromSetting < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x249,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)TriggerRegistrationFromSetting);
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 32);
      v23 = a4;
      v19 = a3;
      v21[0] = v20;
      v13 = *(_QWORD *)(v12 + 24);
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64, _QWORD *, int *, int *))(*(_QWORD *)v13 + 16LL))(v13, v21, &v19, &v23);
        v14 = v20;
        v15 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
                v21,
                *(__int64 **)(a1 + 40));
        Windows::Services::TargetedContent::Internal::SetTriggerState(v15, v14, a4);
        v17 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        if ( v9 )
          ReleaseSRWLockExclusive(v9);
        return 1;
      }
    }
    std::_Xbad_function_call();
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x24D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      v16);
  }
  return 1;
}
