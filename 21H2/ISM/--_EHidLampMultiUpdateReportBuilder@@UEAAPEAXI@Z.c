/*
 * XREFs of ??_EHidLampMultiUpdateReportBuilder@@UEAAPEAXI@Z @ 0x1800A9770
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1HidLampMultiUpdateReportBuilder@@UEAA@XZ @ 0x1800A96C4 (--1HidLampMultiUpdateReportBuilder@@UEAA@XZ.c)
 */

HidLampMultiUpdateReportBuilder *__fastcall HidLampMultiUpdateReportBuilder::`vector deleting destructor'(
        HidLampMultiUpdateReportBuilder *this,
        char a2)
{
  HidLampMultiUpdateReportBuilder::~HidLampMultiUpdateReportBuilder(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x50);
    else
      free(this);
  }
  return this;
}
