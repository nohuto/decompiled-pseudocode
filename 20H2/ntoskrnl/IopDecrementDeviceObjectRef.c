/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x14020D560
 * Callers:
 *     IopCheckVpbMounted @ 0x14020D990 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1403950AC (IopDecrementDeviceObjectHandleCount.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405D9BF0 (IoCreateStreamFileObjectEx2.c)
 *     IopDeleteFile @ 0x1405FE150 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     IopMountVolume @ 0x1406CC9E8 (IopMountVolume.c)
 *     IopLoadFileSystemDriver @ 0x1407793F4 (IopLoadFileSystemDriver.c)
 *     IopShutdownBaseFileSystems @ 0x1409AE234 (IopShutdownBaseFileSystems.c)
 * Callees:
 *     IopCompleteUnloadOrDelete @ 0x140203590 (IopCompleteUnloadOrDelete.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CBE58 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(ULONG_PTR BugCheckParameter2, char a2, unsigned __int8 a3)
{
  unsigned __int8 v6; // bp
  KIRQL CurrentIrql; // r14
  char *v8; // rbx
  volatile __int64 *v9; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v11; // rdx
  int v12; // eax
  volatile signed __int64 **v13; // rbx
  __int64 v14; // rax
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  _DWORD *SchedulerAssist; // r9
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
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
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
  else if ( _InterlockedExchange64(v9, (__int64)v8) )
  {
    KxWaitForLockOwnerShip(v8);
  }
  v12 = *(_DWORD *)(BugCheckParameter2 + 4) - 1;
  *(_DWORD *)(BugCheckParameter2 + 4) = v12;
  if ( v12 < 0 )
  {
    v20 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v20 )
    {
      IoAddTriageDumpDataBlock(v20, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      v12 = *(_DWORD *)(BugCheckParameter2 + 4);
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, v12);
  }
  if ( !v12 && (a2 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
    return (unsigned __int8)IopCompleteUnloadOrDelete(BugCheckParameter2, a3, CurrentIrql);
  v13 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v13, retaddr);
  }
  else
  {
    _m_prefetchw(v13);
    v14 = (__int64)*v13;
    if ( !*v13 )
    {
      if ( v13 == (volatile signed __int64 **)_InterlockedCompareExchange64(v13[1], 0LL, (signed __int64)v13) )
        goto LABEL_11;
      v14 = KxWaitForLockChainValid(v13);
    }
    *v13 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v14 + 8), 1uLL);
  }
LABEL_11:
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
  return v6;
}
