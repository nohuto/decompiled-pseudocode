/*
 * XREFs of ??_GDragNDropProcessorLegacy@@EEAAPEAXI@Z @ 0x180174A58
 * Callers:
 *     ??_EDragNDropProcessorLegacy@@G7EAAPEAXI@Z @ 0x18004D930 (--_EDragNDropProcessorLegacy@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1DragNDropProcessorLegacy@@EEAA@XZ @ 0x180174978 (--1DragNDropProcessorLegacy@@EEAA@XZ.c)
 */

DragNDropProcessorLegacy *__fastcall DragNDropProcessorLegacy::`scalar deleting destructor'(
        DragNDropProcessorLegacy *this,
        char a2)
{
  DragNDropProcessorLegacy::~DragNDropProcessorLegacy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x110);
    else
      free(this);
  }
  return this;
}
