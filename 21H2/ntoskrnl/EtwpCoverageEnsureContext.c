/*
 * XREFs of EtwpCoverageEnsureContext @ 0x1407CA35C
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x140246D10 (EtwTelemetryCoverageReport.c)
 *     EtwSetProcessTelemetryCoverage @ 0x140771D78 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     EtwTelemetryCoverageReport @ 0x140246D10 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x140246F08 (TelemetryCoverageStringHashInternal.c)
 *     KeInitializeTimer2 @ 0x14029A5B0 (KeInitializeTimer2.c)
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     memset @ 0x140414300 (memset.c)
 *     MmUnmapViewInSystemSpace @ 0x14060ACA0 (MmUnmapViewInSystemSpace.c)
 *     MmMapViewInSystemSpace @ 0x14061E6F0 (MmMapViewInSystemSpace.c)
 *     MmCreateSection @ 0x1406AB960 (MmCreateSection.c)
 *     EtwpCoverageEnsureStringBuffer @ 0x1407CA74C (EtwpCoverageEnsureStringBuffer.c)
 *     EtwpCoverageFreeStringBuffers @ 0x140935230 (EtwpCoverageFreeStringBuffers.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 EtwpCoverageEnsureContext()
{
  unsigned int v0; // edx
  char *PoolWithTag; // rax
  char *v2; // rdi
  PVOID v3; // rax
  _QWORD *v4; // rcx
  unsigned __int64 v5; // rbp
  __int64 v6; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  int v9; // esi
  int v10; // ebx
  void *v11; // rcx
  char *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // bl
  char v20; // cl
  void *v21; // rcx
  struct _DMA_ADAPTER *v22; // rcx
  _QWORD v23[11]; // [rsp+40h] [rbp-58h] BYREF
  int v24; // [rsp+A0h] [rbp+8h] BYREF
  int v25; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+B8h] [rbp+20h] BYREF

  if ( EtwpInitialized && (v0 = EtwpCoverageEntryCount) != 0 )
  {
    if ( (unsigned int)EtwpCoverageEntryCount >= 0x80000 )
      v0 = 0x80000;
    if ( v0 <= 0x40 )
      v0 = 64;
    if ( ((v0 - 1) & v0) != 0 )
    {
      v20 = -1;
      do
      {
        ++v20;
        v0 >>= 1;
      }
      while ( v0 );
      v0 = 1 << v20;
    }
    EtwpCoverageEntryCount = v0;
    if ( (unsigned int)EtwpCoverageFlushPeriod <= 0x3E8 )
      EtwpCoverageFlushPeriod = 1000;
    if ( (unsigned int)EtwpCoverageResetPeriod <= 0x36EE80 )
      EtwpCoverageResetPeriod = 3600000;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x56777445u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      v3 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1B8uLL, 0x56777445u);
      *(_QWORD *)v2 = v3;
      if ( v3 )
      {
        memset(v3, 0, 0x1B8uLL);
        v4 = *(_QWORD **)v2;
        v4[3] = 0LL;
        v4[6] = v4 + 5;
        v4[5] = v4 + 5;
        v4[9] = EtwpCoverageHighIrqlCPWorkItemCallback;
        v4[10] = v2;
        v4[7] = 0LL;
        *((_QWORD *)v2 + 7) = v2 + 48;
        *((_QWORD *)v2 + 6) = v2 + 48;
        *((_DWORD *)v2 + 7) = EtwpCoverageFlushPeriod;
        v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(*(_QWORD *)v2 + 16LL) = v5;
        v6 = *(_QWORD *)v2;
        *((_DWORD *)v2 + 6) = v5;
        KeInitializeTimer2(v6 + 104, (__int64)EtwpCoverageResetTimerCallback, v6, 8LL);
        KeInitializeTimer2(*(_QWORD *)v2 + 240LL, (__int64)EtwpCoverageFlushTimerCallback, *(_QWORD *)v2, 8LL);
        v7 = *(_QWORD **)v2;
        v7[53] = EtwpCoverageResetWorkItemCallback;
        v7[54] = v2;
        v7[51] = 0LL;
        v8 = *(_QWORD **)v2;
        v8[49] = EtwpCoverageFlushWorkItemCallback;
        v8[50] = v2;
        v8[47] = 0LL;
        v9 = EtwpCoverageEnsureStringBuffer(v2);
        if ( v9 >= 0 )
        {
          v10 = 4 * EtwpCoverageEntryCount;
          v26 = 4LL * (unsigned int)EtwpCoverageEntryCount;
          v9 = MmCreateSection((int)v2 + 8, 983071LL, 0, &v26, 4, 0x8000000, 0LL, 0LL);
          if ( v9 >= 0 )
          {
            v11 = (void *)*((_QWORD *)v2 + 1);
            v12 = v2 + 16;
            ViewSize = 0LL;
            v9 = MmMapViewInSystemSpace(v11, (PVOID *)v2 + 2, &ViewSize);
            if ( v9 >= 0 )
            {
              v13 = 2LL;
              **(_BYTE **)v12 = 2;
              *(_BYTE *)(*(_QWORD *)v12 + 1LL) = 1;
              *(_DWORD *)(*(_QWORD *)v12 + 24LL) = 1;
              **(_DWORD **)v2 = *(_DWORD *)(*(_QWORD *)v12 + 24LL);
              MEMORY[0xFFFFF7800000037C] = *(_DWORD *)(*(_QWORD *)v12 + 24LL);
              *(_DWORD *)(*(_QWORD *)v12 + 20LL) = v5;
              *(_DWORD *)(*(_QWORD *)v2 + 20LL) = *(_DWORD *)(*(_QWORD *)v12 + 20LL);
              *(_DWORD *)(*(_QWORD *)v12 + 8LL) = EtwpCoverageEntryCount - 1;
              do
              {
                *(_DWORD *)(*(_QWORD *)v12 + 4LL) = (unsigned int)(v10 - 52) >> 2;
                --v13;
              }
              while ( v13 );
              v14 = *(_QWORD *)v12;
              *((_DWORD *)v2 + 8) = 3 * ((unsigned int)(v10 - 52) >> 4);
              *(_DWORD *)(v14 + 16) = 4 * *(_DWORD *)(v14 + 4) + 52;
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
              EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
              if ( !EtwpCoverageContext )
              {
                v16 = (__int64)v2;
                v17 = *(_QWORD *)v2;
                v2 = 0LL;
                EtwpCoverageContext = v16;
                EtwpCoverageNonPagedContext = v17;
                if ( EtwpCoverageCoreTracingEnabled )
                {
                  *(_WORD *)(*(_QWORD *)(v16 + 16) + 2LL) |= 1u;
                  MEMORY[0xFFFFF7800000037C] = -256;
                }
                v23[0] = 0LL;
                v23[1] = -1LL;
                KeSetTimer2(
                  *(_QWORD *)EtwpCoverageContext + 104LL,
                  -10000LL * (unsigned int)EtwpCoverageResetPeriod,
                  10000LL * (unsigned int)EtwpCoverageResetPeriod,
                  (__int64)v23);
              }
              EtwpCoverageLockOwner = 0LL;
              v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL);
              if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
                ExfTryToWakePushLock(&EtwpCoverageLock);
              KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
              KeLeaveCriticalRegion();
              if ( (unsigned int)dword_140C04774 < MEMORY[0xFFFFF7800000037C] )
              {
                if ( !dword_140C04770 )
                {
                  v24 = 0;
                  dword_140C04770 = TelemetryCoverageStringHashInternal(off_140C04768, &v24);
                }
                EtwTelemetryCoverageReport((__int64 *)&off_140C04768);
              }
              if ( EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140C0F004 < MEMORY[0xFFFFF7800000037C] )
              {
                if ( !dword_140C0F000 )
                {
                  v25 = 0;
                  dword_140C0F000 = TelemetryCoverageStringHashInternal(off_140C0EFF8, &v25);
                }
                EtwTelemetryCoverageReport((__int64 *)&off_140C0EFF8);
              }
              v9 = 0;
            }
          }
        }
      }
      else
      {
        v9 = -1073741670;
      }
      if ( v2 )
      {
        v21 = (void *)*((_QWORD *)v2 + 2);
        if ( v21 )
        {
          MmUnmapViewInSystemSpace(v21);
          *((_QWORD *)v2 + 2) = 0LL;
        }
        v22 = (struct _DMA_ADAPTER *)*((_QWORD *)v2 + 1);
        if ( v22 )
        {
          HalPutDmaAdapter(v22);
          *((_QWORD *)v2 + 1) = 0LL;
        }
        if ( *(_QWORD *)v2 )
          ExFreePoolWithTag(*(PVOID *)v2, 0x56777445u);
        EtwpCoverageFreeStringBuffers(v2, 0LL);
        ExFreePoolWithTag(v2, 0x56777445u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v9;
}
