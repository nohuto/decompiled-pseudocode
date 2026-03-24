/*
 * XREFs of CmpAcquireWriteQueue @ 0x1402C9670
 * Callers:
 *     CmpAcquireReconcilerQueue @ 0x1406B6E7C (CmpAcquireReconcilerQueue.c)
 *     CmpAcquireFlusherQueue @ 0x1406B6E98 (CmpAcquireFlusherQueue.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14079EBD8 (CmpBecomeActiveFlusherAndReconciler.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14034A230 (KeAbPreAcquire.c)
 */

__int64 __fastcall CmpAcquireWriteQueue(_QWORD *a1)
{
  __int64 result; // rax

  result = KeAbPreAcquire((ULONG_PTR)a1);
  *a1 = KeGetCurrentThread();
  if ( result )
    *(_BYTE *)(result + 26) |= 1u;
  return result;
}
