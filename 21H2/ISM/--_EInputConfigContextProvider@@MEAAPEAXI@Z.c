/*
 * XREFs of ??_EInputConfigContextProvider@@MEAAPEAXI@Z @ 0x1801477F4
 * Callers:
 *     ??_EInputConfigContextProvider@@O7EAAPEAXI@Z @ 0x18004D350 (--_EInputConfigContextProvider@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1InputConfigContextProvider@@MEAA@XZ @ 0x1801476D4 (--1InputConfigContextProvider@@MEAA@XZ.c)
 */

InputConfigContextProvider *__fastcall InputConfigContextProvider::`vector deleting destructor'(
        InputConfigContextProvider *this,
        char a2)
{
  InputConfigContextProvider::~InputConfigContextProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x118);
    else
      free(this);
  }
  return this;
}
