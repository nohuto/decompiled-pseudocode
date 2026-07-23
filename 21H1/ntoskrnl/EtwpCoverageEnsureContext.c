/*
 * XREFs of EtwpCoverageEnsureContext @ 0x1407B43DC
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x140318CF0 (EtwTelemetryCoverageReport.c)
 *     EtwSetProcessTelemetryCoverage @ 0x14075CDD8 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeSetTimer2 @ 0x1402426C0 (KeSetTimer2.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KeInitializeTimer2 @ 0x1402C06D0 (KeInitializeTimer2.c)
 *     EtwTelemetryCoverageReport @ 0x140318CF0 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x140318EE8 (TelemetryCoverageStringHashInternal.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MmUnmapViewInSystemSpace @ 0x14063AD00 (MmUnmapViewInSystemSpace.c)
 *     MmCreateSection @ 0x140642E30 (MmCreateSection.c)
 *     MmMapViewInSystemSpace @ 0x1406E94F0 (MmMapViewInSystemSpace.c)
 *     EtwpCoverageEnsureStringBuffer @ 0x1407B47CC (EtwpCoverageEnsureStringBuffer.c)
 *     EtwpCoverageFreeStringBuffers @ 0x1409307B0 (EtwpCoverageFreeStringBuffers.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 EtwpCoverageEnsureContext()
{
  unsigned int v0; // edx
  PVOID *PoolWithTag; // rax
  PVOID *v2; // rdi
  PVOID v3; // rax
  _QWORD *v4; // rcx
  unsigned __int64 v5; // rbp
  PVOID v6; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  int v9; // esi
  int v10; // ebx
  PVOID v11; // rcx
  PVOID *v12; // r14
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // bl
  char v20; // cl
  PVOID v21; // rcx
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
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x56777445u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      v3 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1B8uLL, 0x56777445u);
      *v2 = v3;
      if ( v3 )
      {
        memset(v3, 0, 0x1B8uLL);
        v4 = *v2;
        v4[3] = 0LL;
        v4[6] = v4 + 5;
        v4[5] = v4 + 5;
        v4[9] = EtwpCoverageHighIrqlCPWorkItemCallback;
        v4[10] = v2;
        v4[7] = 0LL;
        v2[7] = v2 + 6;
        v2[6] = v2 + 6;
        *((_DWORD *)v2 + 7) = EtwpCoverageFlushPeriod;
        v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *((_DWORD *)*v2 + 4) = v5;
        v6 = *v2;
        *((_DWORD *)v2 + 6) = v5;
        KeInitializeTimer2((__int64)v6 + 104);
        KeInitializeTimer2((__int64)*v2 + 240);
        v7 = *v2;
        v7[53] = EtwpCoverageResetWorkItemCallback;
        v7[54] = v2;
        v7[51] = 0LL;
        v8 = *v2;
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
            v11 = v2[1];
            v12 = v2 + 2;
            ViewSize = 0LL;
            v9 = MmMapViewInSystemSpace(v11, v2 + 2, &ViewSize);
            if ( v9 >= 0 )
            {
              v13 = 2LL;
              *(_BYTE *)*v12 = 2;
              *((_BYTE *)*v12 + 1) = 1;
              *((_DWORD *)*v12 + 6) = 1;
              *(_DWORD *)*v2 = *((_DWORD *)*v12 + 6);
              MEMORY[0xFFFFF7800000037C] = *((_DWORD *)*v12 + 6);
              *((_DWORD *)*v12 + 5) = v5;
              *((_DWORD *)*v2 + 5) = *((_DWORD *)*v12 + 5);
              *((_DWORD *)*v12 + 2) = EtwpCoverageEntryCount - 1;
              do
              {
                *((_DWORD *)*v12 + 1) = (unsigned int)(v10 - 52) >> 2;
                --v13;
              }
              while ( v13 );
              v14 = *v12;
              *((_DWORD *)v2 + 8) = 3 * ((unsigned int)(v10 - 52) >> 4);
              v14[4] = 4 * v14[1] + 52;
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
              EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
              if ( !EtwpCoverageContext )
              {
                v16 = (__int64)v2;
                v17 = (__int64)*v2;
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
              if ( (unsigned int)dword_140C046F4 < MEMORY[0xFFFFF7800000037C] )
              {
                if ( !dword_140C046F0 )
                {
                  v24 = 0;
                  dword_140C046F0 = TelemetryCoverageStringHashInternal(off_140C046E8, &v24);
                }
                EtwTelemetryCoverageReport((__int64 *)&off_140C046E8);
              }
              if ( EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140C0EF84 < MEMORY[0xFFFFF7800000037C] )
              {
                if ( !dword_140C0EF80 )
                {
                  v25 = 0;
                  dword_140C0EF80 = TelemetryCoverageStringHashInternal(off_140C0EF78, &v25);
                }
                EtwTelemetryCoverageReport((__int64 *)&off_140C0EF78);
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
        v21 = v2[2];
        if ( v21 )
        {
          MmUnmapViewInSystemSpace(v21);
          v2[2] = 0LL;
        }
        v22 = (struct _DMA_ADAPTER *)v2[1];
        if ( v22 )
        {
          HalPutDmaAdapter(v22);
          v2[1] = 0LL;
        }
        if ( *v2 )
          ExFreePoolWithTag(*v2, 0x56777445u);
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
