/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x1403314FC
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x1406E3848 (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x140940198 (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
