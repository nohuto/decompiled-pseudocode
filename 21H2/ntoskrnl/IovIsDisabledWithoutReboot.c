/*
 * XREFs of IovIsDisabledWithoutReboot @ 0x14055F1D4
 * Callers:
 *     VfPacketCreateAndLock @ 0x140A9BFC0 (VfPacketCreateAndLock.c)
 *     VfPacketFree @ 0x140A9C13C (VfPacketFree.c)
 * Callees:
 *     <none>
 */

bool IovIsDisabledWithoutReboot()
{
  return IovpDisabledWithoutReboot != 0;
}
