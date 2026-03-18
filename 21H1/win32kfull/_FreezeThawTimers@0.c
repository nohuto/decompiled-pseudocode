/*
 * XREFs of _FreezeThawTimers@0 @ 0xA220C
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SG_NXZ @ 0xA98AC (-SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SG_NXZ.c)
 */

int __stdcall FreezeThawTimers()
{
  return _gtmrListHead[0];
}
