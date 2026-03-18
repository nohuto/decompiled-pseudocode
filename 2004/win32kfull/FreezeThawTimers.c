/*
 * XREFs of FreezeThawTimers @ 0x1C0107F70
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0108984 (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C01D8BC4 (--1CAutoPushLockSh@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 FreezeThawTimers()
{
  return gtmrListHead[0];
}
