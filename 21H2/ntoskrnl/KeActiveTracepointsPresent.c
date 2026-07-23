/*
 * XREFs of KeActiveTracepointsPresent @ 0x14038DF14
 * Callers:
 *     PopSaveHiberContext @ 0x1409947A0 (PopSaveHiberContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 KeActiveTracepointsPresent()
{
  return KiTpEnabledCount != 0;
}
