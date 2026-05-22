/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800647C4
 * Callers:
 *     ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1800444B0 (-Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance_::_1_::dtor$0 @ 0x1800C65B6 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Instance_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler::Stop_::_1_::dtor$0 @ 0x1800D2BF4 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--DisplayChange.c)
 *     ?GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@@Z @ 0x180145D40 (-GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConf.c)
 *     _VirtualTouchpadContextProvider::GetCurrentContext_::_1_::dtor$0 @ 0x180145E1E (_VirtualTouchpadContextProvider--GetCurrentContext_--_1_--dtor$0.c)
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJ_KAEBUtagRECT@@@Z @ 0x180145ECC (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJ_KAEBUtagRECT@@@Z.c)
 *     _VirtualTouchpadContextProvider::OnTouchpadAdded_::_1_::dtor$0 @ 0x180145FA6 (_VirtualTouchpadContextProvider--OnTouchpadAdded_--_1_--dtor$0.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x180145FB8 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 *     _VirtualTouchpadContextProvider::OnTouchpadRemoved_::_1_::dtor$0 @ 0x1801460B7 (_VirtualTouchpadContextProvider--OnTouchpadRemoved_--_1_--dtor$0.c)
 *     ?OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJ_KAEBUtagRECT@@@Z @ 0x1801460CC (-OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJ_KAEBUtagRECT@@@Z.c)
 *     _VirtualTouchpadContextProvider::OnTouchpadUpdated_::_1_::dtor$0 @ 0x180146199 (_VirtualTouchpadContextProvider--OnTouchpadUpdated_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReferenceWithState_::_1_::dtor$0 @ 0x18015AD69 (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--CreateDynamicNodeReferenceWit.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceHandleCallbackStatic_::_1_::dtor$0 @ 0x18015B792 (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--DeviceHandleCallbackStatic_--_1.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StartTracking_::_1_::dtor$0 @ 0x180165054 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StartTracking_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking_::_1_::dtor$0 @ 0x1801662FB (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StopTracking_--_1_--dtor$0.c)
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
