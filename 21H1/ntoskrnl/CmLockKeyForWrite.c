/*
 * XREFs of CmLockKeyForWrite @ 0x1407ADB50
 * Callers:
 *     NtLockRegistryKey @ 0x1407ADAB0 (NtLockRegistryKey.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140206860 (PsGetCurrentSilo.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     PsGetPermanentSiloContext @ 0x14025E5D0 (PsGetPermanentSiloContext.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpLockKcbExclusive @ 0x140695D18 (CmpLockKcbExclusive.c)
 *     CmpPerformSiloKeyLockTrackerEnabledCheck @ 0x1407ADD1C (CmpPerformSiloKeyLockTrackerEnabledCheck.c)
 *     CmpGlobalLockKeyForWrite @ 0x1407ADD40 (CmpGlobalLockKeyForWrite.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407ADEB8 (CmpCreateSiloKeyLockEntry.c)
 *     CmpFreeSiloKeyLockEntry @ 0x14086D954 (CmpFreeSiloKeyLockEntry.c)
 */

__int64 __fastcall CmLockKeyForWrite(__int64 a1)
{
  _QWORD *SiloKeyLockEntry; // rsi
  struct _LIST_ENTRY *CurrentSilo; // rax
  ULONG_PTR v4; // rdi
  int v5; // ebx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // rbp
  ULONG_PTR v8; // rcx
  _QWORD *v9; // r14
  _QWORD *i; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *v14; // rax
  ULONG_PTR v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  ULONG_PTR j; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF
  __int64 v26; // [rsp+50h] [rbp+18h] BYREF

  SiloKeyLockEntry = 0LL;
  v26 = 0LL;
  CurrentSilo = PsGetCurrentSilo();
  BugCheckParameter2 = 0LL;
  PsGetPermanentSiloContext((__int64)CurrentSilo, CmpSiloContextSlot, &BugCheckParameter2);
  if ( !BugCheckParameter2 )
    return (unsigned int)-1073741637;
  CmpLockRegistry();
  v4 = *(_QWORD *)(a1 + 8);
  CmpLockKcbExclusive(v4);
  v5 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v5 < 0 )
    goto LABEL_23;
  if ( *(PVOID *)(v4 + 32) == CmpMasterHive )
  {
    v5 = -1073741811;
    goto LABEL_23;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = BugCheckParameter2;
  ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
  v5 = CmpPerformSiloKeyLockTrackerEnabledCheck(v7);
  if ( v5 < 0 )
    goto LABEL_22;
  v9 = (_QWORD *)(v7 + 16);
  for ( i = *(_QWORD **)(v7 + 16); i != v9; i = (_QWORD *)*i )
  {
    if ( i[2] == v4 )
    {
      v5 = 0;
      goto LABEL_22;
    }
  }
  ExReleasePushLockEx(v8, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  SiloKeyLockEntry = (_QWORD *)CmpCreateSiloKeyLockEntry(v4);
  if ( SiloKeyLockEntry )
  {
    v5 = CmpGlobalLockKeyForWrite(v4, &v26);
    if ( v5 < 0 )
      goto LABEL_23;
    SiloKeyLockEntry[3] = v26;
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    v7 = BugCheckParameter2;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    v5 = CmpPerformSiloKeyLockTrackerEnabledCheck(v7);
    if ( v5 >= 0 )
    {
      v16 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v16 != v9 )
        __fastfail(3u);
      *SiloKeyLockEntry = v9;
      SiloKeyLockEntry[1] = v16;
      *v16 = SiloKeyLockEntry;
      v9[1] = SiloKeyLockEntry;
      ExReleasePushLockEx(v15, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
      CmpUnlockKcb(v4);
      for ( j = *(_QWORD *)(v4 + 72); *(PVOID *)(j + 32) != CmpMasterHive; j = *(_QWORD *)(j + 72) )
      {
        CmpLockKcbExclusive(j);
        *(_WORD *)(j + 8) |= 0x100u;
        CmpUnlockKcb(j);
      }
      v5 = 0;
      goto LABEL_17;
    }
LABEL_22:
    ExReleasePushLockEx(v7, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
    goto LABEL_23;
  }
  v5 = -1073741670;
LABEL_23:
  CmpUnlockKcb(v4);
  if ( SiloKeyLockEntry )
    CmpFreeSiloKeyLockEntry(SiloKeyLockEntry);
LABEL_17:
  CmpUnlockRegistry();
  return (unsigned int)v5;
}
