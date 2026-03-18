/*
 * XREFs of KeActiveTracepointsPresent @ 0x14038B360
 * Callers:
 *     PopSaveHiberContext @ 0x140990730 (PopSaveHiberContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 KeActiveTracepointsPresent()
{
  return KiTpEnabledCount != 0;
}
