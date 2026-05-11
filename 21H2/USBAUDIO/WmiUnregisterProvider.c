/*
 * XREFs of WmiUnregisterProvider @ 0x1C002BB6C
 * Callers:
 *     DeviceRemove @ 0x1C0001FE0 (DeviceRemove.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WmiUnregisterProvider(__int64 a1)
{
  return IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 24), 2u);
}
