/*
 * XREFs of WmipUpdateDeviceStackSize @ 0x14073F80C
 * Callers:
 *     WmipForwardWmiIrp @ 0x14064675C (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x14073F5C8 (WmipRegisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140284E90 (KeReleaseMutex.c)
 */

LONG __fastcall WmipUpdateDeviceStackSize(CCHAR a1)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( WmipServiceDeviceObject->StackSize < a1 )
    WmipServiceDeviceObject->StackSize = a1;
  return KeReleaseMutex(&WmipSMMutex, 0);
}
