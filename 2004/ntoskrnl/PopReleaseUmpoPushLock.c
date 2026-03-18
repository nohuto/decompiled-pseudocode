/*
 * XREFs of PopReleaseUmpoPushLock @ 0x14064CF38
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1402769F8 (PopUmpoSendPowerMessage.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 */

void PopReleaseUmpoPushLock()
{
  ExReleasePushLockEx((ULONG_PTR)&PopUmpoPushLock, 0LL);
  KeLeaveCriticalRegion();
}
