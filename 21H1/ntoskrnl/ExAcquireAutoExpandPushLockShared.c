/*
 * XREFs of ExAcquireAutoExpandPushLockShared @ 0x1403597C0
 * Callers:
 *     MiLockAwePagesShared @ 0x1405474BC (MiLockAwePagesShared.c)
 *     MiLockAweVadsShared @ 0x140547518 (MiLockAweVadsShared.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x14035A060 (ExfAcquirePushLockSharedEx.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x14038D610 (ExpAcquireFannedOutPushLockShared.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExAcquireAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rsi
  int v4; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rax
  char v7; // cl
  int SessionId; // eax
  __int64 v9; // rcx
  bool v10; // zf
  int v11; // eax
  ULONG_PTR v12; // rbx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v4 = BugCheckParameter1 & 2;
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    v15 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( ++CurrentThread->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
    LOBYTE(v6) = CurrentThread->AbEntrySummary;
    if ( !(_BYTE)v6 )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
        goto LABEL_27;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      LOBYTE(v6) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
    }
    v7 = v6;
    _BitScanForward((unsigned int *)&v6, (unsigned __int8)v6);
    CurrentThread->AbEntrySummary = v7 & ~(1 << v6);
    v2 = (__int64)&CurrentThread->LockEntries[v6];
    if ( v2 )
    {
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_140C4F908[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      {
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      }
      else
      {
        SessionId = -1;
      }
      *(_DWORD *)(v2 + 40) = SessionId;
      *(_QWORD *)(v2 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_10:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v15);
      v10 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v10
        && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v9);
      }
      goto LABEL_13;
    }
LABEL_27:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_10;
  }
LABEL_13:
  v11 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v11 & 1) != 0 )
  {
    v12 = ExpAcquireFannedOutPushLockShared(v11 & 0xFFFFFFF8, v2, BugCheckParameter2);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(BugCheckParameter2, v2, BugCheckParameter2);
    v12 = BugCheckParameter2 | 1;
  }
  if ( !v4 )
    v12 |= 2uLL;
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  return v12;
}
