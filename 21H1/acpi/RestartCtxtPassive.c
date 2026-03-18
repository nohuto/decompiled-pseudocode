/*
 * XREFs of RestartCtxtPassive @ 0x1C002A2E0
 * Callers:
 *     <none>
 * Callees:
 *     InsertReadyQueue @ 0x1C00043E0 (InsertReadyQueue.c)
 */

void __fastcall RestartCtxtPassive(__int64 a1)
{
  byte_1C00827B0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  InsertReadyQueue((PSLIST_ENTRY)a1, (*(_DWORD *)(a1 + 64) & 0x100) == 0);
  KeReleaseSpinLock(&SpinLock, byte_1C00827B0);
}
