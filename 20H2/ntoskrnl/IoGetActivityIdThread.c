/*
 * XREFs of IoGetActivityIdThread @ 0x140243FF0
 * Callers:
 *     PnpInsertEventInQueue @ 0x14064AECC (PnpInsertEventInQueue.c)
 *     IopMountVolume @ 0x1406CC9E8 (IopMountVolume.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407C5980 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
}
