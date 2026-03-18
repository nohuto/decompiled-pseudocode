/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x14033C5EC
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x1406FE464 (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x1409390C8 (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
