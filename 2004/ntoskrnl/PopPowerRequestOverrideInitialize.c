/*
 * XREFs of PopPowerRequestOverrideInitialize @ 0x1407C16E4
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1406A7AE4 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140276D74 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406A85E8 (PopAcquirePowerRequestPushLock.c)
 */

void PopPowerRequestOverrideInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 *i; // rbx

  PopAcquirePowerRequestPushLock(0);
  for ( i = (__int64 *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (__int64 *)*i )
    PopUmpoSendPowerRequestOverrideQuery((__int64)i, v0, v1, v2);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
