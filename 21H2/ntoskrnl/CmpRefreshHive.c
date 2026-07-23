/*
 * XREFs of CmpRefreshHive @ 0x14087D558
 * Callers:
 *     CmRestoreKey @ 0x14087C090 (CmRestoreKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpCleanUpKCBCacheTable @ 0x1405E0B60 (CmpCleanUpKCBCacheTable.c)
 *     CmpRebuildKcbCache @ 0x140614584 (CmpRebuildKcbCache.c)
 *     HvUnlockHiveFlusherShared @ 0x14065B0AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14065B0E4 (HvLockHiveFlusherShared.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140661A20 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     HvUnlockHiveWriter @ 0x1406F7EE0 (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x1406F7F10 (HvLockHiveWriter.c)
 *     CmpLockKcbShared @ 0x140709EF0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpDestroyHive @ 0x1407293E8 (CmpDestroyHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14079EDD8 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14079F7B4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpSearchKeyControlBlockTree @ 0x14086F314 (CmpSearchKeyControlBlockTree.c)
 *     CmpSwapHiveStorage @ 0x14087326C (CmpSwapHiveStorage.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpRefreshHive(__int64 a1)
{
  char v2; // si
  char v3; // r15
  struct _PRIVILEGE_SET *v4; // r12
  ULONG_PTR v5; // r14
  __int64 v6; // rdi
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
  v22 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v6 + 1632));
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
      (*(void (__fastcall **)(__int64, __int64 *))(v6 + 16))(v6, &v24);
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
           v20,
           0LL,
           (*(_DWORD *)(v6 + 4152) & 0x10000) != 0 ? 18415650 : 18415682,
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
          v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v6 + 8))(
                  v6,
                  *(unsigned int *)(*(_QWORD *)(v6 + 64) + 36LL),
                  &v24);
          v18 = v15;
          if ( HvMarkCellDirty((ULONG_PTR)P, *(unsigned int *)(*((_QWORD *)P + 8) + 36LL), 0) )
          {
            v16 = *(_DWORD *)(v15 + 16);
            *(_WORD *)(v9 + 2) |= 0xCu;
            *(_DWORD *)(v9 + 16) = v16;
            (*(void (__fastcall **)(__int64, __int64 *))(v6 + 16))(v6, &v24);
            (*((void (__fastcall **)(PVOID, __int64 *))P + 2))(P, &v17);
            CmpCleanUpKCBCacheTable(v6);
            CmpSearchKeyControlBlockTree((__int64)CmpRefreshWorkerRoutine, v6, (__int64)&v19);
            CmpFlushNotifiesOnKeyBodyList(v5, 0, (__int64)&v19, 1);
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
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v6 + 1632));
  if ( P )
    CmpDestroyHive((volatile signed __int32 *)P);
  if ( v4 )
    CmSiFreeMemory(v4);
  return (unsigned int)Hive;
}
