/*
 * XREFs of ZwInitiatePowerAction @ 0x1403F55E0
 * Callers:
 *     PoShutdownBugCheck @ 0x1408E41B0 (PoShutdownBugCheck.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwInitiatePowerAction(
        POWER_ACTION SystemAction,
        SYSTEM_POWER_STATE LightestSystemState,
        ULONG Flags,
        BOOLEAN Asynchronous)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemAction);
}
