/*
 * XREFs of IopCheckDeviceAndDriver @ 0x140290830
 * Callers:
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C9218 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopCheckDeviceAndDriver(__int64 a1, ULONG_PTR a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // bp
  char *v7; // rdi
  volatile __int64 *v8; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v10; // rdx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edi
  volatile signed __int64 **v15; // rbx
  __int64 v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // rax
  _DWORD *v25; // r9
  int v26; // edx
  bool v27; // zf
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v7 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v8 = (volatile __int64 *)*((_QWORD *)v7 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = CurrentPrcb->SchedulerAssist;
  if ( v10 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v20 = v10[6];
      v10[6] = v20 + 1;
      if ( v20 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v7, v8);
  }
  else
  {
    v11 = _InterlockedExchange64(v8, (__int64)v7);
    if ( v11 )
      KxWaitForLockOwnerShip(v7);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 312) + 32LL) & 0x1F) != 0 || (v12 = *(_DWORD *)(a2 + 48), (v12 & 0x80u) != 0) )
  {
    v14 = -1073741810;
  }
  else if ( (v12 & 8) == 0 || !*(_DWORD *)(a2 + 4) || *(_QWORD *)(a1 + 40) || (*(_DWORD *)(a1 + 84) & 0x400) != 0 )
  {
    v13 = *(_DWORD *)(a2 + 4) + 1;
    *(_DWORD *)(a2 + 4) = v13;
    if ( v13 <= 0 )
    {
      v21 = *(_QWORD *)(a2 + 8);
      if ( v21 )
      {
        IoAddTriageDumpDataBlock(v21, (PVOID)0x150);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        v13 = *(_DWORD *)(a2 + 4);
      }
      KeBugCheckEx(0x18u, 0LL, a2, 6uLL, v13);
    }
    v14 = 0;
  }
  else
  {
    v14 = -1073741790;
  }
  v15 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v15, retaddr);
    goto LABEL_14;
  }
  _m_prefetchw(v15);
  v16 = (__int64)*v15;
  if ( *v15 )
    goto LABEL_18;
  if ( v15 != (volatile signed __int64 **)_InterlockedCompareExchange64(v15[1], 0LL, (signed __int64)v15) )
  {
    v16 = KxWaitForLockChainValid((__int64 *)v15, v11, a3, (__int64)SchedulerAssist);
LABEL_18:
    *v15 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v16 + 8), 1uLL);
  }
LABEL_14:
  v17 = KeGetCurrentPrcb();
  v18 = v17->SchedulerAssist;
  if ( v18 )
  {
    if ( v17->NestingLevel <= 1u )
    {
      v22 = v18[6] - 1;
      v18[6] = v22;
      if ( !v22 )
        KiRemoveSystemWorkPriorityKick(v17);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v27 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v14;
}
