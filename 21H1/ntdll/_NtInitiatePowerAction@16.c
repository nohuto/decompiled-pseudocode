/*
 * XREFs of _NtInitiatePowerAction@16 @ 0x4B2F3990
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtInitiatePowerAction(
        POWER_ACTION SystemAction,
        SYSTEM_POWER_STATE LightestSystemState,
        ULONG Flags,
        BOOLEAN Asynchronous)
{
  return Wow64SystemServiceCall();
}
