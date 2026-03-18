/*
 * XREFs of EtwpCoverageResetCP @ 0x140937C84
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x14076D9E4 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     EtwTelemetryCoverageReport @ 0x1403272E0 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageTableLocateInternal @ 0x1403273BC (TelemetryCoverageTableLocateInternal.c)
 *     EtwpCoverageValidateCP @ 0x140327410 (EtwpCoverageValidateCP.c)
 *     TelemetryCoverageStringHashInternal @ 0x1403274D8 (TelemetryCoverageStringHashInternal.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     EtwpCoverageFlushPending @ 0x1406E1FC0 (EtwpCoverageFlushPending.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCoverageResetCP(__int64 a1, __int64 a2)
{
  _DWORD *PoolWithTag; // r14
  unsigned int v4; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  int v10; // r11d
  _QWORD *v11; // rsi
  unsigned int v12; // r13d
  unsigned __int64 v13; // rbp
  _BYTE *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  _DWORD *v20; // rcx
  _DWORD *v21; // rdx
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int i; // esi
  unsigned int *v26; // rax
  unsigned int v27; // r11d
  unsigned int v28; // [rsp+68h] [rbp+10h] BYREF
  int v29; // [rsp+70h] [rbp+18h] BYREF
  unsigned int *Internal; // [rsp+78h] [rbp+20h]

  v28 = 0;
  PoolWithTag = 0LL;
  v4 = 0;
  *(_DWORD *)(a2 + 12) = 0;
  if ( (unsigned int)dword_140C0EF54 < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140C0EF50 )
      dword_140C0EF50 = TelemetryCoverageStringHashInternal(off_140C0EF48, &v29);
    EtwTelemetryCoverageReport(&off_140C0EF48);
  }
  if ( (unsigned int)EtwpCoverageValidateCP((__int64 *)a2, &v28) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    *(_DWORD *)(a1 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    Internal = TelemetryCoverageTableLocateInternal(*(unsigned int **)(a1 + 16), *(_DWORD *)(a2 + 8));
    if ( *Internal == v10 )
    {
      EtwpCoverageFlushPending((int **)a1, v7, v8, v9);
      PoolWithTag = ExAllocatePoolWithTag(
                      PagedPool,
                      (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL)),
                      0x56777445u);
      if ( PoolWithTag )
      {
        v11 = *(_QWORD **)(a1 + 48);
        if ( v11 != (_QWORD *)(a1 + 48) )
        {
          v12 = v28;
          while ( 1 )
          {
            v13 = v11[3];
            v14 = v11 + 5;
            if ( (unsigned __int64)(v11 + 5) < v13 )
              break;
LABEL_18:
            v11 = (_QWORD *)*v11;
            if ( v11 == (_QWORD *)(a1 + 48) )
              goto LABEL_19;
          }
          v15 = v28;
          while ( 1 )
          {
            v16 = -1LL;
            do
              ++v16;
            while ( v14[v16] );
            if ( v16 == v15 )
            {
              if ( !strcmp(v14, *(const char **)a2) )
              {
                memmove(v14, &v14[v28 + 1], v13 - (_QWORD)&v14[v28 + 1]);
                v11[3] -= v12 + 1;
                v18 = 0;
                v19 = 0;
                v11[4] = v11[3];
                ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL);
                *Internal = 0;
                --*(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
                v20 = *(_DWORD **)(a1 + 16);
                if ( v20[1] )
                {
                  v21 = *(_DWORD **)(a1 + 16);
                  do
                  {
                    v22 = v21[v19 + 13];
                    if ( v22 )
                    {
                      v23 = v18++;
                      PoolWithTag[v23] = v22;
                      v20 = *(_DWORD **)(a1 + 16);
                      v21 = v20;
                      if ( v18 >= v20[8] )
                        break;
                    }
                    ++v19;
                    v20 = v21;
                  }
                  while ( v19 < v21[1] );
                }
                memset(v20 + 13, 0, 4LL * (unsigned int)v20[1]);
                v24 = *(_QWORD *)(a1 + 16);
                for ( i = 0; i < *(_DWORD *)(v24 + 32); v24 = *(_QWORD *)(a1 + 16) )
                {
                  v26 = TelemetryCoverageTableLocateInternal(*(unsigned int **)(a1 + 16), PoolWithTag[i++]);
                  *v26 = v27;
                }
                v4 = 1;
                *(_DWORD *)(a2 + 12) = *(_DWORD *)(v24 + 24);
                break;
              }
              v15 = v28;
            }
            v14 += v16 + 1;
            if ( (unsigned __int64)v14 >= v13 )
              goto LABEL_18;
          }
        }
      }
    }
  }
LABEL_19:
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x56777445u);
  return v4;
}
