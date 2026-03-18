/*
 * XREFs of ExTryAcquirePushLockExclusiveEx @ 0x140208770
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x140202870 (KeAbPostReleaseEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F74E8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquirePushLockExclusiveEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  bool v5; // zf
  __int64 v7; // rax
  char v8; // cl
  int SessionId; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( ++CurrentThread->AbAllocationRegionCount != 1 )
      goto LABEL_4;
    LOBYTE(v7) = CurrentThread->AbEntrySummary;
    if ( !(_BYTE)v7 )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
LABEL_14:
        if ( v2 )
        {
          if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
            && byte_140C4F848[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
          {
            SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
          }
          else
          {
            SessionId = -1;
          }
          *(_DWORD *)(v2 + 40) = SessionId;
          *(_QWORD *)(v2 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_5:
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
          v5 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v5
            && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          goto LABEL_8;
        }
LABEL_4:
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
        goto LABEL_5;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      LOBYTE(v7) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
    }
    v8 = v7;
    _BitScanForward((unsigned int *)&v7, (unsigned __int8)v7);
    CurrentThread->AbEntrySummary = v8 & ~(1 << v7);
    v2 = (ULONG_PTR)&CurrentThread->LockEntries[v7];
    goto LABEL_14;
  }
LABEL_8:
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
  {
    if ( v2 )
      KeAbPostReleaseEx(BugCheckParameter2, v2);
    return 0;
  }
  else
  {
    if ( v2 )
      *(_BYTE *)(v2 + 26) |= 1u;
    return 1;
  }
}
