/*
 * XREFs of ??_EDWMCursor@@MEAAPEAXI@Z @ 0x18019C5F8
 * Callers:
 *     ??_EDWMCursor@@OBA@EAAPEAXI@Z @ 0x18004D3C0 (--_EDWMCursor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1DWMCursor@@MEAA@XZ @ 0x18019C524 (--1DWMCursor@@MEAA@XZ.c)
 */

DWMCursor *__fastcall DWMCursor::`vector deleting destructor'(DWMCursor *this, char a2)
{
  DWMCursor::~DWMCursor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x150);
    else
      free(this);
  }
  return this;
}
