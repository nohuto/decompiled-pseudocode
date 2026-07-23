/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x140272A70
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x1406720AC (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x14093DB3C (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
