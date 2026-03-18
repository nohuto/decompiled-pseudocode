/*
 * XREFs of EtwpCoverageProvEnableCallback @ 0x140861D70
 * Callers:
 *     <none>
 * Callees:
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x14024F664 (TelemetryCoverageStringHashInternal.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char EtwpCoverageProvEnableCallback()
{
  unsigned __int8 v0; // bl
  struct _KTHREAD *CurrentThread; // rax
  char v2; // di
  _DWORD v4[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( dword_140C04418 && tlgKeywordOn((__int64)&dword_140C04418, 1LL) )
  {
    v0 = 1;
    if ( !EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140C09184 < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140C09180 )
        dword_140C09180 = TelemetryCoverageStringHashInternal(off_140C09178, v4);
      EtwTelemetryCoverageReport((__int64 *)&off_140C09178);
    }
  }
  else
  {
    v0 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
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
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
