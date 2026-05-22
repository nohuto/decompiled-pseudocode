/*
 * XREFs of ??_GResizeProcessor@@UEAAPEAXI@Z @ 0x1800FDC78
 * Callers:
 *     ??_EResizeProcessor@@W7EAAPEAXI@Z @ 0x18004BAE0 (--_EResizeProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1ResizeProcessor@@UEAA@XZ @ 0x1800FDB30 (--1ResizeProcessor@@UEAA@XZ.c)
 */

ResizeProcessor *__fastcall ResizeProcessor::`scalar deleting destructor'(ResizeProcessor *this, char a2)
{
  ResizeProcessor::~ResizeProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x1A8);
    else
      free(this);
  }
  return this;
}
