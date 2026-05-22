/*
 * XREFs of ??_GHidLampMultiUpdateReportParser@@UEAAPEAXI@Z @ 0x1800AB200
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1HidLampMultiUpdateReportParser@@UEAA@XZ @ 0x1800AB02C (--1HidLampMultiUpdateReportParser@@UEAA@XZ.c)
 */

HidLampMultiUpdateReportParser *__fastcall HidLampMultiUpdateReportParser::`scalar deleting destructor'(
        HidLampMultiUpdateReportParser *this,
        char a2)
{
  HidLampMultiUpdateReportParser::~HidLampMultiUpdateReportParser(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x148);
    else
      free(this);
  }
  return this;
}
