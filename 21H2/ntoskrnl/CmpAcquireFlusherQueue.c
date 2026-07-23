/*
 * XREFs of CmpAcquireFlusherQueue @ 0x1406162F8
 * Callers:
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 * Callees:
 *     CmpAcquireWriteQueue @ 0x140247F50 (CmpAcquireWriteQueue.c)
 */

__int64 __fastcall CmpAcquireFlusherQueue(__int64 a1)
{
  return CmpAcquireWriteQueue((_QWORD *)(a1 + 4232));
}
