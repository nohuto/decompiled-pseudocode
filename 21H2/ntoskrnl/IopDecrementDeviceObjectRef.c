/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x140353B90
 * Callers:
 *     IopCheckVpbMounted @ 0x140353920 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x14039551C (IopDecrementDeviceObjectHandleCount.c)
 *     IopMountVolume @ 0x1406E5720 (IopMountVolume.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140703760 (IopDeleteFile.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14071BF10 (IoCreateStreamFileObjectEx2.c)
 *     IopLoadFileSystemDriver @ 0x14077D1D4 (IopLoadFileSystemDriver.c)
 *     IopShutdownBaseFileSystems @ 0x1409AB134 (IopShutdownBaseFileSystems.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     IopCompleteUnloadOrDelete @ 0x140360FD0 (IopCompleteUnloadOrDelete.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC828 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(
        ULONG_PTR BugCheckParameter2,
        char a2,
        __int64 a3,
        _DWORD *SchedulerAssist)
{
  unsigned __int8 v6; // bp
  unsigned __int8 CurrentIrql; // r14
  char *v8; // rbx
  volatile __int64 *v9; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v11; // rdx
  _QWORD *v12; // rdx
  int v13; // eax
  volatile signed __int64 **v14; // rbx
  __int64 v15; // rax
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  bool v26; // zf
  void *retaddr; // [rsp+58h] [rbp+0h]

  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v8 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v9 = (volatile __int64 *)*((_QWORD *)v8 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = CurrentPrcb->SchedulerAssist;
  if ( v11 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v19 = v11[6];
      v11[6] = v19 + 1;
      if ( v19 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v8, v9);
  }
  else
  {
    v12 = (_QWORD *)_InterlockedExchange64(v9, (__int64)v8);
    if ( v12 )
      KxWaitForLockOwnerShip((__int64)v8, v12);
  }
  v13 = *(_DWORD *)(BugCheckParameter2 + 4) - 1;
  *(_DWORD *)(BugCheckParameter2 + 4) = v13;
  if ( v13 < 0 )
  {
    v20 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v20 )
    {
      IoAddTriageDumpDataBlock(v20, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      v13 = *(_DWORD *)(BugCheckParameter2 + 4);
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, v13);
  }
  if ( !v13 && (a2 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
    return (unsigned __int8)IopCompleteUnloadOrDelete(BugCheckParameter2);
  v14 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v14, retaddr);
  }
  else
  {
    _m_prefetchw(v14);
    v15 = (__int64)*v14;
    if ( !*v14 )
    {
      if ( v14 == (volatile signed __int64 **)_InterlockedCompareExchange64(v14[1], 0LL, (signed __int64)v14) )
        goto LABEL_11;
      v15 = KxWaitForLockChainValid((__int64 *)v14, (__int64)v12, a3, (__int64)SchedulerAssist);
    }
    *v14 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v15 + 8), 1uLL);
  }
LABEL_11:
  v16 = KeGetCurrentPrcb();
  v17 = v16->SchedulerAssist;
  if ( v17 )
  {
    if ( v16->NestingLevel <= 1u )
    {
      v21 = v17[6] - 1;
      v17[6] = v21;
      if ( !v21 )
        KiRemoveSystemWorkPriorityKick(v16);
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
  return v6;
}
