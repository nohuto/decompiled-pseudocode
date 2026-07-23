/*
 * XREFs of IoGetActivityIdThread @ 0x1402F9570
 * Callers:
 *     IopMountVolume @ 0x1405DB490 (IopMountVolume.c)
 *     PnpInsertEventInQueue @ 0x1406FE94C (PnpInsertEventInQueue.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407C9F60 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
}
