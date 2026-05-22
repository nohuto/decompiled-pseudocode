/*
 * XREFs of ??_EInputServiceProcessor@@UEAAPEAXI@Z @ 0x18010160C
 * Callers:
 *     ??_EInputServiceProcessor@@W7EAAPEAXI@Z @ 0x18004B560 (--_EInputServiceProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

InputServiceProcessor *__fastcall InputServiceProcessor::`vector deleting destructor'(
        InputServiceProcessor *this,
        char a2)
{
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x18);
    else
      free(this);
  }
  return this;
}
