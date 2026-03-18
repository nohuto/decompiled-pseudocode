/*
 * XREFs of CmpRefreshHive @ 0x140879EF4
 * Callers:
 *     CmRestoreKey @ 0x140878A38 (CmRestoreKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x1402036A0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpDrainDelayDerefContext @ 0x140205E60 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140205F64 (CmpInitializeDelayDerefContext.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     HvLockHiveFlusherShared @ 0x1405E2D14 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1405E2D30 (HvUnlockHiveFlusherShared.c)
 *     CmpLockKcbShared @ 0x1405F0BE0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1405F0C10 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 *     HvUnlockHiveWriter @ 0x14063B338 (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x14063B368 (HvLockHiveWriter.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmpRebuildKcbCache @ 0x1406432BC (CmpRebuildKcbCache.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406449E0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCleanUpKCBCacheTable @ 0x140652BC8 (CmpCleanUpKCBCacheTable.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406725F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDestroyHive @ 0x1407174E8 (CmpDestroyHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407869A4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140787384 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086BF24 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpSwapHiveStorage @ 0x14086FD08 (CmpSwapHiveStorage.c)
 *     HvMarkCellDirty @ 0x1408787F0 (HvMarkCellDirty.c)
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
           (__int64)v20,
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
