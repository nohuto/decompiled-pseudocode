/*
 * XREFs of CmpReleaseWriteQueue @ 0x140689074
 * Callers:
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14083D1A4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 * Callees:
 *     CmpMarkLockReleased @ 0x140AB435C (CmpMarkLockReleased.c)
 */

__int64 __fastcall CmpReleaseWriteQueue(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx

  v2 = a2[1];
  LOBYTE(a1) = 5;
  a2[1] = 0LL;
  *a2 = 0LL;
  CmpMarkLockReleased(a1);
  return v2;
}
