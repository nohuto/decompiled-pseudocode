/*
 * XREFs of IopIncrementDeviceObjectRefCount @ 0x14020DD20
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140203590 (IopCompleteUnloadOrDelete.c)
 *     PnpMarkDeviceForRemove @ 0x140393754 (PnpMarkDeviceForRemove.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405D9BF0 (IoCreateStreamFileObjectEx2.c)
 *     IopDeleteFile @ 0x1405FE150 (IopDeleteFile.c)
 *     IopMountVolume @ 0x1406CC9E8 (IopMountVolume.c)
 *     IoRegisterFileSystem @ 0x14077CAE0 (IoRegisterFileSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409AE234 (IopShutdownBaseFileSystems.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CBE58 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopIncrementDeviceObjectRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  char *v4; // rbx
  volatile __int64 *v5; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v7; // rdx
  int v8; // edi
  volatile signed __int64 **v9; // rbx
  __int64 v10; // rax
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a2 )
  {
    v8 = ++*(_DWORD *)(BugCheckParameter2 + 4);
    goto LABEL_13;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v5 = (volatile __int64 *)*((_QWORD *)v4 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = CurrentPrcb->SchedulerAssist;
  if ( v7 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v15 = v7[6];
      v7[6] = v15 + 1;
      if ( v15 == -1 )
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
  v8 = ++*(_DWORD *)(BugCheckParameter2 + 4);
  v9 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v9, retaddr);
  }
  else
  {
    _m_prefetchw(v9);
    v10 = (__int64)*v9;
    if ( !*v9 )
    {
      if ( v9 == (volatile signed __int64 **)_InterlockedCompareExchange64(v9[1], 0LL, (signed __int64)v9) )
        goto LABEL_10;
      v10 = KxWaitForLockChainValid(v9);
    }
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
      v16 = v12[6] - 1;
      v12[6] = v16;
      if ( !v16 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
  }
  __writecr8(CurrentIrql);
LABEL_13:
  if ( v8 <= 0 )
  {
    v22 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v22 )
    {
      IoAddTriageDumpDataBlock(v22, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  return (unsigned int)v8;
}
