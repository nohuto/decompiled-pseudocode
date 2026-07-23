/*
 * XREFs of CmpAcquireWriteQueue @ 0x14031A120
 * Callers:
 *     CmpAcquireReconcilerQueue @ 0x1406E26EC (CmpAcquireReconcilerQueue.c)
 *     CmpAcquireFlusherQueue @ 0x1406E2708 (CmpAcquireFlusherQueue.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140781318 (CmpBecomeActiveFlusherAndReconciler.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
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
