/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x140254800
 * Callers:
 *     IopCheckVpbMounted @ 0x140254590 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x14039203C (IopDecrementDeviceObjectHandleCount.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140600E60 (IopDeleteFile.c)
 *     IopMountVolume @ 0x140701D54 (IopMountVolume.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140702350 (IoCreateStreamFileObjectEx2.c)
 *     IopLoadFileSystemDriver @ 0x140768A04 (IopLoadFileSystemDriver.c)
 *     IopShutdownBaseFileSystems @ 0x1409A7464 (IopShutdownBaseFileSystems.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     IopCompleteUnloadOrDelete @ 0x14033FAD0 (IopCompleteUnloadOrDelete.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C8408 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 v4; // bp
  unsigned __int8 CurrentIrql; // r14
  char *v6; // rbx
  volatile __int64 *v7; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v9; // rdx
  _QWORD *v10; // rdx
  int v11; // eax
  volatile signed __int64 **v12; // rbx
  __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  bool v25; // zf
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v6 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v7 = (volatile __int64 *)*((_QWORD *)v6 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = CurrentPrcb->SchedulerAssist;
  if ( v9 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v18 = v9[6];
      v9[6] = v18 + 1;
      if ( v18 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v6, v7);
  }
  else
  {
    v10 = (_QWORD *)_InterlockedExchange64(v7, (__int64)v6);
    if ( v10 )
      KxWaitForLockOwnerShip((__int64)v6, v10);
  }
  v11 = *(_DWORD *)(BugCheckParameter2 + 4) - 1;
  *(_DWORD *)(BugCheckParameter2 + 4) = v11;
  if ( v11 < 0 )
  {
    v19 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v19 )
    {
      IoAddTriageDumpDataBlock(v19, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      v11 = *(_DWORD *)(BugCheckParameter2 + 4);
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, v11);
  }
  if ( !v11 && (a2 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
    return (unsigned __int8)IopCompleteUnloadOrDelete(BugCheckParameter2);
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
        goto LABEL_11;
      v13 = KxWaitForLockChainValid(v12, (_BYTE)v10);
    }
    *v12 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v13 + 8), 1uLL);
  }
LABEL_11:
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
  return v4;
}
