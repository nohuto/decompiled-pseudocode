/*
 * XREFs of CmLockKeyForWrite @ 0x14080F9EC
 * Callers:
 *     NtLockRegistryKey @ 0x14080F930 (NtLockRegistryKey.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x140211FA0 (PsGetPermanentSiloContext.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     CmpLockKcbExclusive @ 0x1407C0854 (CmpLockKcbExclusive.c)
 *     CmpLockSiloKeyLockTrackerExclusive @ 0x1407FCA44 (CmpLockSiloKeyLockTrackerExclusive.c)
 *     CmpPerformSiloKeyLockTrackerEnabledCheck @ 0x14080FBA8 (CmpPerformSiloKeyLockTrackerEnabledCheck.c)
 *     CmpGlobalLockKeyForWrite @ 0x14080FBCC (CmpGlobalLockKeyForWrite.c)
 *     CmpCreateSiloKeyLockEntry @ 0x14080FD5C (CmpCreateSiloKeyLockEntry.c)
 *     CmpFreeSiloKeyLockEntry @ 0x1409192C8 (CmpFreeSiloKeyLockEntry.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmLockKeyForWrite(__int64 a1)
{
  _QWORD *SiloKeyLockEntry; // r15
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  int v8; // ebx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rsi
  ULONG_PTR v11; // rcx
  _QWORD *v12; // r14
  _QWORD *i; // rax
  ULONG_PTR v14; // rcx
  ULONG_PTR v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 j; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF
  __int64 v24; // [rsp+50h] [rbp+18h] BYREF

  SiloKeyLockEntry = 0LL;
  v24 = 0LL;
  CurrentSilo = PsGetCurrentSilo();
  BugCheckParameter2 = 0LL;
  PsGetPermanentSiloContext((__int64)CurrentSilo, CmpSiloContextSlot, &BugCheckParameter2);
  if ( !BugCheckParameter2 )
    return (unsigned int)-1073741637;
  CmpLockRegistry(v5, v4, v6);
  v7 = *(_QWORD *)(a1 + 8);
  CmpLockKcbExclusive(v7);
  v8 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v8 < 0 )
    goto LABEL_23;
  if ( *(_QWORD *)(v7 + 32) == CmpMasterHive )
  {
    v8 = -1073741811;
    goto LABEL_23;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = BugCheckParameter2;
  ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
  v8 = CmpPerformSiloKeyLockTrackerEnabledCheck(v10);
  if ( v8 < 0 )
    goto LABEL_22;
  v12 = (_QWORD *)(v10 + 16);
  for ( i = *(_QWORD **)(v10 + 16); i != v12; i = (_QWORD *)*i )
  {
    if ( i[2] == v7 )
    {
      v8 = 0;
      goto LABEL_22;
    }
  }
  ExReleasePushLockEx(v11, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  SiloKeyLockEntry = (_QWORD *)CmpCreateSiloKeyLockEntry(v7);
  if ( SiloKeyLockEntry )
  {
    v8 = CmpGlobalLockKeyForWrite(v7, &v24);
    if ( v8 < 0 )
      goto LABEL_23;
    v10 = BugCheckParameter2;
    v14 = BugCheckParameter2;
    SiloKeyLockEntry[3] = v24;
    CmpLockSiloKeyLockTrackerExclusive(v14);
    v8 = CmpPerformSiloKeyLockTrackerEnabledCheck(v10);
    if ( v8 >= 0 )
    {
      v16 = (_QWORD *)v12[1];
      if ( (_QWORD *)*v16 != v12 )
        __fastfail(3u);
      *SiloKeyLockEntry = v12;
      SiloKeyLockEntry[1] = v16;
      *v16 = SiloKeyLockEntry;
      v12[1] = SiloKeyLockEntry;
      ExReleasePushLockEx(v15, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      CmpUnlockKcb(v7);
      for ( j = *(_QWORD *)(v7 + 72); *(_QWORD *)(j + 32) != CmpMasterHive; j = *(_QWORD *)(j + 72) )
      {
        CmpLockKcbExclusive(j);
        *(_WORD *)(j + 8) |= 0x100u;
        CmpUnlockKcb(j);
      }
      v8 = 0;
      goto LABEL_17;
    }
LABEL_22:
    ExReleasePushLockEx(v10, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_23;
  }
  v8 = -1073741670;
LABEL_23:
  CmpUnlockKcb(v7);
  if ( SiloKeyLockEntry )
    CmpFreeSiloKeyLockEntry(SiloKeyLockEntry);
LABEL_17:
  CmpUnlockRegistry(v18, v17, v19, v20);
  return (unsigned int)v8;
}
