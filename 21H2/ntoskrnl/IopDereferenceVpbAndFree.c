/*
 * XREFs of IopDereferenceVpbAndFree @ 0x1402A4C30
 * Callers:
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall IopDereferenceVpbAndFree(__int64 a1)
{
  void *v2; // r14
  unsigned __int8 CurrentIrql; // bp
  char *v4; // rbx
  volatile __int64 *v5; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v7; // rdx
  bool v8; // zf
  volatile signed __int64 **v9; // rbx
  __int64 v10; // rax
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  int v15; // eax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  v5 = (volatile __int64 *)*((_QWORD *)v4 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = CurrentPrcb->SchedulerAssist;
  if ( v7 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v14 = v7[6];
      v7[6] = v14 + 1;
      if ( v14 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v4, v5);
  }
  else if ( _InterlockedExchange64(v5, (__int64)v4) )
  {
    KxWaitForLockOwnerShip(v4);
  }
  v8 = (*(_DWORD *)(a1 + 28))-- == 1;
  if ( v8 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) != a1 && (*(_BYTE *)(a1 + 4) & 4) == 0 )
    v2 = (void *)a1;
  v9 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v9, retaddr);
    goto LABEL_10;
  }
  _m_prefetchw(v9);
  v10 = (__int64)*v9;
  if ( *v9 )
    goto LABEL_18;
  if ( v9 != (volatile signed __int64 **)_InterlockedCompareExchange64(v9[1], 0LL, (signed __int64)v9) )
  {
    v10 = KxWaitForLockChainValid((__int64 *)v9);
LABEL_18:
    *v9 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v10 + 8), 1uLL);
  }
LABEL_10:
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v15 = v12[6] - 1;
      v12[6] = v15;
      if ( !v15 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v8 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
