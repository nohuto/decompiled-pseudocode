/*
 * XREFs of IoGetActivityIdThread @ 0x1402751E0
 * Callers:
 *     IopMountVolume @ 0x140634C68 (IopMountVolume.c)
 *     PnpInsertEventInQueue @ 0x140648AB0 (PnpInsertEventInQueue.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407B7150 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
}
