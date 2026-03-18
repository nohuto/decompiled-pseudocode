/*
 * XREFs of PoNotifyVSyncChange @ 0x14035D110
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x140278680 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14035D148 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14035D3A4 (PpmAcquireLock.c)
 */

LONG __fastcall PoNotifyVSyncChange(char a1)
{
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PopFxVSyncEnabled = a1;
  PoFxSendSystemLatencyUpdate();
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
