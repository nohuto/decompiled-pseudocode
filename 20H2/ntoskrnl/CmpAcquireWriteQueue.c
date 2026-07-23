/*
 * XREFs of CmpAcquireWriteQueue @ 0x140328410
 * Callers:
 *     CmpAcquireReconcilerQueue @ 0x1406D894C (CmpAcquireReconcilerQueue.c)
 *     CmpAcquireFlusherQueue @ 0x1406D8968 (CmpAcquireFlusherQueue.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407946B4 (CmpBecomeActiveFlusherAndReconciler.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 */

__int64 __fastcall CmpAcquireWriteQueue(_QWORD *a1)
{
  __int64 result; // rax

  result = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0);
  *a1 = KeGetCurrentThread();
  if ( result )
    *(_BYTE *)(result + 26) |= 1u;
  return result;
}
