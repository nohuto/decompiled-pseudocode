/*
 * XREFs of EtwpCoverageReset @ 0x1409E52D0
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x1406D435C (EtwSetProcessTelemetryCoverage.c)
 *     EtwpCoverageFlushWorkItemCallback @ 0x1406E7DC0 (EtwpCoverageFlushWorkItemCallback.c)
 *     EtwpCoverageResetWorkItemCallback @ 0x1409E5790 (EtwpCoverageResetWorkItemCallback.c)
 * Callees:
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x14024F664 (TelemetryCoverageStringHashInternal.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpCoverageFlushPending @ 0x1406E7E90 (EtwpCoverageFlushPending.c)
 *     EtwpCoverageFreeStringBuffers @ 0x1409E5224 (EtwpCoverageFreeStringBuffers.c)
 */

char __fastcall EtwpCoverageReset(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  struct _KTHREAD *v6; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL) )
  {
    if ( (unsigned int)dword_140C09154 < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140C09150 )
        dword_140C09150 = TelemetryCoverageStringHashInternal(off_140C09148, &v8);
      EtwTelemetryCoverageReport((__int64 *)&off_140C09148);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    if ( (a2 & 4) == 0 || (*(_DWORD *)(a1 + 36) & 1) != 0 )
    {
      if ( (a2 & 1) != 0
        || (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - *(_DWORD *)(a1 + 24) > 0x927C0 )
      {
        *(_DWORD *)(a1 + 36) &= ~1u;
        EtwpCoverageFlushPending((int **)a1);
        memset((void *)(*(_QWORD *)(a1 + 16) + 52LL), 0, 4LL * *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL));
        EtwpCoverageFreeStringBuffers(a1, 1);
        *(_DWORD *)(*(_QWORD *)a1 + 4LL) = 0;
        **(_DWORD **)a1 = ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
        v5 = *(_QWORD *)(a1 + 16);
        if ( (*(_BYTE *)(v5 + 2) & 1) == 0 )
          MEMORY[0xFFFFF7800000037C] = *(_DWORD *)(v5 + 24);
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 20LL) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(*(_QWORD *)a1 + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 20LL);
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 36) |= 1u;
      }
    }
  }
  v6 = KeGetCurrentThread();
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == v6 )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    LOBYTE(v6) = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (char)v6;
}
