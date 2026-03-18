/*
 * XREFs of IoQueueThreadIrp @ 0x140389E20
 * Callers:
 *     PiPagePathSetState @ 0x14084BB98 (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x14095A544 (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x1402AE1B0 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  IopQueueThreadIrp((__int64)Irp);
}
