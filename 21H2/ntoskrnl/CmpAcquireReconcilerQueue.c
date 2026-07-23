/*
 * XREFs of CmpAcquireReconcilerQueue @ 0x1406162DC
 * Callers:
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 * Callees:
 *     CmpAcquireWriteQueue @ 0x140247F50 (CmpAcquireWriteQueue.c)
 */

__int64 __fastcall CmpAcquireReconcilerQueue(__int64 a1)
{
  return CmpAcquireWriteQueue((_QWORD *)(a1 + 4248));
}
