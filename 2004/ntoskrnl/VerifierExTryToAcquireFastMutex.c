/*
 * XREFs of VerifierExTryToAcquireFastMutex @ 0x1409E1A20
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x1409DA5B8 (VfDeadlockAcquireResource.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x1409E1E60 (ViExTryToAcquireFastMutexCommon.c)
 */

char __fastcall VerifierExTryToAcquireFastMutex(ULONG_PTR a1)
{
  char v2; // bl
  PVOID retaddr; // [rsp+38h] [rbp+0h]

  v2 = ViExTryToAcquireFastMutexCommon(a1, ((unsigned int)MmVerifierData >> 17) & 1);
  if ( v2 )
    VfDeadlockAcquireResource(a1, 3, (__int64)KeGetCurrentThread(), 1u, retaddr);
  return v2;
}
