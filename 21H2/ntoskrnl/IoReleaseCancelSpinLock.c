/*
 * XREFs of IoReleaseCancelSpinLock @ 0x140202A00
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x14035FB50 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F0A78 (FsRtlpRemoveAndCompleteRHIrp.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall IoReleaseCancelSpinLock(KIRQL Irql)
{
  volatile signed __int64 **v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v6; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v8; // r10
  _DWORD *v9; // r9
  int v10; // eax
  bool v11; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 112);
  v2 = Irql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v1, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(v1);
  v3 = (__int64)*v1;
  if ( *v1 )
    goto LABEL_8;
  if ( v1 != (volatile signed __int64 **)_InterlockedCompareExchange64(v1[1], 0LL, (signed __int64)v1) )
  {
    v3 = KxWaitForLockChainValid(v1);
LABEL_8:
    *v1 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v3 + 8), 1uLL);
  }
LABEL_4:
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v6 = SchedulerAssist[6] - 1;
      SchedulerAssist[6] = v6;
      if ( !v6 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        v8 = KeGetCurrentPrcb();
        v9 = v8->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v11 = (v10 & v9[5]) == 0;
        v9[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
  }
  __writecr8(v2);
}
