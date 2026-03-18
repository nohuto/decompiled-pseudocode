/*
 * XREFs of EtwpCoverageProvEnableCallback @ 0x140930860
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     EtwTelemetryCoverageReport @ 0x140318CF0 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x140318EE8 (TelemetryCoverageStringHashInternal.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

_QWORD *EtwpCoverageProvEnableCallback()
{
  unsigned __int8 v0; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( dword_140C02BE8 && tlgKeywordOn((__int64)&dword_140C02BE8, 1LL) )
  {
    v0 = 1;
    if ( !EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140C0EF6C < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140C0EF68 )
        dword_140C0EF68 = TelemetryCoverageStringHashInternal(off_140C0EF60, v6);
      EtwTelemetryCoverageReport((__int64 *)&off_140C0EF60);
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
    ExfTryToWakePushLock(&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v3, v4);
}
