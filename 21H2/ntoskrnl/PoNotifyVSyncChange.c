/*
 * XREFs of PoNotifyVSyncChange @ 0x1402817E0
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x14022AB00 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x140281818 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140281A74 (PpmAcquireLock.c)
 */

LONG __fastcall PoNotifyVSyncChange(char a1)
{
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PopFxVSyncEnabled = a1;
  PoFxSendSystemLatencyUpdate();
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
