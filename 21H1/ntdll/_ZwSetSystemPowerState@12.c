/*
 * XREFs of _ZwSetSystemPowerState@12 @ 0x4B2F4430
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwSetSystemPowerState(POWER_ACTION SystemAction, SYSTEM_POWER_STATE LightestSystemState, ULONG Flags)
{
  return Wow64SystemServiceCall();
}
