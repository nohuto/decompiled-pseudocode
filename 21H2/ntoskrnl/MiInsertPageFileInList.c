/*
 * XREFs of MiInsertPageFileInList @ 0x1407B74F0
 * Callers:
 *     MmStoreRegister @ 0x1407B6890 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x1407B6B3C (MiCreatePagingFile.c)
 * Callees:
 *     MiNumberWsSwapPagefiles @ 0x1402611C8 (MiNumberWsSwapPagefiles.c)
 *     MiMakePartitionActive @ 0x1402970F8 (MiMakePartitionActive.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiIncreaseCommitLimits @ 0x1403BFBD8 (MiIncreaseCommitLimits.c)
 *     MiUpdateReserveClusterInfo @ 0x1403BFEA8 (MiUpdateReserveClusterInfo.c)
 *     MiUpdatePageFileList @ 0x1403BFED8 (MiUpdatePageFileList.c)
 *     PsCreateSystemThreadEx @ 0x1406A7470 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiInsertPageFileInList(__int64 a1)
{
  unsigned __int64 v1; // r13
  unsigned int v3; // r8d
  __int64 v4; // rcx
  __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v7; // r15d
  volatile signed __int64 *v8; // rdi
  __int64 v9; // r14
  int v10; // r8d
  unsigned int v11; // eax
  __int16 v12; // dx
  __int64 *v13; // r9
  __int64 v14; // r10
  __int64 v15; // rax
  __int16 v16; // cx
  int v17; // eax
  __int16 v18; // ax
  char v19; // bl
  KPRIORITY v20; // edx
  BOOLEAN v21; // r8
  int SystemThread; // r14d
  __int64 v24; // [rsp+90h] [rbp+8h] BYREF
  __int64 v25; // [rsp+98h] [rbp+10h]

  v1 = *(_QWORD *)a1;
  v24 = 0LL;
  v3 = 0;
  v25 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 206) |= 1u;
  if ( *(_DWORD *)(a1 + 72) )
  {
    do
    {
      v4 = v3++;
      **(_QWORD **)(*(_QWORD *)(a1 + 64) + 8 * v4) = 2575857425LL;
    }
    while ( v3 < *(_DWORD *)(a1 + 72) );
  }
  v5 = *(_QWORD *)(a1 + 248);
  CurrentThread = KeGetCurrentThread();
  v7 = 16;
  if ( (ULONG_PTR *)v5 != &MiSystemPartition )
    v7 = 1;
  --CurrentThread->SpecialApcDisable;
  v8 = (volatile signed __int64 *)(v5 + 1040);
  ExAcquirePushLockExclusiveEx(v5 + 1040, 0LL);
  if ( dword_140C4E704 )
  {
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5 + 1040);
    KeAbPostRelease(v5 + 1040);
    SystemThread = -1073741558;
    goto LABEL_48;
  }
  if ( !*(_QWORD *)(v5 + 160) )
  {
    if ( !(unsigned int)MiMakePartitionActive(v5) )
    {
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5 + 1040);
      KeAbPostRelease(v5 + 1040);
      SystemThread = -1073741523;
      goto LABEL_48;
    }
    SystemThread = PsCreateSystemThreadEx(
                     (__int64)&v24,
                     0x1FFFFF,
                     0LL,
                     *(_QWORD *)(*(_QWORD *)(v5 + 176) + 112LL),
                     0LL,
                     (__int64)MiModifiedPageWriter,
                     v5,
                     0LL,
                     0LL);
    if ( SystemThread < 0 )
    {
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5 + 1040);
      KeAbPostRelease(v5 + 1040);
      goto LABEL_48;
    }
    *(_QWORD *)(v5 + 160) = v24;
  }
  v9 = *(unsigned int *)(v5 + 6936);
  if ( (unsigned int)v9 >= v7 )
    goto LABEL_45;
  v10 = 0;
  *(_WORD *)(a1 + 204) ^= ((unsigned __int8)v9 ^ (unsigned __int8)*(_WORD *)(a1 + 204)) & 0xF;
  v11 = *(_DWORD *)(v5 + 6936);
  v12 = *(_WORD *)(a1 + 204);
  if ( v11 )
  {
    v13 = (__int64 *)(v5 + 6944);
    v14 = v11;
    do
    {
      v15 = *v13++;
      v16 = *(_WORD *)(v15 + 204);
      v17 = v10 + 1;
      if ( (v16 & 0x800) == 0 )
        v17 = v10;
      v10 = v17;
      --v14;
    }
    while ( v14 );
    if ( v17 )
    {
      if ( (v12 & 0x810) != 0 )
      {
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v5 + 1040);
        KeAbPostRelease(v5 + 1040);
        SystemThread = -1073741637;
        goto LABEL_48;
      }
      *(_WORD *)(a1 + 204) = v12 | 0x20;
    }
  }
  v18 = *(_WORD *)(a1 + 204);
  if ( (v18 & 0x50) == 0 )
  {
    if ( (unsigned int)MiIncreaseCommitLimits(v5, v1, v25, 0, a1) )
    {
      if ( (*(_BYTE *)(a1 + 204) & 0x20) == 0 && !*(_DWORD *)(v5 + 1036) )
        *(_DWORD *)(v5 + 1036) = 1;
      goto LABEL_21;
    }
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5 + 1040);
    KeAbPostRelease(v5 + 1040);
    SystemThread = -1073741583;
LABEL_48:
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return (unsigned int)SystemThread;
  }
  if ( (v18 & 0x10) != 0 && (unsigned int)MiNumberWsSwapPagefiles(v5) )
  {
LABEL_45:
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5 + 1040);
    KeAbPostRelease(v5 + 1040);
    SystemThread = -1073741673;
    goto LABEL_48;
  }
  MiUpdatePageFileList(a1, 1);
  *(_QWORD *)(v5 + 8 * v9 + 6944) = a1;
  *(_DWORD *)(v5 + 6936) = v9 + 1;
LABEL_21:
  v19 = _InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
    ExfTryToWakePushLock(v5 + 1040);
  KeAbPostRelease(v5 + 1040);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiUpdateReserveClusterInfo(v5, 0LL, 0);
  KeSetEvent((PRKEVENT)(v5 + 880), v20, v21);
  return 0LL;
}
