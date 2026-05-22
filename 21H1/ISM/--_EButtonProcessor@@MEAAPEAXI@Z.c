/*
 * XREFs of ??_EButtonProcessor@@MEAAPEAXI@Z @ 0x18004A4E4
 * Callers:
 *     ??_EButtonProcessor@@O7EAAPEAXI@Z @ 0x18004D5C0 (--_EButtonProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1ButtonProcessor@@MEAA@XZ @ 0x18004A414 (--1ButtonProcessor@@MEAA@XZ.c)
 */

ButtonProcessor *__fastcall ButtonProcessor::`vector deleting destructor'(ButtonProcessor *this, char a2)
{
  ButtonProcessor::~ButtonProcessor(this);
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
