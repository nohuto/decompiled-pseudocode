/*
 * XREFs of CmpAcquireWriteQueue @ 0x140247F50
 * Callers:
 *     CmpAcquireReconcilerQueue @ 0x1406162DC (CmpAcquireReconcilerQueue.c)
 *     CmpAcquireFlusherQueue @ 0x1406162F8 (CmpAcquireFlusherQueue.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14079EDD8 (CmpBecomeActiveFlusherAndReconciler.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 */

__int64 __fastcall CmpAcquireWriteQueue(_QWORD *a1)
{
  __int64 result; // rax

  result = KeAbPreAcquire((ULONG_PTR)a1, 0LL);
  *a1 = KeGetCurrentThread();
  if ( result )
    *(_BYTE *)(result + 26) |= 1u;
  return result;
}
