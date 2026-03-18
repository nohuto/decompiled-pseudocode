/*
 * XREFs of IoQueueThreadIrp @ 0x14037EAF0
 * Callers:
 *     PiPagePathSetState @ 0x1407B41E0 (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x1408B0040 (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  IopQueueThreadIrp((__int64)Irp, v1, v2);
}
