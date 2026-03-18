/*
 * XREFs of CmpAcquireReconcilerQueue @ 0x140705584
 * Callers:
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 * Callees:
 *     CmpAcquireWriteQueue @ 0x140357C40 (CmpAcquireWriteQueue.c)
 */

__int64 __fastcall CmpAcquireReconcilerQueue(__int64 a1)
{
  return CmpAcquireWriteQueue((_QWORD *)(a1 + 4248));
}
