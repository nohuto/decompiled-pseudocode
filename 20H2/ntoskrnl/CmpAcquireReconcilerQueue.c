/*
 * XREFs of CmpAcquireReconcilerQueue @ 0x1406D894C
 * Callers:
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 * Callees:
 *     CmpAcquireWriteQueue @ 0x140328410 (CmpAcquireWriteQueue.c)
 */

__int64 __fastcall CmpAcquireReconcilerQueue(__int64 a1)
{
  return CmpAcquireWriteQueue((_QWORD *)(a1 + 4248));
}
