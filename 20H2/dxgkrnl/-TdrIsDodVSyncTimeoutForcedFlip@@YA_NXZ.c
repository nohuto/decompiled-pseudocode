/*
 * XREFs of ?TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ @ 0x1C02649EC
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0117194 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool TdrIsDodVSyncTimeoutForcedFlip(void)
{
  return _InterlockedExchange(&g_TdrForceDodVSyncTimeout, 0) != 0;
}
