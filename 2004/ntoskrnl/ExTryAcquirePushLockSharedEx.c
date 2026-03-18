/*
 * XREFs of ExTryAcquirePushLockSharedEx @ 0x140323D90
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeAbPostReleaseEx @ 0x140272DF0 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryAcquirePushLockShared @ 0x140323F40 (ExfTryAcquirePushLockShared.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquirePushLockSharedEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // rax
  char v6; // cl
  int SessionId; // eax
  __int64 v8; // rcx
  bool v9; // zf
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    v12 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( ++CurrentThread->AbAllocationRegionCount != 1 )
      goto LABEL_11;
    LOBYTE(v5) = CurrentThread->AbEntrySummary;
    if ( !(_BYTE)v5 )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
LABEL_6:
        if ( v2 )
        {
          if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
            && byte_140C4F7C8[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
          {
            SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
          }
          else
          {
            SessionId = -1;
          }
          *(_DWORD *)(v2 + 40) = SessionId;
          *(_QWORD *)(v2 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_12:
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v12);
          v9 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v9
            && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v8);
          }
          goto LABEL_15;
        }
LABEL_11:
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
        goto LABEL_12;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      LOBYTE(v5) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
    }
    v6 = v5;
    _BitScanForward((unsigned int *)&v5, (unsigned __int8)v5);
    CurrentThread->AbEntrySummary = v6 & ~(1 << v5);
    v2 = (ULONG_PTR)&CurrentThread->LockEntries[v5];
    goto LABEL_6;
  }
LABEL_15:
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL)
    || (unsigned __int8)ExfTryAcquirePushLockShared(BugCheckParameter2) )
  {
    if ( v2 )
      *(_BYTE *)(v2 + 26) |= 1u;
    return 1;
  }
  else
  {
    if ( v2 )
      KeAbPostReleaseEx(BugCheckParameter2, v2);
    return 0;
  }
}
