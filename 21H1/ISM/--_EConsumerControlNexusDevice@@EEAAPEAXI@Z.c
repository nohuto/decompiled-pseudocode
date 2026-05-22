/*
 * XREFs of ??_EConsumerControlNexusDevice@@EEAAPEAXI@Z @ 0x1800A30F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x1800A2FF4 (--1ConsumerControlNexusDevice@@EEAA@XZ.c)
 */

ConsumerControlNexusDevice *__fastcall ConsumerControlNexusDevice::`vector deleting destructor'(
        ConsumerControlNexusDevice *this,
        char a2)
{
  ConsumerControlNexusDevice::~ConsumerControlNexusDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x90);
    else
      free(this);
  }
  return this;
}
