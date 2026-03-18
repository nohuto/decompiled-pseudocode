/*
 * XREFs of IoReleaseCancelSpinLock @ 0x1402DABB0
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall IoReleaseCancelSpinLock(KIRQL Irql)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  volatile signed __int64 **v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v9; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 112);
  v5 = Irql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v4, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(v4);
  v6 = (__int64)*v4;
  if ( *v4 )
    goto LABEL_8;
  if ( v4 != (volatile signed __int64 **)_InterlockedCompareExchange64(v4[1], 0LL, (signed __int64)v4) )
  {
    v6 = KxWaitForLockChainValid((__int64 *)v4, v1, v2, v3);
LABEL_8:
    *v4 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v6 + 8), 1uLL);
  }
LABEL_4:
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v9 = SchedulerAssist[6] - 1;
      SchedulerAssist[6] = v9;
      if ( !v9 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
  }
  __writecr8(v5);
}
