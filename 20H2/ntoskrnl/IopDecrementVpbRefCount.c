/*
 * XREFs of IopDecrementVpbRefCount @ 0x14020DC10
 * Callers:
 *     IopDeleteFile @ 0x1405FE150 (IopDeleteFile.c)
 *     IoVerifyVolume @ 0x140896910 (IoVerifyVolume.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementVpbRefCount(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // di
  char *v4; // rcx
  unsigned int v5; // ebp
  volatile signed __int64 **v6; // rbx
  __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v9; // rdx
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  int v16; // edx
  bool v17; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
    return (unsigned int)--*(_DWORD *)(a1 + 28);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  KxAcquireQueuedSpinLock(v4, *((_QWORD *)v4 + 1));
  v5 = --*(_DWORD *)(a1 + 28);
  v6 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v6, retaddr);
  }
  else
  {
    _m_prefetchw(v6);
    v7 = (__int64)*v6;
    if ( !*v6 )
    {
      if ( v6 == (volatile signed __int64 **)_InterlockedCompareExchange64(v6[1], 0LL, (signed __int64)v6) )
        goto LABEL_6;
      v7 = KxWaitForLockChainValid(v6);
    }
    *v6 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v7 + 8), 1uLL);
  }
LABEL_6:
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = CurrentPrcb->SchedulerAssist;
  if ( v9 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v12 = v9[6] - 1;
      v9[6] = v12;
      if ( !v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        v15 = v14->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v5;
}
