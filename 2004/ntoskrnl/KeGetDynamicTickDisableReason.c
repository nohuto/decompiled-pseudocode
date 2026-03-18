/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x1402784FC
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x14064F130 (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x14093A368 (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
