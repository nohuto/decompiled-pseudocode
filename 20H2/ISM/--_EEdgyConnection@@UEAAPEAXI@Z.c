/*
 * XREFs of ??_EEdgyConnection@@UEAAPEAXI@Z @ 0x1801770E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1EdgyConnection@@UEAA@XZ @ 0x180176FEC (--1EdgyConnection@@UEAA@XZ.c)
 */

EdgyConnection *__fastcall EdgyConnection::`vector deleting destructor'(EdgyConnection *this, char a2)
{
  EdgyConnection::~EdgyConnection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x60);
    else
      free(this);
  }
  return this;
}
