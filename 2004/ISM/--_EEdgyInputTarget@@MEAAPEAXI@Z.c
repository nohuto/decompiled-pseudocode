/*
 * XREFs of ??_EEdgyInputTarget@@MEAAPEAXI@Z @ 0x18017B5AC
 * Callers:
 *     ??_EEdgyInputTarget@@OBA@EAAPEAXI@Z @ 0x18004CDF0 (--_EEdgyInputTarget@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E10 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

EdgyInputTarget *__fastcall EdgyInputTarget::`vector deleting destructor'(EdgyInputTarget *this, char a2)
{
  *(_QWORD *)this = &EdgyInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &EdgyInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x28);
    else
      free(this);
  }
  return this;
}
