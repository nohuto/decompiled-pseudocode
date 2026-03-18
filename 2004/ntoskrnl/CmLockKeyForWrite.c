/*
 * XREFs of CmLockKeyForWrite @ 0x1407B0CB0
 * Callers:
 *     NtLockRegistryKey @ 0x1407B0C10 (NtLockRegistryKey.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x1402056B0 (PsGetPermanentSiloContext.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentSilo @ 0x140299370 (PsGetCurrentSilo.c)
 *     CmpLockKcbExclusive @ 0x1405DF678 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1405F0C10 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406725F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpPerformSiloKeyLockTrackerEnabledCheck @ 0x1407B0E7C (CmpPerformSiloKeyLockTrackerEnabledCheck.c)
 *     CmpGlobalLockKeyForWrite @ 0x1407B0EA0 (CmpGlobalLockKeyForWrite.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407B1018 (CmpCreateSiloKeyLockEntry.c)
 *     CmpFreeSiloKeyLockEntry @ 0x14086F414 (CmpFreeSiloKeyLockEntry.c)
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
  struct _KTHREAD *v11; // rax
  ULONG_PTR v12; // rcx
  _QWORD *v13; // rax
  ULONG_PTR j; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  SiloKeyLockEntry = 0LL;
  v17 = 0LL;
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
  if ( *(_QWORD *)(v4 + 32) == CmpMasterHive )
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  SiloKeyLockEntry = (_QWORD *)CmpCreateSiloKeyLockEntry(v4);
  if ( SiloKeyLockEntry )
  {
    v5 = CmpGlobalLockKeyForWrite(v4, &v17);
    if ( v5 < 0 )
      goto LABEL_23;
    SiloKeyLockEntry[3] = v17;
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    v7 = BugCheckParameter2;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    v5 = CmpPerformSiloKeyLockTrackerEnabledCheck(v7);
    if ( v5 >= 0 )
    {
      v13 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v13 != v9 )
        __fastfail(3u);
      *SiloKeyLockEntry = v9;
      SiloKeyLockEntry[1] = v13;
      *v13 = SiloKeyLockEntry;
      v9[1] = SiloKeyLockEntry;
      ExReleasePushLockEx(v12, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      CmpUnlockKcb(v4);
      for ( j = *(_QWORD *)(v4 + 72); *(_QWORD *)(j + 32) != CmpMasterHive; j = *(_QWORD *)(j + 72) )
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
