/*
 * XREFs of WmipUpdateDeviceStackSize @ 0x14073DC8C
 * Callers:
 *     WmipForwardWmiIrp @ 0x1406818BC (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x14073DA48 (WmipRegisterDevice.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402486F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

LONG __fastcall WmipUpdateDeviceStackSize(CCHAR a1)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( WmipServiceDeviceObject->StackSize < a1 )
    WmipServiceDeviceObject->StackSize = a1;
  return KeReleaseMutex(&WmipSMMutex, 0);
}
