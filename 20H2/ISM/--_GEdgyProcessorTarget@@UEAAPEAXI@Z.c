/*
 * XREFs of ??_GEdgyProcessorTarget@@UEAAPEAXI@Z @ 0x180179FD4
 * Callers:
 *     ??_EEdgyProcessorTarget@@WBA@EAAPEAXI@Z @ 0x18004CD70 (--_EEdgyProcessorTarget@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1EdgyProcessorTarget@@UEAA@XZ @ 0x180179F1C (--1EdgyProcessorTarget@@UEAA@XZ.c)
 */

EdgyProcessorTarget *__fastcall EdgyProcessorTarget::`scalar deleting destructor'(EdgyProcessorTarget *this, char a2)
{
  EdgyProcessorTarget::~EdgyProcessorTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xB8);
    else
      free(this);
  }
  return this;
}
