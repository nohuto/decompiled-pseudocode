/*
 * XREFs of ??1?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@QEAA@XZ @ 0x180018648
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x180030594 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 *     _wil::details_abi::RecordWnfUsageIndex_::_1_::dtor$5 @ 0x1800CEA1E (_wil--details_abi--RecordWnfUsageIndex_--_1_--dtor$5.c)
 *     _ContentManagement::ContentManagementService::SendAppServiceMessage_::_1_::dtor$0 @ 0x1800CFDC8 (_ContentManagement--ContentManagementService--SendAppServiceMessage_--_1_--dtor$0.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800D0AD0 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RuntimeClas_ea_1800D0AD0.c)
 *     _wil::AdaptFixedSizeToAllocatedResult_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_wchar_t___void_(__cdecl_)(void__)_&CoTaskMemFree_wistd::integral_constant_unsigned___int64_0__wchar_t___wchar_t___0_std::nullptr_t______260__::_1_::dtor$0 @ 0x1800D65D0 (_wil--AdaptFixedSizeToAllocatedResult_wil--unique_any_t_wil--details--unique_storage_wil--detail.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<long (CreativeFramework::Triggers::ValueSetHelper &)>::~function<long (CreativeFramework::Triggers::ValueSetHelper &)>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
