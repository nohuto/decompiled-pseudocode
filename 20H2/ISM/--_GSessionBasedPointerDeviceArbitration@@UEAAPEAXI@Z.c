/*
 * XREFs of ??_GSessionBasedPointerDeviceArbitration@@UEAAPEAXI@Z @ 0x18019A6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

SessionBasedPointerDeviceArbitration *__fastcall SessionBasedPointerDeviceArbitration::`scalar deleting destructor'(
        SessionBasedPointerDeviceArbitration *this,
        char a2)
{
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x70);
    else
      free(this);
  }
  return this;
}
