/*
 * XREFs of _MagnifierProcessor::GetDeviceState_::_1_::dtor$39 @ 0x18017D32E
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

void __fastcall MagnifierProcessor::GetDeviceState_::_1_::dtor_39(__int64 a1, __int64 a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    *(BamoImpl::BamoMPCConstantManagerClientProxyImpl **)(a2 + 32),
    *(struct Microsoft::BamoImpl::BamoProxyImpl **)(a2 + 120));
}
