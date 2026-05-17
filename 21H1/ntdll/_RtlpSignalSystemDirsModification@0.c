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

signed __int32 __stdcall RtlpSignalSystemDirsModification()
{
  int v0; // ebx
  int v1; // edi
  int v2; // esi
  signed __int32 result; // eax

  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v0 = RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v1 = RtlpInvalidatePathCache(&RtlpExeSearchPath);
  v2 = RtlpInvalidatePathCache(&RtlpSearchPath);
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v0 )
    result = RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v0);
  if ( v1 )
    result = RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( v2 )
    return RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v2);
  return result;
}
