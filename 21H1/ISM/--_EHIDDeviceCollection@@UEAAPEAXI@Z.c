/*
 * XREFs of ??_EHIDDeviceCollection@@UEAAPEAXI@Z @ 0x18009CD30
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x18009CCE4 (--1HIDDeviceCollection@@UEAA@XZ.c)
 */

HIDDeviceCollection *__fastcall HIDDeviceCollection::`vector deleting destructor'(
        HIDDeviceCollection *this,
        const struct std::nothrow_t *a2)
{
  char v2; // di

  v2 = (char)a2;
  HIDDeviceCollection::~HIDDeviceCollection(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xAC8);
    else
      free(this);
  }
  return this;
}
