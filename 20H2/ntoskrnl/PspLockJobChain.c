/*
 * XREFs of PspLockJobChain @ 0x1406637C0
 * Callers:
 *     PspLockJobsAndProcessExclusive @ 0x14062C618 (PspLockJobsAndProcessExclusive.c)
 *     PspImplicitAssignProcessToJob @ 0x14062E4F0 (PspImplicitAssignProcessToJob.c)
 *     PspGetMemoryPartitionImplicit @ 0x140661524 (PspGetMemoryPartitionImplicit.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     PspLockJobAssignment @ 0x1406635A4 (PspLockJobAssignment.c)
 *     PspUnlockJobAssignment @ 0x1406635D0 (PspUnlockJobAssignment.c)
 */

BOOLEAN __fastcall PspLockJobChain(__int64 a1, __int64 a2, char a3)
{
  char v5; // bp
  unsigned __int64 v6; // rax
  BOOLEAN result; // al
  unsigned __int64 v8; // rsi
  unsigned __int64 i; // rsi

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  v5 = a3 & 1;
  if ( (a3 & 1) == 0 )
    PspLockJobAssignment(a2);
  v6 = *(_QWORD *)(a1 + 1104);
  if ( v6 )
  {
    if ( v6 > 1 )
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(a1 + 1080) + 56LL), 1u);
      v8 = *(_QWORD *)(a1 + 1104);
      if ( v8 > 2 )
      {
        for ( i = v8 - 2; i; --i )
          ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(*(_QWORD *)(a1 + 1112) + 8 * i - 8) + 56LL), 1u);
      }
    }
    ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(a1 + 1072) + 56LL), 1u);
  }
  result = ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  if ( !v5 )
    return PspUnlockJobAssignment(a2);
  return result;
}
