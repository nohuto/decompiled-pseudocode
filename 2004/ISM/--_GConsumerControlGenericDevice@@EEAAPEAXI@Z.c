/*
 * XREFs of ??_GConsumerControlGenericDevice@@EEAAPEAXI@Z @ 0x1800A3F10
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1ConsumerControlGenericDevice@@EEAA@XZ @ 0x1800A3EBC (--1ConsumerControlGenericDevice@@EEAA@XZ.c)
 */

HSTRING *__fastcall ConsumerControlGenericDevice::`scalar deleting destructor'(HSTRING *this, char a2)
{
  ConsumerControlGenericDevice::~ConsumerControlGenericDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        (BamoImpl::BamoMPCConstantManagerClientProxyImpl *)this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x20);
    else
      free(this);
  }
  return this;
}
