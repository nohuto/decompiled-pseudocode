/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1409DD560
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1409DD5A8 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VfDeadlockAcquireResource @ 0x1409E05D8 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = a1;
  VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon(a1, retaddr, a2);
  return VfDeadlockAcquireResource(v2, retaddr);
}
