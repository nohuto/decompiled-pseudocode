/*
 * XREFs of ViKeIrqlLogCommon @ 0x1409D90BC
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x1409D04C0 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x1409D7E30 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1409D7FE0 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseSpinLock @ 0x1409D83C0 (VerifierKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x1409D8540 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x1409D8C40 (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1409D926C (ViKeRaiseIrqlSanityChecks.c)
 *     VerifierExAcquireFastMutex @ 0x1409E1700 (VerifierExAcquireFastMutex.c)
 *     VerifierExAcquireFastMutexNoReboot @ 0x1409E17B0 (VerifierExAcquireFastMutexNoReboot.c)
 *     VerifierExReleaseFastMutex @ 0x1409E18F0 (VerifierExReleaseFastMutex.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x1409E1E60 (ViExTryToAcquireFastMutexCommon.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1402E77B0 (RtlCaptureStackBackTrace.c)
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
