/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_MPCHandProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x1801364C5
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_MPCHandProcessor_IInputProcessor_InputProcessorCreateParams______::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    *(BamoImpl::BamoMPCConstantManagerClientProxyImpl **)(a2 + 88),
    *(struct Microsoft::BamoImpl::BamoProxyImpl **)(a2 + 80));
}
