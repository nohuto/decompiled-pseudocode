/*
 * XREFs of ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14023D27C
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14023CC0C (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeAbPostReleaseEx @ 0x140340F60 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall StLockTryAcquireExclusive(unsigned __int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // zf
  __int64 v15; // rax
  char v16; // cl
  int SessionId; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = KeGetCurrentThread();
  --v7->SpecialApcDisable;
  if ( ++v7->AbAllocationRegionCount != 1 )
  {
    v8 = 0LL;
LABEL_3:
    _interlockedbittestandset((volatile signed __int32 *)&v7->116 + 1, 0x10u);
    goto LABEL_4;
  }
  LOBYTE(v15) = v7->AbEntrySummary;
  if ( (_BYTE)v15 )
    goto LABEL_13;
  if ( v7->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v7->AbOrphanedEntrySummary;
    v7->AbOrphanedEntrySummary = 0;
    LOBYTE(v15) = v7->AbEntrySummary | AbOrphanedEntrySummary;
LABEL_13:
    v16 = v15;
    _BitScanForward((unsigned int *)&v15, (unsigned __int8)v15);
    v7->AbEntrySummary = v16 & ~(1 << v15);
    v8 = (__int64)&v7->LockEntries[v15];
    goto LABEL_14;
  }
  v8 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
    goto LABEL_3;
  EtwTraceAutoBoostEntryExhaustion(v7, a1, a3, a4);
LABEL_14:
  if ( !v8 )
    goto LABEL_3;
  if ( a1 >= 0xFFFF800000000000uLL && byte_140C4F908[((a1 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx(v7->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v8 + 40) = SessionId;
  *(_QWORD *)(v8 + 32) = a1 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_4:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7);
  v13 = v7->SpecialApcDisable++ == -1;
  if ( v13 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(v10, v9, v11, v12);
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
  {
    if ( v8 )
      KeAbPostReleaseEx(a1);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    return 0LL;
  }
  else
  {
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    *a2 = 1;
    return 1LL;
  }
}
