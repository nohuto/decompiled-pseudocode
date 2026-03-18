/*
 * XREFs of ViKeIrqlLogCommon @ 0x1409DF0DC
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x1409D64E0 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x1409DDE50 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1409DE000 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseSpinLock @ 0x1409DE3E0 (VerifierKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x1409DE560 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x1409DEC60 (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1409DF28C (ViKeRaiseIrqlSanityChecks.c)
 *     VerifierExAcquireFastMutex @ 0x1409E7720 (VerifierExAcquireFastMutex.c)
 *     VerifierExAcquireFastMutexNoReboot @ 0x1409E77D0 (VerifierExAcquireFastMutexNoReboot.c)
 *     VerifierExReleaseFastMutex @ 0x1409E7910 (VerifierExReleaseFastMutex.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x1409E7E80 (ViExTryToAcquireFastMutexCommon.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140228FF0 (RtlCaptureStackBackTrace.c)
 */

void __fastcall ViKeIrqlLogCommon(__int64 a1, ULONG a2)
{
  PVOID *v2; // r8
  USHORT v4; // ax

  if ( a1 )
  {
    v2 = (PVOID *)(a1 + 16);
    *(_QWORD *)a1 = KeGetCurrentThread();
    *(_DWORD *)(a1 + 12) = MEMORY[0xFFFFF78000000320];
    if ( (VfOptionFlags & 0x40) != 0 )
    {
      *v2 = 0LL;
    }
    else
    {
      v4 = RtlCaptureStackBackTrace(a2, 5u, v2, 0LL);
      if ( v4 < 5u )
        *(_QWORD *)(a1 + 8LL * v4 + 16) = 0LL;
    }
  }
}
