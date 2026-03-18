/*
 * XREFs of IoQueueThreadIrp @ 0x14037F4E0
 * Callers:
 *     PiPagePathSetState @ 0x1407B7350 (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x1408B1360 (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x1402083E0 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  IopQueueThreadIrp((__int64)Irp);
}
