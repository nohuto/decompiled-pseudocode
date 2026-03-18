/*
 * XREFs of EtwpCoverageReset @ 0x1409309C4
 * Callers:
 *     EtwpCoverageFlushWorkItemCallback @ 0x1406EBB90 (EtwpCoverageFlushWorkItemCallback.c)
 *     EtwSetProcessTelemetryCoverage @ 0x14075CDD8 (EtwSetProcessTelemetryCoverage.c)
 *     EtwpCoverageResetWorkItemCallback @ 0x140930E80 (EtwpCoverageResetWorkItemCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     EtwTelemetryCoverageReport @ 0x140318CF0 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x140318EE8 (TelemetryCoverageStringHashInternal.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpCoverageFlushPending @ 0x1406EBC60 (EtwpCoverageFlushPending.c)
 *     EtwpCoverageFreeStringBuffers @ 0x1409307B0 (EtwpCoverageFreeStringBuffers.c)
 */

struct _KTHREAD *__fastcall EtwpCoverageReset(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  struct _KTHREAD *result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL) )
  {
    if ( (unsigned int)dword_140C0EF54 < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140C0EF50 )
        dword_140C0EF50 = TelemetryCoverageStringHashInternal(off_140C0EF48, &v10);
      EtwTelemetryCoverageReport((__int64 *)&off_140C0EF48);
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
      ExfTryToWakePushLock(&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    return (struct _KTHREAD *)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  }
  return result;
}
