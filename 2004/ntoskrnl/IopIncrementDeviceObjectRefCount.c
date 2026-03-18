/*
 * XREFs of IopIncrementDeviceObjectRefCount @ 0x140292090
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14026F940 (IopCompleteUnloadOrDelete.c)
 *     PnpMarkDeviceForRemove @ 0x140391294 (PnpMarkDeviceForRemove.c)
 *     IopMountVolume @ 0x140634C68 (IopMountVolume.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140635260 (IoCreateStreamFileObjectEx2.c)
 *     IopDeleteFile @ 0x140678F40 (IopDeleteFile.c)
 *     IoRegisterFileSystem @ 0x14076E0B0 (IoRegisterFileSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409A82C4 (IopShutdownBaseFileSystems.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C9218 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopIncrementDeviceObjectRefCount(
        ULONG_PTR BugCheckParameter2,
        char a2,
        __int64 a3,
        _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // bp
  char *v6; // rbx
  volatile __int64 *v7; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v9; // rdx
  __int64 v10; // rdx
  int v11; // edi
  volatile signed __int64 **v12; // rbx
  __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  int v17; // eax
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  __int64 v24; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a2 )
  {
    v11 = ++*(_DWORD *)(BugCheckParameter2 + 4);
    goto LABEL_13;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v6 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v7 = (volatile __int64 *)*((_QWORD *)v6 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = CurrentPrcb->SchedulerAssist;
  if ( v9 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v17 = v9[6];
      v9[6] = v17 + 1;
      if ( v17 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v6, v7);
  }
  else
  {
    v10 = _InterlockedExchange64(v7, (__int64)v6);
    if ( v10 )
      KxWaitForLockOwnerShip(v6);
  }
  v11 = ++*(_DWORD *)(BugCheckParameter2 + 4);
  v12 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v12, retaddr);
  }
  else
  {
    _m_prefetchw(v12);
    v13 = (__int64)*v12;
    if ( !*v12 )
    {
      if ( v12 == (volatile signed __int64 **)_InterlockedCompareExchange64(v12[1], 0LL, (signed __int64)v12) )
        goto LABEL_10;
      v13 = KxWaitForLockChainValid((__int64 *)v12, v10, a3, (__int64)SchedulerAssist);
    }
    *v12 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v13 + 8), 1uLL);
  }
LABEL_10:
  v14 = KeGetCurrentPrcb();
  v15 = v14->SchedulerAssist;
  if ( v15 )
  {
    if ( v14->NestingLevel <= 1u )
    {
      v18 = v15[6] - 1;
      v15[6] = v18;
      if ( !v18 )
        KiRemoveSystemWorkPriorityKick(v14);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  __writecr8(CurrentIrql);
LABEL_13:
  if ( v11 <= 0 )
  {
    v24 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v24 )
    {
      IoAddTriageDumpDataBlock(v24, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  return (unsigned int)v11;
}
