/*
 * XREFs of CmpAcquireFlusherQueue @ 0x1406E2708
 * Callers:
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 * Callees:
 *     CmpAcquireWriteQueue @ 0x14031A120 (CmpAcquireWriteQueue.c)
 */

__int64 __fastcall CmpAcquireFlusherQueue(__int64 a1)
{
  return CmpAcquireWriteQueue((_QWORD *)(a1 + 4232));
}
