/*
 * XREFs of PopReleaseUmpoPushLock @ 0x14071DDE4
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140362144 (PopUmpoSendPowerMessage.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 */

void PopReleaseUmpoPushLock()
{
  ExReleasePushLockEx((ULONG_PTR)&PopUmpoPushLock, 0LL);
  KeLeaveCriticalRegion();
}
