/*
 * XREFs of CmpRefreshHive @ 0x14090D9E8
 * Callers:
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpDestroyHive @ 0x14065A7E0 (CmpDestroyHive.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14067EE40 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCreateHive @ 0x14068A7FC (CmpCreateHive.c)
 *     CmpCleanUpKCBCacheTable @ 0x14069F904 (CmpCleanUpKCBCacheTable.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpRebuildKcbCache @ 0x14071B3F0 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14083D1A4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14083D56C (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140915544 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpSwapHiveStorage @ 0x140919B78 (CmpSwapHiveStorage.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140AB4138 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140AB4178 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmpRefreshHive(__int64 a1)
{
  BOOLEAN v2; // r14
  char v3; // si
  char v4; // r15
  struct _PRIVILEGE_SET *v5; // r12
  ULONG_PTR v6; // r13
  ULONG_PTR v7; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  volatile signed __int64 *v12; // r14
  volatile signed __int64 *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  PLOOKASIDE_LIST_EX v18; // r9
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v25; // eax
  unsigned int v26; // r9d
  ULONG_PTR v27; // rdx
  __int64 CellFlat; // rax
  __int64 v29; // r14
  ULONG_PTR v30; // rdx
  __int64 CellPaged; // rax
  __int64 v32; // r13
  int v33; // eax
  int v34; // [rsp+20h] [rbp-79h]
  __int64 v35; // [rsp+60h] [rbp-39h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-31h] BYREF
  ULONG_PTR v37; // [rsp+70h] [rbp-29h]
  __int128 v38; // [rsp+80h] [rbp-19h] BYREF
  _OWORD v39[6]; // [rsp+90h] [rbp-9h] BYREF
  BOOLEAN v41; // [rsp+108h] [rbp+6Fh]
  char UnloadRundown; // [rsp+110h] [rbp+77h]
  __int64 v43; // [rsp+118h] [rbp+7Fh] BYREF

  v43 = 0LL;
  v35 = 0LL;
  memset(v39, 0, 32);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  BugCheckParameter3 = 0LL;
  v38 = 0LL;
  v5 = 0LL;
  HvpGetCellContextReinitialize(&v43);
  HvpGetCellContextReinitialize(&v35);
  CmpInitializeDelayDerefContext(&v38);
  v6 = *(_QWORD *)(a1 + 8);
  v37 = v6;
  v7 = *(_QWORD *)(v6 + 32);
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( !UnloadRundown )
  {
    v8 = -1073741431;
    goto LABEL_29;
  }
  v41 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v7 + 1640));
  v2 = v41;
  if ( !v41 )
  {
    v8 = -1073740763;
    goto LABEL_29;
  }
  CmpBecomeActiveFlusherAndReconciler(v7);
  v3 = 1;
  CmpLockRegistry(v10, v9, v11);
  CmpLockKcbShared(v6);
  v8 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v8 < 0 )
    goto LABEL_8;
  if ( *(_BYTE *)(v7 + 2944) == 1 )
  {
    v8 = -1073741431;
LABEL_8:
    CmpUnlockKcb(v6);
    v4 = 1;
    goto LABEL_29;
  }
  if ( (*(_DWORD *)(v7 + 160) & 2) == 0 )
  {
    v8 = -1073741811;
    goto LABEL_8;
  }
  v12 = (volatile signed __int64 *)(v7 + 72);
  ExAcquirePushLockSharedEx(v7 + 72, 0LL);
  v13 = (volatile signed __int64 *)(v7 + 80);
  ExAcquirePushLockExclusiveEx(v7 + 80, 0LL);
  if ( *(_DWORD *)(v7 + 912) )
  {
    v8 = -1073741823;
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7 + 80);
    KeAbPostRelease(v7 + 80);
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v7 + 72));
    KeAbPostRelease(v7 + 72);
    goto LABEL_23;
  }
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7 + 80);
  KeAbPostRelease(v7 + 80);
  if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v7 + 72));
  KeAbPostRelease(v7 + 72);
  if ( (*(_DWORD *)(v6 + 184) & 0x40000) == 0 )
  {
    v8 = -1073741811;
LABEL_23:
    v2 = v41;
    goto LABEL_8;
  }
  if ( *(_DWORD *)(v7 + 2920) )
  {
    v8 = -1073741823;
    goto LABEL_23;
  }
  CmpUnlockKcb(v6);
  CmpUnlockRegistry(v15, v14, v16, v17);
  v4 = 0;
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, 0x1B0uLL, 0x33394D43u, v18);
  v5 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, 0x1B0uLL);
    memset((char *)v39 + 8, 0, 24);
    *(_QWORD *)&v39[0] = *(_QWORD *)(v7 + 1544);
    v25 = *(_DWORD *)(v7 + 168);
    if ( v25 )
    {
      if ( v25 == 1 )
      {
        v26 = 1;
        *((_QWORD *)&v39[0] + 1) = *(_QWORD *)(v7 + 1552);
      }
      else
      {
        v26 = 2;
        *(_OWORD *)((char *)v39 + 8) = *(_OWORD *)(v7 + 1576);
      }
    }
    else
    {
      v26 = 0;
    }
    v8 = CmpCreateHive(
           &BugCheckParameter3,
           2u,
           *(_DWORD *)(v7 + 160) & 0xFFFEFFFF,
           v26,
           0LL,
           v39,
           0LL,
           17367042,
           0LL,
           0LL,
           0LL,
           (__int64)v5);
    if ( v8 < 0 )
      goto LABEL_28;
    CmpLockRegistryExclusive();
    v4 = 1;
    v8 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( v8 < 0 )
      goto LABEL_28;
    if ( *(_BYTE *)(v7 + 2944) == 1 )
    {
      v8 = -1073741431;
      goto LABEL_28;
    }
    if ( (*(_DWORD *)(v7 + 160) & 2) == 0 )
    {
LABEL_52:
      v8 = -1073741811;
      goto LABEL_28;
    }
    if ( !*(_DWORD *)(v7 + 912) )
    {
      if ( (*(_DWORD *)(v6 + 184) & 0x40000) == 0 )
        goto LABEL_52;
      if ( !*(_DWORD *)(v7 + 2920) )
      {
        v27 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
        if ( (_DWORD)v27 == *(_DWORD *)(*(_QWORD *)(v7 + 64) + 36LL) )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(BugCheckParameter3, v27, &v35);
          else
            CellFlat = HvpGetCellPaged(BugCheckParameter3, v27, (unsigned int *)&v35);
          v29 = CellFlat;
          v30 = *(unsigned int *)(*(_QWORD *)(v7 + 64) + 36LL);
          if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
            CellPaged = HvpGetCellFlat(v7, v30, &v43);
          else
            CellPaged = HvpGetCellPaged(v7, v30, (unsigned int *)&v43);
          v32 = CellPaged;
          v8 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL), 0);
          if ( v8 < 0 )
          {
            if ( v32 )
            {
              if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v7, &v43);
              else
                HvpReleaseCellPaged(v7, (unsigned int *)&v43);
            }
            if ( v29 )
            {
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, &v35);
              else
                HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v35);
            }
            v4 = 1;
          }
          else
          {
            v33 = *(_DWORD *)(v32 + 16);
            *(_WORD *)(v29 + 2) |= 0xCu;
            *(_DWORD *)(v29 + 16) = v33;
            if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v7, &v43);
            else
              HvpReleaseCellPaged(v7, (unsigned int *)&v43);
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, &v35);
            else
              HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v35);
            CmpCleanUpKCBCacheTable(v7);
            LOBYTE(v34) = 1;
            CmpSearchKeyControlBlockTreeEx(CmpRefreshWorkerRoutine, v7, &v38, 0LL, v34);
            CmpFlushNotifiesOnKeyBodyList(v37, 0LL, (__int64)&v38, 1);
            CmpSwapHiveStorage(v7, BugCheckParameter3);
            CmpRebuildKcbCache(v37);
            ++*(_DWORD *)(v7 + 212);
            v8 = 0;
          }
          goto LABEL_28;
        }
        goto LABEL_52;
      }
    }
    v8 = -1073741823;
    goto LABEL_28;
  }
  v8 = -1073741670;
LABEL_28:
  v2 = v41;
LABEL_29:
  CmpDrainDelayDerefContext((_QWORD **)&v38);
  if ( v4 )
    CmpUnlockRegistry(v21, v20, v22, v23);
  if ( v3 )
    CmpFinishBeingActiveFlusherAndReconciler(v7, v20, v22);
  if ( v2 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v7 + 1640));
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  if ( BugCheckParameter3 )
    CmpDestroyHive(BugCheckParameter3);
  if ( v5 )
    CmSiFreeMemory(v5);
  return (unsigned int)v8;
}
