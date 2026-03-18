/*
 * XREFs of ViKeIrqlLogCommon @ 0x1409D905C
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x1409D04B0 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x1409D7DD0 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1409D7F80 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseSpinLock @ 0x1409D8360 (VerifierKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x1409D84E0 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x1409D8BE0 (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1409D920C (ViKeRaiseIrqlSanityChecks.c)
 *     VerifierExAcquireFastMutex @ 0x1409E16A0 (VerifierExAcquireFastMutex.c)
 *     VerifierExAcquireFastMutexNoReboot @ 0x1409E1750 (VerifierExAcquireFastMutexNoReboot.c)
 *     VerifierExReleaseFastMutex @ 0x1409E1890 (VerifierExReleaseFastMutex.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x1409E1E00 (ViExTryToAcquireFastMutexCommon.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14032C8F0 (RtlCaptureStackBackTrace.c)
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
