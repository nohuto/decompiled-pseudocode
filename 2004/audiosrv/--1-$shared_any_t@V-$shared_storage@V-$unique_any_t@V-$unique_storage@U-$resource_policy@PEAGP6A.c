/*
 * XREFs of ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800B8648
 * Callers:
 *     _lambda_87f555b56693a8b4c492a05e321e535a_::__lambda_87f555b56693a8b4c492a05e321e535a_ @ 0x180073630 (_lambda_87f555b56693a8b4c492a05e321e535a_--__lambda_87f555b56693a8b4c492a05e321e535a_.c)
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$0 @ 0x180076990 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$0.c)
 *     _CSebNotifier::AcquireSebReference_::_1_::dtor$0 @ 0x180076A80 (_CSebNotifier--AcquireSebReference_--_1_--dtor$0.c)
 *     _CSebNotifier::AcquireSebReference_::_1_::dtor$1 @ 0x180076AB0 (_CSebNotifier--AcquireSebReference_--_1_--dtor$1.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::dtor$0 @ 0x180076B20 (_CPlaybackNotifier--AcquireReference_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::GetOverridingChainDescriptorIndex_::_1_::dtor$1 @ 0x180076B50 (_SystemEffectDescriptor--GetOverridingChainDescriptorIndex_--_1_--dtor$1.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$0 @ 0x180076CF0 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$0.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$105 @ 0x180078660 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$105.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$119 @ 0x180078740 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$119.c)
 *     _CreateSaDevice_::_1_::dtor$203 @ 0x1800798D0 (_CreateSaDevice_--_1_--dtor$203.c)
 *     _CreateSaDevice_::_1_::dtor$246 @ 0x180079B10 (_CreateSaDevice_--_1_--dtor$246.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$6 @ 0x18007A590 (_CAudioResourceManager--DestroyStream_--_1_--dtor$6.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$7 @ 0x18007B414 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$7.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$6 @ 0x18007C520 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$6.c)
 *     _SystemEffectChainDescriptor::Resolve_::_1_::dtor$0 @ 0x18007C66D (_SystemEffectChainDescriptor--Resolve_--_1_--dtor$0.c)
 *     _CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor$6 @ 0x1800E269A (_CKsSoftwareNotificationsMonitor--OnFormatCapsChange_--_1_--dtor$6.c)
 *     _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::dtor$2 @ 0x1800E6886 (_CSharedStreamGroupProxy--OnEndpointUnavailableForUse_--_1_--dtor$2.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$0 @ 0x1800F0237 (_CCaptureNotifier--AcquireReference_--_1_--dtor$0.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$1 @ 0x1800F0261 (_CCaptureNotifier--AcquireReference_--_1_--dtor$1.c)
 *     _CWorkFifo::GetWorkItem_::_1_::dtor$0 @ 0x1801078FC (_CWorkFifo--GetWorkItem_--_1_--dtor$0.c)
 *     _CWorkFifo::ProcessWorkItem_::_1_::dtor$0 @ 0x18010862E (_CWorkFifo--ProcessWorkItem_--_1_--dtor$0.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$2 @ 0x18010952D (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052ED0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
