/*
 * XREFs of WmipUpdateDeviceStackSize @ 0x14074E3EC
 * Callers:
 *     WmipForwardWmiIrp @ 0x140647D4C (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x14074E1A8 (WmipRegisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140240290 (KeReleaseMutex.c)
 */

LONG __fastcall WmipUpdateDeviceStackSize(CCHAR a1)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( WmipServiceDeviceObject->StackSize < a1 )
    WmipServiceDeviceObject->StackSize = a1;
  return KeReleaseMutex(&WmipSMMutex, 0);
}
