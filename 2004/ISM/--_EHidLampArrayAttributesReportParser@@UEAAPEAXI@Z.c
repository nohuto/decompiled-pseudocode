/*
 * XREFs of ??_EHidLampArrayAttributesReportParser@@UEAAPEAXI@Z @ 0x1800A99A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

HidLampArrayAttributesReportParser *__fastcall HidLampArrayAttributesReportParser::`vector deleting destructor'(
        HidLampArrayAttributesReportParser *this,
        char a2)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x1C8);
    else
      free(this);
  }
  return this;
}
