/*
 * XREFs of CmpRefreshHive @ 0x14087FA64
 * Callers:
 *     CmRestoreKey @ 0x14087E5A8 (CmRestoreKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140204C50 (CmpAllocateTransientPoolWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     CmpInitializeDelayDerefContext @ 0x140227238 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140227250 (CmpDrainDelayDerefContext.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpCreateHive @ 0x1405DDED8 (CmpCreateHive.c)
 *     HvUnlockHiveWriter @ 0x1405DE540 (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x1405DE570 (HvLockHiveWriter.c)
 *     CmpLockKcbShared @ 0x140613810 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     HvUnlockHiveFlusherShared @ 0x14067010C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140670144 (HvLockHiveFlusherShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406773C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpRebuildKcbCache @ 0x1406A1CF8 (CmpRebuildKcbCache.c)
 *     CmpCleanUpKCBCacheTable @ 0x1406A37D8 (CmpCleanUpKCBCacheTable.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1407017C0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDestroyHive @ 0x1407254A8 (CmpDestroyHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407946B4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140795094 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1408719A4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpSwapHiveStorage @ 0x140875858 (CmpSwapHiveStorage.c)
 *     HvMarkCellDirty @ 0x14087E360 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpRefreshHive(__int64 a1)
{
  char v2; // si
  char v3; // r15
  struct _PRIVILEGE_SET *v4; // r12
  ULONG_PTR v5; // r14
  ULONG_PTR v6; // rdi
  int Hive; // ebx
  __int64 v9; // r13
  PLOOKASIDE_LIST_EX v10; // r9
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  int v12; // eax
  unsigned int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // [rsp+60h] [rbp-39h] BYREF
  __int64 v18; // [rsp+68h] [rbp-31h]
  __int128 v19; // [rsp+78h] [rbp-21h] BYREF
  _OWORD v20[6]; // [rsp+88h] [rbp-11h] BYREF
  char v21; // [rsp+100h] [rbp+67h]
  BOOLEAN v22; // [rsp+108h] [rbp+6Fh]
  PVOID P; // [rsp+110h] [rbp+77h] BYREF
  __int64 v24; // [rsp+118h] [rbp+7Fh] BYREF

  v24 = 0xFFFFFFFFLL;
  v17 = 0xFFFFFFFFLL;
  v2 = 0;
  P = 0LL;
  memset(v20, 0, 32);
  v3 = 0;
  v4 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  CmpInitializeDelayDerefContext(&v19);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v5 + 32);
  v22 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v6 + 1632));
  if ( !v22 )
  {
    Hive = -1073740763;
    goto LABEL_7;
  }
  CmpBecomeActiveFlusherAndReconciler(v6);
  v2 = 1;
  CmpLockRegistry();
  CmpLockKcbShared(v5);
  v21 = 1;
  Hive = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( Hive < 0 )
    goto LABEL_6;
  if ( *(_BYTE *)(v6 + 2936) == 1 )
  {
    Hive = -1073741431;
LABEL_6:
    CmpUnlockKcb(v5);
    v3 = 1;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(v6 + 160) & 2) == 0 )
  {
LABEL_19:
    Hive = -1073741811;
    goto LABEL_6;
  }
  HvLockHiveFlusherShared(v6);
  HvLockHiveWriter(v6);
  if ( *(_DWORD *)(v6 + 904) )
  {
    Hive = -1073741823;
    HvUnlockHiveWriter(v6);
    HvUnlockHiveFlusherShared(v6);
    v9 = 0LL;
LABEL_45:
    if ( v18 )
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v6 + 16))(v6, &v24);
    if ( v9 )
      (*((void (__fastcall **)(PVOID, __int64 *))P + 2))(P, &v17);
    v3 = 1;
    if ( v21 )
      goto LABEL_6;
    goto LABEL_7;
  }
  HvUnlockHiveWriter(v6);
  HvUnlockHiveFlusherShared(v6);
  if ( (*(_DWORD *)(v5 + 184) & 0x40000) == 0 )
    goto LABEL_19;
  if ( *(_DWORD *)(v6 + 2912) )
  {
    Hive = -1073741823;
    goto LABEL_6;
  }
  CmpUnlockKcb(v5);
  v21 = 0;
  CmpUnlockRegistry();
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, 0x1B0uLL, 0x33394D43u, v10);
  v4 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
  {
    Hive = -1073741670;
    goto LABEL_7;
  }
  memset(TransientPoolWithTag, 0, 0x1B0uLL);
  memset((char *)v20 + 8, 0, 24);
  *(_QWORD *)&v20[0] = *(_QWORD *)(v6 + 1536);
  v12 = *(_DWORD *)(v6 + 164);
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      v13 = 1;
      *((_QWORD *)&v20[0] + 1) = *(_QWORD *)(v6 + 1544);
    }
    else
    {
      v13 = 2;
      *(_OWORD *)((char *)v20 + 8) = *(_OWORD *)(v6 + 1568);
    }
  }
  else
  {
    v13 = 0;
  }
  Hive = CmpCreateHive(
           (ULONG_PTR *)&P,
           2u,
           *(_DWORD *)(v6 + 160) & 0xFFFEFFFF,
           v13,
           0LL,
           (void **)v20,
           0LL,
           17825794,
           0LL,
           0LL,
           0LL,
           (__int64)v4);
  if ( Hive >= 0 )
  {
    CmpLockRegistryExclusive();
    v3 = 1;
    Hive = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( Hive >= 0 )
    {
      if ( *(_BYTE *)(v6 + 2936) == 1 )
      {
        Hive = -1073741431;
        goto LABEL_7;
      }
      if ( (*(_DWORD *)(v6 + 160) & 2) == 0 )
        goto LABEL_37;
      if ( *(_DWORD *)(v6 + 904) )
      {
LABEL_39:
        Hive = -1073741823;
        goto LABEL_7;
      }
      if ( (*(_DWORD *)(v5 + 184) & 0x40000) != 0 )
      {
        if ( *(_DWORD *)(v6 + 2912) )
          goto LABEL_39;
        v14 = *(unsigned int *)(*((_QWORD *)P + 8) + 36LL);
        if ( (_DWORD)v14 == *(_DWORD *)(*(_QWORD *)(v6 + 64) + 36LL) )
        {
          v9 = (*((__int64 (__fastcall **)(PVOID, __int64, __int64 *))P + 1))(P, v14, &v17);
          v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v6 + 8))(
                  v6,
                  *(unsigned int *)(*(_QWORD *)(v6 + 64) + 36LL),
                  &v24);
          v18 = v15;
          if ( HvMarkCellDirty((ULONG_PTR)P, *(unsigned int *)(*((_QWORD *)P + 8) + 36LL), 0) )
          {
            v16 = *(_DWORD *)(v15 + 16);
            *(_WORD *)(v9 + 2) |= 0xCu;
            *(_DWORD *)(v9 + 16) = v16;
            (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v6 + 16))(v6, &v24);
            (*((void (__fastcall **)(PVOID, __int64 *))P + 2))(P, &v17);
            CmpCleanUpKCBCacheTable(v6);
            CmpSearchKeyControlBlockTreeEx(
              (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, __int64))CmpRefreshWorkerRoutine,
              v6,
              (__int64)&v19,
              0LL,
              1);
            CmpFlushNotifiesOnKeyBodyList(v5, 0LL, (__int64)&v19, 1);
            CmpSwapHiveStorage(v6, (__int64)P);
            CmpRebuildKcbCache(v5);
            ++*(_DWORD *)(v6 + 204);
            Hive = 0;
            goto LABEL_7;
          }
          Hive = -1073741443;
          goto LABEL_45;
        }
      }
LABEL_37:
      Hive = -1073741811;
    }
  }
LABEL_7:
  CmpDrainDelayDerefContext((_QWORD **)&v19);
  if ( v3 )
    CmpUnlockRegistry();
  if ( v2 )
    CmpFinishBeingActiveFlusherAndReconciler(v6);
  if ( v22 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v6 + 1632));
  if ( P )
    CmpDestroyHive((volatile signed __int32 *)P);
  if ( v4 )
    CmSiFreeMemory(v4);
  return (unsigned int)Hive;
}
