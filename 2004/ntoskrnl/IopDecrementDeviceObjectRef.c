/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x140291080
 * Callers:
 *     IopCheckVpbMounted @ 0x140290E10 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x140392BEC (IopDecrementDeviceObjectHandleCount.c)
 *     IopMountVolume @ 0x140634C68 (IopMountVolume.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140635260 (IoCreateStreamFileObjectEx2.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140678F40 (IopDeleteFile.c)
 *     IopLoadFileSystemDriver @ 0x14076ADE4 (IopLoadFileSystemDriver.c)
 *     IopShutdownBaseFileSystems @ 0x1409A82C4 (IopShutdownBaseFileSystems.c)
 * Callees:
 *     IopCompleteUnloadOrDelete @ 0x14026F940 (IopCompleteUnloadOrDelete.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C9218 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(
        ULONG_PTR BugCheckParameter2,
        char a2,
        __int64 a3,
        _DWORD *SchedulerAssist)
{
  unsigned __int8 v4; // r12
  unsigned __int8 v7; // bp
  KIRQL CurrentIrql; // r14
  char *v9; // rbx
  volatile __int64 *v10; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v12; // rdx
  __int64 v13; // rdx
  int v14; // eax
  volatile signed __int64 **v15; // rbx
  __int64 v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  bool v27; // zf
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v4 = a3;
  v7 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v9 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v10 = (volatile __int64 *)*((_QWORD *)v9 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = CurrentPrcb->SchedulerAssist;
  if ( v12 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v20 = v12[6];
      v12[6] = v20 + 1;
      if ( v20 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v9, v10);
  }
  else
  {
    v13 = _InterlockedExchange64(v10, (__int64)v9);
    if ( v13 )
      KxWaitForLockOwnerShip(v9);
  }
  v14 = *(_DWORD *)(BugCheckParameter2 + 4) - 1;
  *(_DWORD *)(BugCheckParameter2 + 4) = v14;
  if ( v14 < 0 )
  {
    v21 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v21 )
    {
      IoAddTriageDumpDataBlock(v21, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      v14 = *(_DWORD *)(BugCheckParameter2 + 4);
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, v14);
  }
  if ( !v14 && (a2 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
    return (unsigned __int8)IopCompleteUnloadOrDelete(BugCheckParameter2, v4, CurrentIrql);
  v15 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v15, retaddr);
  }
  else
  {
    _m_prefetchw(v15);
    v16 = (__int64)*v15;
    if ( !*v15 )
    {
      if ( v15 == (volatile signed __int64 **)_InterlockedCompareExchange64(v15[1], 0LL, (signed __int64)v15) )
        goto LABEL_11;
      v16 = KxWaitForLockChainValid((__int64 *)v15, v13, a3, (__int64)SchedulerAssist);
    }
    *v15 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v16 + 8), 1uLL);
  }
LABEL_11:
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
  return v7;
}
