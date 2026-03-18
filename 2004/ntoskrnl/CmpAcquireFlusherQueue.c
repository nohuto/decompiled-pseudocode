/*
 * XREFs of CmpAcquireFlusherQueue @ 0x1407055A0
 * Callers:
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 * Callees:
 *     CmpAcquireWriteQueue @ 0x140357C40 (CmpAcquireWriteQueue.c)
 */

__int64 __fastcall CmpAcquireFlusherQueue(__int64 a1)
{
  return CmpAcquireWriteQueue((_QWORD *)(a1 + 4232));
}
