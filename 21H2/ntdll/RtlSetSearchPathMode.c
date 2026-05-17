/*
 * XREFs of RtlSetSearchPathMode @ 0x1800803A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpInvalidatePathCache @ 0x180080740 (RtlpInvalidatePathCache.c)
 */

__int64 __fastcall RtlSetSearchPathMode(int a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v5; // ebx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rdi

  if ( (a1 & 0xFFFE7FFE) != 0 )
    return 3221225485LL;
  if ( (a1 & 1) != 0 )
  {
    if ( (a1 & 0x10000) == 0 )
      goto LABEL_4;
    return 3221225485LL;
  }
  if ( (a1 & 0x18000) != 0x10000 )
    return 3221225485LL;
LABEL_4:
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18016D4F8, a2, a3, a4);
  if ( (RtlpSearchPathMode & 0x8000) == 0 || (a1 & 0x8000) != 0 )
  {
    RtlpSearchPathMode = a1;
    v5 = 0;
  }
  else
  {
    v5 = -1073741790;
  }
  RtlReleaseSRWLockExclusive(&qword_18016D4F8);
  if ( v5 >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpCachedPathLock, v6, v7, v8);
    v9 = RtlpInvalidatePathCache(&RtlpSearchPath);
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v9 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  }
  return (unsigned int)v5;
}
