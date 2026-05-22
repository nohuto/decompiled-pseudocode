/*
 * XREFs of ??_ETapProcessor@@EEAAPEAXI@Z @ 0x180181BA0
 * Callers:
 *     ??_ETapProcessor@@GBA@EAAPEAXI@Z @ 0x18004D4F0 (--_ETapProcessor@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1TapProcessor@@EEAA@XZ @ 0x180181B08 (--1TapProcessor@@EEAA@XZ.c)
 */

TapProcessor *__fastcall TapProcessor::`vector deleting destructor'(TapProcessor *this, char a2)
{
  TapProcessor::~TapProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x58);
    else
      free(this);
  }
  return this;
}
