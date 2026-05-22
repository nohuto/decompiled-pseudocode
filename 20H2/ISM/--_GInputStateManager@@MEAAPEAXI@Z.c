/*
 * XREFs of ??_GInputStateManager@@MEAAPEAXI@Z @ 0x1800871DC
 * Callers:
 *     ??_EInputStateManager@@OBI@EAAPEAXI@Z @ 0x18004A8A0 (--_EInputStateManager@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1InputStateManager@@MEAA@XZ @ 0x180087024 (--1InputStateManager@@MEAA@XZ.c)
 */

InputStateManager *__fastcall InputStateManager::`scalar deleting destructor'(InputStateManager *this, char a2)
{
  InputStateManager::~InputStateManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xC0);
    else
      free(this);
  }
  return this;
}
