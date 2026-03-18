/*
 * XREFs of EtwpCoverageProvEnableCallback @ 0x140937940
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     EtwTelemetryCoverageReport @ 0x1403272E0 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x1403274D8 (TelemetryCoverageStringHashInternal.c)
 */

_QWORD *EtwpCoverageProvEnableCallback()
{
  unsigned __int8 v0; // di
  struct _KTHREAD *CurrentThread; // rax
  _DWORD v3[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( dword_140C02BE8 && tlgKeywordOn((__int64)&dword_140C02BE8, 1LL) )
  {
    v0 = 1;
    if ( !EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140C0EF3C < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140C0EF38 )
        dword_140C0EF38 = TelemetryCoverageStringHashInternal(off_140C0EF30, v3);
      EtwTelemetryCoverageReport(&off_140C0EF30);
    }
  }
  else
  {
    v0 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
  EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
  if ( EtwpCoverageContext && EtwpCoverageCoreTracingEnabled != v0 )
  {
    if ( v0 )
    {
      MEMORY[0xFFFFF7800000037C] = -256;
      *(_WORD *)(*(_QWORD *)(EtwpCoverageContext + 16) + 2LL) |= 1u;
    }
    else
    {
      MEMORY[0xFFFFF7800000037C] = *(_DWORD *)(*(_QWORD *)(EtwpCoverageContext + 16) + 24LL);
      *(_WORD *)(*(_QWORD *)(EtwpCoverageContext + 16) + 2LL) &= ~1u;
    }
  }
  EtwpCoverageLockOwner = 0LL;
  EtwpCoverageCoreTracingEnabled = v0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
