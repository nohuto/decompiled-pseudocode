/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x140284418
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x14067E1FC (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x14093D96C (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
