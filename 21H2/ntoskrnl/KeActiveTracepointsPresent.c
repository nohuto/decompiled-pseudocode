/*
 * XREFs of KeActiveTracepointsPresent @ 0x14038DDC4
 * Callers:
 *     PopSaveHiberContext @ 0x1409937A0 (PopSaveHiberContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 KeActiveTracepointsPresent()
{
  return KiTpEnabledCount != 0;
}
