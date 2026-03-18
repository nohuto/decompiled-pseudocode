/*
 * XREFs of CmpAcquireFlusherQueue @ 0x1406D8968
 * Callers:
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 * Callees:
 *     CmpAcquireWriteQueue @ 0x140328410 (CmpAcquireWriteQueue.c)
 */

__int64 __fastcall CmpAcquireFlusherQueue(__int64 a1)
{
  return CmpAcquireWriteQueue((_QWORD *)(a1 + 4232));
}
