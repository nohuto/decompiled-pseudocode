/*
 * XREFs of ??_EDockableDeviceCollection@@UEAAPEAXI@Z @ 0x18009C520
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180001E00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x18009CBE4 (--1HIDDeviceCollection@@UEAA@XZ.c)
 */

DockableDeviceCollection *__fastcall DockableDeviceCollection::`vector deleting destructor'(
        DockableDeviceCollection *this,
        char a2)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &DockableDeviceCollection::`vftable';
  HIDDeviceCollection::~HIDDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xAC8);
    else
      free(this);
  }
  return this;
}
