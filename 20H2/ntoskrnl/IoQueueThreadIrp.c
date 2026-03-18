/*
 * XREFs of IoQueueThreadIrp @ 0x140381210
 * Callers:
 *     PiPagePathSetState @ 0x1407C5BDC (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x1408B6F80 (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140221360 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  IopQueueThreadIrp((__int64)Irp);
}
