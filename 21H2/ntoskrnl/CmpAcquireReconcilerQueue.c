/*
 * XREFs of CmpAcquireReconcilerQueue @ 0x1406B6E7C
 * Callers:
 *     CmpFlushHive @ 0x14062A0D8 (CmpFlushHive.c)
 * Callees:
 *     CmpAcquireWriteQueue @ 0x1402C9670 (CmpAcquireWriteQueue.c)
 */

__int64 __fastcall CmpAcquireReconcilerQueue(__int64 a1)
{
  return CmpAcquireWriteQueue((_QWORD *)(a1 + 4248));
}
