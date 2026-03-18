/*
 * XREFs of PoNotifyVSyncChange @ 0x14033D9B0
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x140288880 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14033D9E8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 */

LONG __fastcall PoNotifyVSyncChange(char a1)
{
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PopFxVSyncEnabled = a1;
  PoFxSendSystemLatencyUpdate();
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
