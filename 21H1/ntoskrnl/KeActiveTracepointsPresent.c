/*
 * XREFs of KeActiveTracepointsPresent @ 0x14038A2F0
 * Callers:
 *     PopSaveHiberContext @ 0x14098F9E0 (PopSaveHiberContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 KeActiveTracepointsPresent()
{
  return KiTpEnabledCount != 0;
}
