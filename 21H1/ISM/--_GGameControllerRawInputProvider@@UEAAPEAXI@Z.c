/*
 * XREFs of ??_GGameControllerRawInputProvider@@UEAAPEAXI@Z @ 0x180088804
 * Callers:
 *     ??_EGameControllerRawInputProvider@@WBI@EAAPEAXI@Z @ 0x18004AFD0 (--_EGameControllerRawInputProvider@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800886E4 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 */

GameControllerRawInputProvider *__fastcall GameControllerRawInputProvider::`scalar deleting destructor'(
        GameControllerRawInputProvider *this,
        char a2)
{
  GameControllerRawInputProvider::~GameControllerRawInputProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xA8);
    else
      free(this);
  }
  return this;
}
