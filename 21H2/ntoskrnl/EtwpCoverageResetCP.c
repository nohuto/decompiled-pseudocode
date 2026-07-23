/*
 * XREFs of EtwpCoverageResetCP @ 0x140935624
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x140771D78 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     EtwTelemetryCoverageReport @ 0x140246D10 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageTableLocateInternal @ 0x140246DEC (TelemetryCoverageTableLocateInternal.c)
 *     EtwpCoverageValidateCP @ 0x140246E40 (EtwpCoverageValidateCP.c)
 *     TelemetryCoverageStringHashInternal @ 0x140246F08 (TelemetryCoverageStringHashInternal.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpCoverageFlushPending @ 0x140620E90 (EtwpCoverageFlushPending.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpCoverageResetCP(__int64 a1, __int64 a2)
{
  _DWORD *PoolWithTag; // r14
  unsigned int v4; // r12d
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r11d
  _QWORD *v8; // rsi
  unsigned int v9; // r13d
  unsigned __int64 v10; // rbp
  _BYTE *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
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
  if ( (unsigned int)dword_140C0EFD4 < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140C0EFD0 )
      dword_140C0EFD0 = TelemetryCoverageStringHashInternal(off_140C0EFC8, &v29);
    EtwTelemetryCoverageReport((__int64 *)&off_140C0EFC8);
  }
  if ( (unsigned int)EtwpCoverageValidateCP((__int64 *)a2, &v28) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    *(_DWORD *)(a1 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    Internal = TelemetryCoverageTableLocateInternal(*(unsigned int **)(a1 + 16), *(_DWORD *)(a2 + 8));
    if ( *Internal == v7 )
    {
      EtwpCoverageFlushPending((int **)a1);
      PoolWithTag = ExAllocatePoolWithTag(
                      PagedPool,
                      (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL)),
                      0x56777445u);
      if ( PoolWithTag )
      {
        v8 = *(_QWORD **)(a1 + 48);
        if ( v8 != (_QWORD *)(a1 + 48) )
        {
          v9 = v28;
          while ( 1 )
          {
            v10 = v8[3];
            v11 = v8 + 5;
            if ( (unsigned __int64)(v8 + 5) < v10 )
              break;
LABEL_18:
            v8 = (_QWORD *)*v8;
            if ( v8 == (_QWORD *)(a1 + 48) )
              goto LABEL_19;
          }
          v12 = v28;
          while ( 1 )
          {
            v13 = -1LL;
            do
              ++v13;
            while ( v11[v13] );
            if ( v13 == v12 )
            {
              if ( !strcmp(v11, *(const char **)a2) )
              {
                memmove(v11, &v11[v28 + 1], v10 - (_QWORD)&v11[v28 + 1]);
                v8[3] -= v9 + 1;
                v18 = 0;
                v19 = 0;
                v8[4] = v8[3];
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
              v12 = v28;
            }
            v11 += v13 + 1;
            if ( (unsigned __int64)v11 >= v10 )
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
      ExfTryToWakePushLock(&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x56777445u);
  return v4;
}
