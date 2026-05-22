/*
 * XREFs of ??_GControllerProcessor@@MEAAPEAXI@Z @ 0x18011F9E8
 * Callers:
 *     ??_EControllerProcessor@@OBA@EAAPEAXI@Z @ 0x18004C0F0 (--_EControllerProcessor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18011F608 (--1ControllerProcessor@@MEAA@XZ.c)
 */

ControllerProcessor *__fastcall ControllerProcessor::`scalar deleting destructor'(ControllerProcessor *this, char a2)
{
  ControllerProcessor::~ControllerProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x1E60);
    else
      free(this);
  }
  return this;
}
