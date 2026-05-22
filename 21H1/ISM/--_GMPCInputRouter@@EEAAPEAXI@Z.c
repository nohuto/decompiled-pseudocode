/*
 * XREFs of ??_GMPCInputRouter@@EEAAPEAXI@Z @ 0x1800B7CA0
 * Callers:
 *     ??_EMPCInputRouter@@GEA@EAAPEAXI@Z @ 0x18004B2E0 (--_EMPCInputRouter@@GEA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1MPCInputRouter@@EEAA@XZ @ 0x1800B7AE0 (--1MPCInputRouter@@EEAA@XZ.c)
 */

MPCInputRouter *__fastcall MPCInputRouter::`scalar deleting destructor'(MPCInputRouter *this, char a2)
{
  MPCInputRouter::~MPCInputRouter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x3D0);
    else
      free(this);
  }
  return this;
}
