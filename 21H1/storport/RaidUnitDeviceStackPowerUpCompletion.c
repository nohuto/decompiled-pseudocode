/*
 * XREFs of RaidUnitDeviceStackPowerUpCompletion @ 0x1C000EAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitDeviceStackPowerUpCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _BYTE *Context)
{
  Context[448] &= ~0x80u;
}
