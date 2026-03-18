/*
 * XREFs of PspJobClose @ 0x1406562A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x14061C9A4 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140656408 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x14068AAF0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x14068AB34 (PspLockJobExclusive.c)
 *     PspBeginSiloTeardown @ 0x140902B28 (PspBeginSiloTeardown.c)
 */

LONG_PTR __fastcall PspJobClose(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v4; // di
  struct _KTHREAD *CurrentThread; // rsi
  void *v7; // rdi
  LONG_PTR result; // rax

  v4 = 1;
  if ( a4 <= 1 )
  {
    CurrentThread = KeGetCurrentThread();
    _InterlockedOr((volatile signed __int32 *)(a2 + 1320), 1u);
    PspLockJobExclusive(a2, CurrentThread);
    if ( (*(_DWORD *)(a2 + 256) & 0x2000) != 0 )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a2 + 1320), 0x1Du)
        || (*(_DWORD *)(a2 + 1320) & 0x40000000) == 0 )
      {
        v4 = 0;
      }
      PspUnlockJob(a2, CurrentThread);
      PspTerminateAllProcessesInJobHierarchy((PRKEVENT)a2);
      PspLockJobExclusive(a2, CurrentThread);
      if ( v4 )
        PspBeginSiloTeardown(a2);
    }
    ExAcquirePushLockExclusiveEx(a2 + 1032, 0LL);
    v7 = *(void **)(a2 + 456);
    *(_QWORD *)(a2 + 456) = 0LL;
    PspUnlockJobMemoryLimitsExclusive(a2, 0LL, 0LL);
    result = PspUnlockJob(a2, CurrentThread);
    if ( v7 )
      return ObfDereferenceObjectWithTag(v7, 0x624A7350u);
  }
  return result;
}
