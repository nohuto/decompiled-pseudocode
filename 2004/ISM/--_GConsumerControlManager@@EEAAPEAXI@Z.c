/*
 * XREFs of ??_GConsumerControlManager@@EEAAPEAXI@Z @ 0x18009F960
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1ConsumerControlManager@@EEAA@XZ @ 0x18009F75C (--1ConsumerControlManager@@EEAA@XZ.c)
 */

ConsumerControlManager *__fastcall ConsumerControlManager::`scalar deleting destructor'(
        ConsumerControlManager *this,
        char a2)
{
  ConsumerControlManager::~ConsumerControlManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x88);
    else
      free(this);
  }
  return this;
}
