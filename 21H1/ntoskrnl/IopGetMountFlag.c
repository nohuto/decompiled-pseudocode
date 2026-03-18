/*
 * XREFs of IopGetMountFlag @ 0x140242060
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x1405F5260 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopGetMountFlag(__int64 a1)
{
  unsigned __int8 v2; // di
  unsigned __int8 CurrentIrql; // r14
  char *v4; // rbx
  volatile __int64 *v5; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v7; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  volatile signed __int64 **v10; // rbx
  __int64 v11; // rax
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // rax
  _DWORD *v20; // r9
  int v21; // edx
  bool v22; // zf
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
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
      v16 = v7[6];
      v7[6] = v16 + 1;
      if ( v16 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v4, v5);
  }
  else
  {
    v8 = (_QWORD *)_InterlockedExchange64(v5, (__int64)v4);
    if ( v8 )
      KxWaitForLockOwnerShip((__int64)v4, v8);
  }
  v9 = *(_QWORD *)(a1 + 56);
  if ( v9 && (*(_BYTE *)(v9 + 4) & 1) != 0 )
    v2 = 1;
  v10 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v10, retaddr);
    goto LABEL_12;
  }
  _m_prefetchw(v10);
  v11 = (__int64)*v10;
  if ( *v10 )
    goto LABEL_16;
  if ( v10 != (volatile signed __int64 **)_InterlockedCompareExchange64(v10[1], 0LL, (signed __int64)v10) )
  {
    v11 = KxWaitForLockChainValid(v10, (_BYTE)v8);
LABEL_16:
    *v10 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v11 + 8), 1uLL);
  }
LABEL_12:
  v12 = KeGetCurrentPrcb();
  v13 = v12->SchedulerAssist;
  if ( v13 )
  {
    if ( v12->NestingLevel <= 1u )
    {
      v17 = v13[6] - 1;
      v13[6] = v17;
      if ( !v17 )
        KiRemoveSystemWorkPriorityKick(v12);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v2;
}
