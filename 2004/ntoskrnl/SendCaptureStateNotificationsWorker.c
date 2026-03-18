/*
 * XREFs of SendCaptureStateNotificationsWorker @ 0x14093C340
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExSetTimer @ 0x140275960 (ExSetTimer.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     EtwpBuildNotificationPacket @ 0x140632D68 (EtwpBuildNotificationPacket.c)
 *     EtwpUnreferenceDataBlock @ 0x140633EA0 (EtwpUnreferenceDataBlock.c)
 *     EtwpSendDataBlock @ 0x140637004 (EtwpSendDataBlock.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14066B0C8 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14066BA28 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 *     EtwpFindGuidEntryByGuid @ 0x14066E1D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14066F5A8 (EtwpUnreferenceGuidEntry.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __fastcall SendCaptureStateNotificationsWorker(_QWORD *P)
{
  char v2; // r14
  __int64 v3; // rax
  __int64 v4; // rdi
  volatile signed __int64 *v5; // rsi
  unsigned int v6; // r12d
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rsi
  __int64 *GuidEntryByGuid; // rax
  __int64 *v10; // r13
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // r12
  _WORD *v13; // r8
  int v14; // edi
  bool v15; // zf
  char v16; // [rsp+28h] [rbp-89h]
  __int16 v17; // [rsp+2Ah] [rbp-87h]
  volatile signed __int32 *v18; // [rsp+30h] [rbp-81h] BYREF
  _WORD *v19; // [rsp+38h] [rbp-79h]
  _DWORD *v20; // [rsp+40h] [rbp-71h]
  __int64 v21; // [rsp+48h] [rbp-69h]
  __int64 v22; // [rsp+50h] [rbp-61h]
  _DWORD v23[30]; // [rsp+58h] [rbp-59h] BYREF
  __int128 v24; // [rsp+D0h] [rbp+1Fh] BYREF

  v18 = 0LL;
  v24 = 0LL;
  memset(&v23[2], 0, 0x70uLL);
  v2 = 1;
  if ( P )
  {
    v3 = EtwpAcquireLoggerContextByLoggerId(P[4], *((unsigned __int16 *)P + 20), 0);
    v22 = v3;
    v4 = v3;
    if ( !v3 )
    {
LABEL_33:
      ExFreePoolWithTag(P, 0);
      return;
    }
    v5 = (volatile signed __int64 *)(v3 + 704);
    ExAcquirePushLockExclusiveEx(v3 + 704, 0LL);
    *(_DWORD *)(v4 + 1096) = 0;
    if ( *(_DWORD *)(v4 + 336) )
    {
      v6 = *(unsigned __int16 *)(v4 + 1072);
      if ( (_WORD)v6 )
      {
        v21 = *(unsigned __int16 *)(v4 + 1072);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v6, 0x74777445u);
        v20 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, *(const void **)(v4 + 1080), 16LL * v6);
          if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v5);
          KeAbPostRelease((ULONG_PTR)v5);
          v23[0] = 3;
          v23[1] = 120;
          v8 = v20;
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
              *(_OWORD *)&v23[10] = *(_OWORD *)v8;
              if ( (__int64 *)v12 != v10 + 7 )
              {
                do
                {
                  if ( (*(_BYTE *)(v12 + 98) & 1) == 0 )
                  {
                    v13 = (_WORD *)v10 + 67;
                    v14 = 0;
                    v19 = (_WORD *)v10 + 67;
                    do
                    {
                      v16 = *(_BYTE *)(v12 + 100);
                      if ( ((unsigned __int8)(1 << v14) & (unsigned __int8)v16) != 0 )
                      {
                        if ( *(_DWORD *)(v13 - 3) )
                        {
                          v17 = *((_WORD *)P + 20);
                          if ( *v13 == v17 )
                          {
                            EtwpComputeRegEntryEnableInfo(v12, (__int64)&v23[18]);
                            HIWORD(v23[19]) = v17;
                            v23[18] = 2;
                            if ( (int)EtwpBuildNotificationPacket((__int64)v10, v23, v16, &v18) >= 0 )
                            {
                              EtwpSendDataBlock(v12, (__int64)v18);
                              EtwpUnreferenceDataBlock(v18);
                            }
                            v13 = v19;
                          }
                        }
                      }
                      v13 += 16;
                      ++v14;
                      v19 = v13;
                    }
                    while ( v14 < 8 );
                  }
                  v12 = *(_QWORD *)v12;
                }
                while ( (__int64 *)v12 != v10 + 7 );
                v8 = v20;
              }
              v10[52] = 0LL;
              ExReleasePushLockEx((ULONG_PTR)(v10 + 51), 0LL);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              EtwpUnreferenceGuidEntry(v10);
            }
            v8 += 4;
            v15 = v21-- == 1;
            v20 = v8;
          }
          while ( !v15 );
          v4 = v22;
          v5 = (volatile signed __int64 *)(v22 + 704);
          if ( !*(_DWORD *)(v22 + 336) )
          {
LABEL_32:
            EtwpReleaseLoggerContext((unsigned int *)v4, 0);
            if ( !v2 )
              return;
            goto LABEL_33;
          }
          *((_QWORD *)&v24 + 1) = -1LL;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
          if ( *(_WORD *)(v4 + 1072) )
          {
            if ( !*(_DWORD *)(v4 + 1096) )
            {
              ExSetTimer(*(_QWORD *)(v4 + 1088), *(_QWORD *)(v4 + 1064), 0LL, (__int64)&v24);
              *(_DWORD *)(v4 + 1096) = 1;
            }
            v2 = 0;
          }
        }
      }
    }
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    goto LABEL_32;
  }
}
