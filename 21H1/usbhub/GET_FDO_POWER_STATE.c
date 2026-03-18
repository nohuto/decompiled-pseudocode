/*
 * XREFs of GET_FDO_POWER_STATE @ 0x1C001CE84
 * Callers:
 *     UsbhFdoWakePoComplete_Action @ 0x1C000CA20 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhPdoDevicePowerState @ 0x1C00109A0 (UsbhPdoDevicePowerState.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 */

__int64 __fastcall GET_FDO_POWER_STATE(__int64 a1)
{
  FdoExt(*(_QWORD *)(a1 + 8));
  return (unsigned int)FdoExt(*(_QWORD *)(a1 + 8))[1043];
}
