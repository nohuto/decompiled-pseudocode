/*
 * XREFs of ??_EHidLampArrayDevice@@UEAAPEAXI@Z @ 0x1800A6660
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1HidLampArrayDevice@@UEAA@XZ @ 0x1800A648C (--1HidLampArrayDevice@@UEAA@XZ.c)
 */

RefCountedObject **__fastcall HidLampArrayDevice::`vector deleting destructor'(
        RefCountedObject **this,
        const struct std::nothrow_t *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // di

  v4 = (char)a2;
  HidLampArrayDevice::~HidLampArrayDevice(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        (BamoImpl::BamoMPCConstantManagerClientProxyImpl *)this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x280);
    else
      free(this);
  }
  return this;
}
