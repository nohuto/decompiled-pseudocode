/*
 * XREFs of IoQueueThreadIrp @ 0x140381910
 * Callers:
 *     PiPagePathSetState @ 0x1407C9E40 (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x1408B4460 (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x14034B290 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  IopQueueThreadIrp((__int64)Irp);
}
