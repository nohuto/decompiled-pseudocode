/*
 * XREFs of PspLockJobsAndProcessExclusive @ 0x140674DFC
 * Callers:
 *     PspJobDelete @ 0x1402D96F0 (PspJobDelete.c)
 *     PspAssignProcessToJob @ 0x1406741DC (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PspLockJobChain @ 0x14066F47C (PspLockJobChain.c)
 */

void __fastcall PspLockJobsAndProcessExclusive(unsigned int *a1, __int64 a2, __int64 a3, char a4)
{
  char v5; // si
  unsigned int i; // ebx
  __int64 v7; // rcx

  v5 = a4 & 1;
  --*(_WORD *)(a3 + 486);
  if ( a2 )
    ExAcquirePushLockExclusiveEx(a2 + 1080, 0LL);
  for ( i = 0; i < *a1; ++i )
  {
    v7 = *(_QWORD *)&a1[4 * i + 2];
    if ( LOBYTE(a1[4 * i + 4]) )
      PspLockJobChain(v7, 0LL, v5);
    else
      ExAcquireResourceExclusiveLite((PERESOURCE)(v7 + 56), 1u);
  }
}
