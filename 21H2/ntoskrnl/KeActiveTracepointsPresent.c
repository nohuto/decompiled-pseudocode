/*
 * XREFs of KeActiveTracepointsPresent @ 0x14038D38C
 * Callers:
 *     PopSaveHiberContext @ 0x140A4B9E0 (PopSaveHiberContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 KeActiveTracepointsPresent()
{
  return KiTpEnabledCount != 0;
}
