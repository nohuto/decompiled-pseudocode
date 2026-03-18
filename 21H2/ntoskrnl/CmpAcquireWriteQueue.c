/*
 * XREFs of CmpAcquireWriteQueue @ 0x14020AA84
 * Callers:
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14083D56C (CmpBecomeActiveFlusherAndReconciler.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 */

__int64 __fastcall CmpAcquireWriteQueue(_QWORD *a1)
{
  __int64 result; // rax

  result = KeAbPreAcquire(a1, 0LL, 0LL);
  *a1 = KeGetCurrentThread();
  if ( result )
    *(_BYTE *)(result + 18) = 1;
  return result;
}
