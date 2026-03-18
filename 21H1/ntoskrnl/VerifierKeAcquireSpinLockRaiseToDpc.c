/*
 * XREFs of VerifierKeAcquireSpinLockRaiseToDpc @ 0x1409D7990
 * Callers:
 *     <none>
 * Callees:
 *     ViKeAcquireSpinLockRaiseToDpcCommon @ 0x1409D8F20 (ViKeAcquireSpinLockRaiseToDpcCommon.c)
 *     VfDeadlockAcquireResource @ 0x1409DA558 (VfDeadlockAcquireResource.c)
 */

char __fastcall VerifierKeAcquireSpinLockRaiseToDpc(int a1)
{
  char v2; // bl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = ViKeAcquireSpinLockRaiseToDpcCommon();
  VfDeadlockAcquireResource(a1, retaddr);
  return v2;
}
