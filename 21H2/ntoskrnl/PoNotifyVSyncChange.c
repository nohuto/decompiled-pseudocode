/*
 * XREFs of PoNotifyVSyncChange @ 0x140224940
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x140224C34 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 */

__int64 __fastcall PoNotifyVSyncChange(char a1)
{
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PopFxVSyncEnabled = a1;
  PoFxSendSystemLatencyUpdate();
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
