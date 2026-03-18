/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x1409D7710
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x1409D7758 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VfDeadlockAcquireResource @ 0x1409DA5B8 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpc(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = a1;
  VerifierKeAcquireInStackQueuedSpinLockForDpcCommon(a1, retaddr, a2);
  return VfDeadlockAcquireResource(v2, retaddr);
}
