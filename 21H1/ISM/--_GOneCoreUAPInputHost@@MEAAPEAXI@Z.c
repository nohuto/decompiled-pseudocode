/*
 * XREFs of ??_GOneCoreUAPInputHost@@MEAAPEAXI@Z @ 0x180064E6C
 * Callers:
 *     ??_EOneCoreUAPInputHost@@OBA@EAAPEAXI@Z @ 0x18004ACB0 (--_EOneCoreUAPInputHost@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x180064900 (--1OneCoreUAPInputHost@@MEAA@XZ.c)
 */

OneCoreUAPInputHost *__fastcall OneCoreUAPInputHost::`scalar deleting destructor'(OneCoreUAPInputHost *this, char a2)
{
  OneCoreUAPInputHost::~OneCoreUAPInputHost(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x68);
    else
      free(this);
  }
  return this;
}
