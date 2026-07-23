/*
 * XREFs of IoQueueThreadIrp @ 0x140381460
 * Callers:
 *     PiPagePathSetState @ 0x1407CA160 (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x1408B45C0 (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140355FE0 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  IopQueueThreadIrp((__int64)Irp);
}
