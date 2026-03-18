/*
 * XREFs of KeActiveTracepointsPresent @ 0x14038D6A4
 * Callers:
 *     PopSaveHiberContext @ 0x1409967A0 (PopSaveHiberContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 KeActiveTracepointsPresent()
{
  return KiTpEnabledCount != 0;
}
