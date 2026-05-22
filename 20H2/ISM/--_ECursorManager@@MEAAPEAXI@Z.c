/*
 * XREFs of ??_ECursorManager@@MEAAPEAXI@Z @ 0x180186A0C
 * Callers:
 *     ??_ECursorManager@@OBA@EAAPEAXI@Z @ 0x18004CF30 (--_ECursorManager@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1CursorManager@@MEAA@XZ @ 0x1801868D8 (--1CursorManager@@MEAA@XZ.c)
 */

CursorManager *__fastcall CursorManager::`vector deleting destructor'(CursorManager *this, char a2)
{
  CursorManager::~CursorManager(this);
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
