/*
 * XREFs of VerifierExAcquireFastMutexUnsafe @ 0x1409E17D0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x1409DA558 (VfDeadlockAcquireResource.c)
 *     VerifierExAcquireFastMutexUnsafeNoReboot @ 0x1409E1810 (VerifierExAcquireFastMutexUnsafeNoReboot.c)
 */

PVOID __fastcall VerifierExAcquireFastMutexUnsafe(ULONG_PTR a1)
{
  PVOID retaddr; // [rsp+38h] [rbp+0h]

  VerifierExAcquireFastMutexUnsafeNoReboot(a1);
  return VfDeadlockAcquireResource(a1, 4, (__int64)KeGetCurrentThread(), 0, retaddr);
}
