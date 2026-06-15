/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14001A634
 * Callers:
 *     _lambda_5035b992506f4af81a770c5842624510_::_lambda_invoker_cdecl_ @ 0x14001EC80 (_lambda_5035b992506f4af81a770c5842624510_--_lambda_invoker_cdecl_.c)
 *     _lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_ @ 0x14001ECF0 (_lambda_d51448ba32f8ef42e59400edd4566183_--_lambda_invoker_cdecl_.c)
 *     ??1AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x140020E2C (--1AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAA@XZ.c)
 *     ?CMModulesNotificationCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x140021F00 (-CMModulesNotificationCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAKPEAUHC.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x14002248C (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x140022550 (-EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 *     ?InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14002432C (-InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 *     _Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::InitializeEvents_::_1_::dtor$3 @ 0x14002468A (_Windows--Media--Devices--Internal--AudioDeviceBrokerDevice--InitializeEvents_--_1_--dtor$3.c)
 *     ?KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x140024C8C (-KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@K.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x1400252BC (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x14002599C (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?RecordFeatureUsage@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@@_K@Z @ 0x140025C50 (-RecordFeatureUsage@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@.c)
 *     _wil::details_abi::FeatureStateData::RecordFeatureUsage_::_1_::dtor$0 @ 0x140025D0A (_wil--details_abi--FeatureStateData--RecordFeatureUsage_--_1_--dtor$0.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x140025D1C (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x140025E1C (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1400277BC (-SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANG.c)
 *     _wil::details::FeatureStateManager::SubscribeToEnabledStateChanges_::_1_::dtor$0 @ 0x140027832 (_wil--details--FeatureStateManager--SubscribeToEnabledStateChanges_--_1_--dtor$0.c)
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x140027844 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     _wil::details::FeatureStateManager::SubscribeToUsageFlush_::_1_::dtor$0 @ 0x1400278D4 (_wil--details--FeatureStateManager--SubscribeToUsageFlush_--_1_--dtor$0.c)
 *     ?ThreadpoolCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x140027A40 (-ThreadpoolCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_.c)
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x140027DE4 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
