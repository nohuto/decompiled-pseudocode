/*
 * XREFs of IopDecrementVpbRefCount @ 0x140291F80
 * Callers:
 *     IopDeleteFile @ 0x140678F40 (IopDeleteFile.c)
 *     IoVerifyVolume @ 0x140890E20 (IoVerifyVolume.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementVpbRefCount(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebp
  volatile signed __int64 **v8; // rbx
  __int64 v9; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v11; // rdx
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r9
  int v18; // edx
  bool v19; // zf
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
    return (unsigned int)--*(_DWORD *)(a1 + 28);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KxAcquireQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  v7 = --*(_DWORD *)(a1 + 28);
  v8 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v8, retaddr);
  }
  else
  {
    _m_prefetchw(v8);
    v9 = (__int64)*v8;
    if ( !*v8 )
    {
      if ( v8 == (volatile signed __int64 **)_InterlockedCompareExchange64(v8[1], 0LL, (signed __int64)v8) )
        goto LABEL_6;
      v9 = KxWaitForLockChainValid((__int64 *)v8, v4, v5, v6);
    }
    *v8 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v9 + 8), 1uLL);
  }
LABEL_6:
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = CurrentPrcb->SchedulerAssist;
  if ( v11 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v14 = v11[6] - 1;
      v11[6] = v14;
      if ( !v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v7;
}
