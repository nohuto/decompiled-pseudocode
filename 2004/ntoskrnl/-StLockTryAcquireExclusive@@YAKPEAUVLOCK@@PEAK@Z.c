/*
 * XREFs of ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x1402D00AC
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x1402CFA3C (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeAbPostReleaseEx @ 0x140272DF0 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4 (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall StLockTryAcquireExclusive(ULONG_PTR BugCheckParameter2, unsigned int *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rbx
  ULONG_PTR v6; // rdi
  __int64 v7; // rcx
  bool v8; // zf
  __int64 v10; // rax
  char v11; // cl
  int SessionId; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v14; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v14 = 0;
  v5 = KeGetCurrentThread();
  --v5->SpecialApcDisable;
  if ( ++v5->AbAllocationRegionCount != 1 )
  {
    v6 = 0LL;
LABEL_3:
    _interlockedbittestandset((volatile signed __int32 *)&v5->116 + 1, 0x10u);
    goto LABEL_4;
  }
  LOBYTE(v10) = v5->AbEntrySummary;
  if ( (_BYTE)v10 )
    goto LABEL_13;
  if ( v5->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v5->AbOrphanedEntrySummary;
    v5->AbOrphanedEntrySummary = 0;
    LOBYTE(v10) = v5->AbEntrySummary | AbOrphanedEntrySummary;
LABEL_13:
    v11 = v10;
    _BitScanForward((unsigned int *)&v10, (unsigned __int8)v10);
    v5->AbEntrySummary = v11 & ~(1 << v10);
    v6 = (ULONG_PTR)&v5->LockEntries[v10];
    goto LABEL_14;
  }
  v6 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
    goto LABEL_3;
  EtwTraceAutoBoostEntryExhaustion(v5, BugCheckParameter2);
LABEL_14:
  if ( !v6 )
    goto LABEL_3;
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140C4F7C8[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v6 + 40) = SessionId;
  *(_QWORD *)(v6 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_4:
  --v5->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v5, BugCheckParameter2, &v14);
  v8 = v5->SpecialApcDisable++ == -1;
  if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery(v7);
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
  {
    if ( v6 )
      KeAbPostReleaseEx(BugCheckParameter2, v6);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    return 0LL;
  }
  else
  {
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    *a2 = 1;
    return 1LL;
  }
}
