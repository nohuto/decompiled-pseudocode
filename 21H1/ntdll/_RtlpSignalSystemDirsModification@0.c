/*
 * XREFs of _RtlpSignalSystemDirsModification@0 @ 0x4B33D390
 * Callers:
 *     _LdrpInitializePerUserWindowsDirectory@4 @ 0x4B2EC686 (_LdrpInitializePerUserWindowsDirectory@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpInvalidatePathCache@4 @ 0x4B2ED502 (_RtlpInvalidatePathCache@4.c)
 */

void __stdcall RtlpSignalSystemDirsModification()
{
  void *v0; // ebx
  void *v1; // edi
  void *v2; // esi

  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v0 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v1 = (void *)RtlpInvalidatePathCache(&RtlpExeSearchPath);
  v2 = (void *)RtlpInvalidatePathCache(&RtlpSearchPath);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v0 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v0);
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
}
