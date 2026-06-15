/*
 * XREFs of ??1?$CComQIPtr@UIConnector@@$1?_GUID_9c2c4058_23f5_41de_877a_df3af236a09e@@3U__s_GUID@@B@ATL@@QEAA@XZ @ 0x180105838
 * Callers:
 *     _CKsNotificationsMonitor::Initialize_::_1_::dtor$0 @ 0x18007B020 (_CKsNotificationsMonitor--Initialize_--_1_--dtor$0.c)
 *     _KsNotifications_ServiceStart_::_1_::dtor$0 @ 0x18007B1A0 (_KsNotifications_ServiceStart_--_1_--dtor$0.c)
 *     _KsNotifications_AudioInterfaceArrival_::_1_::dtor$0 @ 0x180105A5C (_KsNotifications_AudioInterfaceArrival_--_1_--dtor$0.c)
 *     _KsNotifications_AudioInterfaceArrival_::_1_::dtor$2 @ 0x180105A74 (_KsNotifications_AudioInterfaceArrival_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComQIPtr<IConnector,&__s_GUID const _GUID_9c2c4058_23f5_41de_877a_df3af236a09e>::~CComQIPtr<IConnector,&__s_GUID const _GUID_9c2c4058_23f5_41de_877a_df3af236a09e>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
