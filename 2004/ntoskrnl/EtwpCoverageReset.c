/*
 * XREFs of EtwpCoverageReset @ 0x140931C74
 * Callers:
 *     EtwpCoverageFlushWorkItemCallback @ 0x14070F6B0 (EtwpCoverageFlushWorkItemCallback.c)
 *     EtwSetProcessTelemetryCoverage @ 0x14075F374 (EtwSetProcessTelemetryCoverage.c)
 *     EtwpCoverageResetWorkItemCallback @ 0x140932130 (EtwpCoverageResetWorkItemCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     EtwTelemetryCoverageReport @ 0x1403568E0 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x140356AD8 (TelemetryCoverageStringHashInternal.c)
 *     memset @ 0x14040A280 (memset.c)
 *     EtwpCoverageFlushPending @ 0x14070F780 (EtwpCoverageFlushPending.c)
 *     EtwpCoverageFreeStringBuffers @ 0x140931A60 (EtwpCoverageFreeStringBuffers.c)
 */

struct _KTHREAD *__fastcall EtwpCoverageReset(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  struct _KTHREAD *result; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL) )
  {
    if ( (unsigned int)dword_140C0EF54 < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140C0EF50 )
        dword_140C0EF50 = TelemetryCoverageStringHashInternal(off_140C0EF48, &v7);
      EtwTelemetryCoverageReport(&off_140C0EF48);
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
  result = KeGetCurrentThread();
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == result )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    return (struct _KTHREAD *)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
