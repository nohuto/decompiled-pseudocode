/*
 * XREFs of IopCheckDeviceAndDriver @ 0x14035E090
 * Callers:
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopCheckDeviceAndDriver(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // bp
  char *v5; // rdi
  volatile __int64 *v6; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v8; // rdx
  _QWORD *v9; // rdx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  volatile signed __int64 **v13; // rbx
  __int64 v14; // rax
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // rax
  _DWORD *v24; // r9
  int v25; // edx
  bool v26; // zf
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
      v19 = v8[6];
      v8[6] = v19 + 1;
      if ( v19 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v5, v6);
  }
  else
  {
    v9 = (_QWORD *)_InterlockedExchange64(v6, (__int64)v5);
    if ( v9 )
      KxWaitForLockOwnerShip((__int64)v5, v9);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 312) + 32LL) & 0x1F) != 0 || (v10 = *(_DWORD *)(a2 + 48), (v10 & 0x80u) != 0) )
  {
    v12 = -1073741810;
  }
  else if ( (v10 & 8) == 0 || !*(_DWORD *)(a2 + 4) || *(_QWORD *)(a1 + 40) || (*(_DWORD *)(a1 + 84) & 0x400) != 0 )
  {
    v11 = *(_DWORD *)(a2 + 4) + 1;
    *(_DWORD *)(a2 + 4) = v11;
    if ( v11 <= 0 )
    {
      v20 = *(_QWORD *)(a2 + 8);
      if ( v20 )
      {
        IoAddTriageDumpDataBlock(v20, (PVOID)0x150);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        v11 = *(_DWORD *)(a2 + 4);
      }
      KeBugCheckEx(0x18u, 0LL, a2, 6uLL, v11);
    }
    v12 = 0;
  }
  else
  {
    v12 = -1073741790;
  }
  v13 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v13, retaddr);
    goto LABEL_14;
  }
  _m_prefetchw(v13);
  v14 = (__int64)*v13;
  if ( *v13 )
    goto LABEL_18;
  if ( v13 != (volatile signed __int64 **)_InterlockedCompareExchange64(v13[1], 0LL, (signed __int64)v13) )
  {
    v14 = KxWaitForLockChainValid((__int64 *)v13);
LABEL_18:
    *v13 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v14 + 8), 1uLL);
  }
LABEL_14:
  v15 = KeGetCurrentPrcb();
  v16 = v15->SchedulerAssist;
  if ( v16 )
  {
    if ( v15->NestingLevel <= 1u )
    {
      v21 = v16[6] - 1;
      v16[6] = v21;
      if ( !v21 )
        KiRemoveSystemWorkPriorityKick(v15);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v26 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v12;
}
