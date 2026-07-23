/*
 * XREFs of CmpAcquireWriteQueue @ 0x140357C40
 * Callers:
 *     CmpAcquireReconcilerQueue @ 0x140705584 (CmpAcquireReconcilerQueue.c)
 *     CmpAcquireFlusherQueue @ 0x1407055A0 (CmpAcquireFlusherQueue.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407869A4 (CmpBecomeActiveFlusherAndReconciler.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
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
