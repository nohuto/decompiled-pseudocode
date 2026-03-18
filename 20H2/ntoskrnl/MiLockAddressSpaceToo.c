/*
 * XREFs of MiLockAddressSpaceToo @ 0x14031B674
 * Callers:
 *     MiPrepareVadDelete @ 0x14062649C (MiPrepareVadDelete.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140202870 (KeAbPostReleaseEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     MiUnlockVad @ 0x1402306B0 (MiUnlockVad.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F74E8 (EtwTraceAutoBoostEntryExhaustion.c)
 */

char __fastcall MiLockAddressSpaceToo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v4; // rbp
  struct _KTHREAD *v5; // rbx
  unsigned __int8 AbEntrySummary; // cl
  __int64 v7; // rax
  ULONG_PTR v8; // rdi
  int SessionId; // eax
  $C774EFD68449142D8271B1EC1EB7FB26 *v10; // rax
  __int64 v11; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v15; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v15 = 0;
  v4 = a1 + 1224;
  v5 = KeGetCurrentThread();
  --v5->SpecialApcDisable;
  if ( ++v5->AbAllocationRegionCount != 1 )
  {
    v8 = 0LL;
    goto LABEL_10;
  }
  AbEntrySummary = v5->AbEntrySummary;
  if ( AbEntrySummary )
    goto LABEL_3;
  if ( v5->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v5->AbOrphanedEntrySummary;
    v5->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | v5->AbEntrySummary;
LABEL_3:
    _BitScanForward((unsigned int *)&v7, AbEntrySummary);
    v5->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    v8 = (ULONG_PTR)&v5->LockEntries[v7];
    goto LABEL_4;
  }
  v8 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
    goto LABEL_10;
  EtwTraceAutoBoostEntryExhaustion(v5, v4);
LABEL_4:
  if ( !v8 )
  {
LABEL_10:
    _interlockedbittestandset((volatile signed __int32 *)&v5->116 + 1, 0x10u);
    goto LABEL_11;
  }
  if ( v4 >= 0xFFFF800000000000uLL && byte_140C4F848[((v4 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v8 + 40) = SessionId;
  *(_QWORD *)(v8 + 32) = v4 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_11:
  --v5->AbAllocationRegionCount;
  LOBYTE(v10) = KiAbThreadRemoveBoosts((ULONG_PTR)v5, v4, &v15);
  if ( v5->SpecialApcDisable++ == -1 )
  {
    v10 = &v5->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v10->ApcState.ApcListHead[0].Flink != v10 )
      LOBYTE(v10) = KiCheckForKernelApcDelivery(v11);
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
  {
    if ( v8 )
      KeAbPostReleaseEx(v4, v8);
    MiUnlockVad((__int64)CurrentThread, a2);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    LOBYTE(v10) = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  else
  {
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    LOBYTE(CurrentThread[1].Queue) |= 1u;
  }
  return (char)v10;
}
