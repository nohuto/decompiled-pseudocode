/*
 * XREFs of ??_EMPCTarget@@UEAAPEAXI@Z @ 0x1800BA538
 * Callers:
 *     ??_EMPCTarget@@W7EAAPEAXI@Z @ 0x18004AF40 (--_EMPCTarget@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1MPCTarget@@UEAA@XZ @ 0x1800BA4E8 (--1MPCTarget@@UEAA@XZ.c)
 */

MPCTarget *__fastcall MPCTarget::`vector deleting destructor'(MPCTarget *this, char a2)
{
  MPCTarget::~MPCTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x40);
    else
      free(this);
  }
  return this;
}
