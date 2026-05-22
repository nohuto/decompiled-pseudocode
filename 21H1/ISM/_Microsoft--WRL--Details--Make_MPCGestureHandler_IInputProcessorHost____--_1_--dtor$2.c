/*
 * XREFs of _Microsoft::WRL::Details::Make_MPCGestureHandler_IInputProcessorHost____::_1_::dtor$2 @ 0x18006A396
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

void __fastcall Microsoft::WRL::Details::Make_MPCGestureHandler_IInputProcessorHost____::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    *(BamoImpl::BamoMPCConstantManagerClientProxyImpl **)(a2 + 40),
    *(struct Microsoft::BamoImpl::BamoProxyImpl **)(a2 + 88));
}
