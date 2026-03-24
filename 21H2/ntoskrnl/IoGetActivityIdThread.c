/*
 * XREFs of IoGetActivityIdThread @ 0x1402EE820
 * Callers:
 *     IopMountVolume @ 0x1406E5720 (IopMountVolume.c)
 *     PnpInsertEventInQueue @ 0x1406E756C (PnpInsertEventInQueue.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407C9C40 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
}
