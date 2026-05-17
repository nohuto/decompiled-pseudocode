/*
 * XREFs of RtlpSignalSystemDirsModification @ 0x1800DF224
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800825E4 (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpInvalidatePathCache @ 0x18007FD20 (RtlpInvalidatePathCache.c)
 */

signed __int64 __fastcall RtlpSignalSystemDirsModification(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  signed __int64 result; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpCachedPathLock, a2, a3, a4);
  v4 = RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v5 = RtlpInvalidatePathCache((__int64 *)&RtlpExeSearchPath);
  v6 = RtlpInvalidatePathCache(&RtlpSearchPath);
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v4 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  if ( v5 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  if ( v6 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  return result;
}
