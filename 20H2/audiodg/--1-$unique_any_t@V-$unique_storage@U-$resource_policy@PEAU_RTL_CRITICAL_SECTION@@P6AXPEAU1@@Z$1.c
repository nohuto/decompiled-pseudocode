/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14003EBB4
 * Callers:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x1400251AC (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x140027D44 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 *     _CSubmixImpl::OnLeftSubmixConnected_::_1_::dtor$0 @ 0x14002BC22 (_CSubmixImpl--OnLeftSubmixConnected_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::Cleanup_::_1_::dtor$0 @ 0x14002BC72 (_CAudioDeviceGraph--Cleanup_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$0 @ 0x14002BEC5 (_CSystemAudioDeviceCollection--Add_--_1_--dtor$0.c)
 *     _GraphStreamingResourceManager::RegisterThread_::_1_::dtor$0 @ 0x14002BEE9 (_GraphStreamingResourceManager--RegisterThread_--_1_--dtor$0.c)
 *     _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$1 @ 0x14002BF9F (_GraphStreamingResourceManager--RegisterDevice_--_1_--dtor$1.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$0 @ 0x14002C060 (_CAudioDeviceGraph--Initialize_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$7 @ 0x14002C120 (_CAudioDeviceGraph--Initialize_--_1_--dtor$7.c)
 *     _CSubmixImpl::OnLeftSubmixConnected_::_1_::dtor$2 @ 0x14002C1A1 (_CSubmixImpl--OnLeftSubmixConnected_--_1_--dtor$2.c)
 *     _CSubmixImpl::Initialize_::_1_::dtor$3 @ 0x14002C200 (_CSubmixImpl--Initialize_--_1_--dtor$3.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$1 @ 0x14002C5D0 (_CSubmixImpl--CreateStream_--_1_--dtor$1.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$8 @ 0x14002C650 (_CSubmixImpl--CreateStream_--_1_--dtor$8.c)
 *     _PublishDeviceGraphWnfState_::_1_::dtor$4 @ 0x14002D350 (_PublishDeviceGraphWnfState_--_1_--dtor$4.c)
 *     _CpuManager::RegisterDevice_::_1_::dtor$1 @ 0x140040263 (_CpuManager--RegisterDevice_--_1_--dtor$1.c)
 *     _CpuManager::RegisterProcess_::_1_::dtor$0 @ 0x14004045F (_CpuManager--RegisterProcess_--_1_--dtor$0.c)
 *     _CpuManager::RegisterThread_::_1_::dtor$0 @ 0x140040662 (_CpuManager--RegisterThread_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::UpdateLoopbackConstrictionLevel_::_1_::dtor$0 @ 0x14004A215 (_CAudioDeviceGraph--UpdateLoopbackConstrictionLevel_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::UpdateLoopbackConstrictionLevel_::_1_::dtor$1 @ 0x14004A221 (_CAudioDeviceGraph--UpdateLoopbackConstrictionLevel_--_1_--dtor$1.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$1 @ 0x14004D4C3 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$1.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$7 @ 0x14004D50B (_CStreamGroup--CreateBridgeStream_--_1_--dtor$7.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$1 @ 0x14004D7E8 (_CStreamGroup--CreateStream_--_1_--dtor$1.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$3 @ 0x14004D800 (_CStreamGroup--CreateStream_--_1_--dtor$3.c)
 *     _CStreamInstance::UnregisterResources_::_1_::dtor$0 @ 0x14004F370 (_CStreamInstance--UnregisterResources_--_1_--dtor$0.c)
 *     _CAudioHistoryBufferManager::Add_::_1_::dtor$0 @ 0x14004FA18 (_CAudioHistoryBufferManager--Add_--_1_--dtor$0.c)
 *     _CAudioHistoryBufferManager::GetAudioHistoryControlForStream_::_1_::dtor$1 @ 0x14004FD70 (_CAudioHistoryBufferManager--GetAudioHistoryControlForStream_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
