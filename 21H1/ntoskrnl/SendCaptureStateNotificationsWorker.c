/*
 * XREFs of SendCaptureStateNotificationsWorker @ 0x14093B0C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     ExSetTimer @ 0x14035BB10 (ExSetTimer.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1405F2D00 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405F3B64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1405F3C38 (EtwpReleaseLoggerContext.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405F6130 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405F7508 (EtwpUnreferenceGuidEntry.c)
 *     EtwpBuildNotificationPacket @ 0x14067D2E8 (EtwpBuildNotificationPacket.c)
 *     EtwpSendDataBlock @ 0x14067F880 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1406801B0 (EtwpUnreferenceDataBlock.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __fastcall SendCaptureStateNotificationsWorker(_QWORD *P)
{
  char v2; // r13
  __int64 v3; // rax
  __int64 v4; // rdi
  volatile signed __int64 *v5; // rsi
  unsigned int v6; // r15d
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rsi
  __int64 *GuidEntryByGuid; // rax
  __int64 *v10; // r13
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // r15
  int v13; // edi
  _WORD *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // zf
  unsigned __int8 v19; // [rsp+28h] [rbp-89h]
  __int16 v20; // [rsp+2Ah] [rbp-87h]
  volatile signed __int32 *v21; // [rsp+30h] [rbp-81h] BYREF
  _DWORD *v22; // [rsp+38h] [rbp-79h]
  __int64 v23; // [rsp+40h] [rbp-71h]
  __int64 v24; // [rsp+48h] [rbp-69h]
  _DWORD v25[30]; // [rsp+50h] [rbp-61h] BYREF
  __int128 v26; // [rsp+C8h] [rbp+17h] BYREF

  v21 = 0LL;
  v26 = 0LL;
  memset(&v25[2], 0, 0x70uLL);
  v2 = 0;
  if ( P )
  {
    v3 = EtwpAcquireLoggerContextByLoggerId(P[4], *((unsigned __int16 *)P + 20), 0);
    v24 = v3;
    v4 = v3;
    if ( v3 )
    {
      v5 = (volatile signed __int64 *)(v3 + 704);
      ExAcquirePushLockExclusiveEx(v3 + 704, 0LL);
      *(_DWORD *)(v4 + 1096) = 0;
      if ( *(_DWORD *)(v4 + 336) )
      {
        v6 = *(unsigned __int16 *)(v4 + 1072);
        if ( (_WORD)v6 )
        {
          v23 = *(unsigned __int16 *)(v4 + 1072);
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v6, 0x74777445u);
          v22 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, *(const void **)(v4 + 1080), 16LL * v6);
            if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v5);
            KeAbPostRelease((ULONG_PTR)v5);
            v25[0] = 3;
            v25[1] = 120;
            v8 = v22;
            do
            {
              GuidEntryByGuid = EtwpFindGuidEntryByGuid(P[4], v8, 0);
              v10 = GuidEntryByGuid;
              if ( GuidEntryByGuid )
              {
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
                v12 = v10[7];
                v10[52] = (__int64)KeGetCurrentThread();
                *(_OWORD *)&v25[10] = *(_OWORD *)v8;
                if ( (__int64 *)v12 != v10 + 7 )
                {
                  do
                  {
                    if ( (*(_BYTE *)(v12 + 98) & 1) == 0 )
                    {
                      v13 = 0;
                      v14 = (_WORD *)v10 + 67;
                      do
                      {
                        v19 = *(_BYTE *)(v12 + 100);
                        if ( ((unsigned __int8)(1 << v13) & v19) != 0 )
                        {
                          if ( *(_DWORD *)(v14 - 3) )
                          {
                            v20 = *((_WORD *)P + 20);
                            if ( *v14 == v20 )
                            {
                              EtwpComputeRegEntryEnableInfo(v12, (__int64)&v25[18]);
                              HIWORD(v25[19]) = v20;
                              v25[18] = 2;
                              if ( (int)EtwpBuildNotificationPacket((__int64)v10, v25, v19, &v21) >= 0 )
                              {
                                EtwpSendDataBlock(v12, (__int64)v21);
                                EtwpUnreferenceDataBlock(v21);
                              }
                            }
                          }
                        }
                        ++v13;
                        v14 += 16;
                      }
                      while ( v13 < 8 );
                    }
                    v12 = *(_QWORD *)v12;
                  }
                  while ( (__int64 *)v12 != v10 + 7 );
                  v8 = v22;
                }
                v10[52] = 0LL;
                ExReleasePushLockEx((ULONG_PTR)(v10 + 51), 0LL);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, v17);
                EtwpUnreferenceGuidEntry(v10);
              }
              v8 += 4;
              v18 = v23-- == 1;
              v22 = v8;
            }
            while ( !v18 );
            v4 = v24;
            v2 = 0;
            v5 = (volatile signed __int64 *)(v24 + 704);
            if ( !*(_DWORD *)(v24 + 336) )
            {
LABEL_30:
              EtwpReleaseLoggerContext((unsigned int *)v4, 0);
              if ( v2 )
                return;
              goto LABEL_31;
            }
            *((_QWORD *)&v26 + 1) = -1LL;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
            if ( *(_WORD *)(v4 + 1072) && !*(_DWORD *)(v4 + 1096) )
            {
              ExSetTimer(*(_QWORD *)(v4 + 1088), *(_QWORD *)(v4 + 1064), 0LL, (__int64)&v26);
              *(_DWORD *)(v4 + 1096) = 1;
              v2 = 1;
            }
          }
        }
      }
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5);
      KeAbPostRelease((ULONG_PTR)v5);
      goto LABEL_30;
    }
  }
LABEL_31:
  ExFreePoolWithTag(P, 0);
}
