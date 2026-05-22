/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_InputSiteHierarchyManager_IInputSiteHierarchyManager__::_1_::dtor$1 @ 0x18004DBD2
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_InputSiteHierarchyManager_IInputSiteHierarchyManager__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    *(BamoImpl::BamoMPCConstantManagerClientProxyImpl **)(a2 + 64),
    *(struct Microsoft::BamoImpl::BamoProxyImpl **)(a2 + 56));
}
