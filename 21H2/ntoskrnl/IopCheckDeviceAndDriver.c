/*
 * XREFs of IopCheckDeviceAndDriver @ 0x1402A7720
 * Callers:
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopCheckDeviceAndDriver(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // bp
  char *v5; // rdi
  volatile __int64 *v6; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v8; // rdx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  volatile signed __int64 **v12; // rbx
  __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // rax
  _DWORD *v23; // r9
  int v24; // edx
  bool v25; // zf
  void *retaddr; // [rsp+48h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v5 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v6 = (volatile __int64 *)*((_QWORD *)v5 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = CurrentPrcb->SchedulerAssist;
  if ( v8 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v18 = v8[6];
      v8[6] = v18 + 1;
      if ( v18 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v5, v6);
  }
  else if ( _InterlockedExchange64(v6, (__int64)v5) )
  {
    KxWaitForLockOwnerShip(v5);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 312) + 32LL) & 0x1F) != 0 || (v9 = *(_DWORD *)(a2 + 48), (v9 & 0x80u) != 0) )
  {
    v11 = -1073741810;
  }
  else if ( (v9 & 8) == 0 || !*(_DWORD *)(a2 + 4) || *(_QWORD *)(a1 + 40) || (*(_DWORD *)(a1 + 84) & 0x400) != 0 )
  {
    v10 = *(_DWORD *)(a2 + 4) + 1;
    *(_DWORD *)(a2 + 4) = v10;
    if ( v10 <= 0 )
    {
      v19 = *(_QWORD *)(a2 + 8);
      if ( v19 )
      {
        IoAddTriageDumpDataBlock(v19, (PVOID)0x150);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        v10 = *(_DWORD *)(a2 + 4);
      }
      KeBugCheckEx(0x18u, 0LL, a2, 6uLL, v10);
    }
    v11 = 0;
  }
  else
  {
    v11 = -1073741790;
  }
  v12 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v12, retaddr);
    goto LABEL_14;
  }
  _m_prefetchw(v12);
  v13 = (__int64)*v12;
  if ( *v12 )
    goto LABEL_21;
  if ( v12 != (volatile signed __int64 **)_InterlockedCompareExchange64(v12[1], 0LL, (signed __int64)v12) )
  {
    v13 = KxWaitForLockChainValid((__int64 *)v12);
LABEL_21:
    *v12 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v13 + 8), 1uLL);
  }
LABEL_14:
  v14 = KeGetCurrentPrcb();
  v15 = v14->SchedulerAssist;
  if ( v15 )
  {
    if ( v14->NestingLevel <= 1u )
    {
      v20 = v15[6] - 1;
      v15[6] = v20;
      if ( !v20 )
        KiRemoveSystemWorkPriorityKick(v14);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v25 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v11;
}
