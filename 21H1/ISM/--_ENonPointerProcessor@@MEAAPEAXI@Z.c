/*
 * XREFs of ??_ENonPointerProcessor@@MEAAPEAXI@Z @ 0x180136914
 * Callers:
 *     ??_ENonPointerProcessor@@OBA@EAAPEAXI@Z @ 0x18004C980 (--_ENonPointerProcessor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1NonPointerProcessor@@MEAA@XZ @ 0x1801368A4 (--1NonPointerProcessor@@MEAA@XZ.c)
 */

NonPointerProcessor *__fastcall NonPointerProcessor::`vector deleting destructor'(NonPointerProcessor *this, char a2)
{
  NonPointerProcessor::~NonPointerProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x48);
    else
      free(this);
  }
  return this;
}
