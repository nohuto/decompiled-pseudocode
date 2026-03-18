/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x1402A7190
 * Callers:
 *     IopCheckVpbMounted @ 0x1402A7910 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1403A15FC (IopDecrementDeviceObjectHandleCount.c)
 *     IopMountVolume @ 0x14068E624 (IopMountVolume.c)
 *     IopDeleteFile @ 0x14072B630 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14074CD70 (IoCreateStreamFileObjectEx2.c)
 *     IopLoadFileSystemDriver @ 0x14080C5C8 (IopLoadFileSystemDriver.c)
 *     IopShutdownBaseFileSystems @ 0x140A65554 (IopShutdownBaseFileSystems.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     IopCompleteUnloadOrDelete @ 0x1402D5CA8 (IopCompleteUnloadOrDelete.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int8 v4; // r14
  unsigned __int8 CurrentIrql; // bp
  char *v6; // rbx
  volatile __int64 *v7; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v9; // rdx
  int v10; // eax
  volatile signed __int64 **v11; // rbx
  __int64 v12; // rax
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  void *retaddr; // [rsp+58h] [rbp+0h]

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
  else if ( _InterlockedExchange64(v7, (__int64)v6) )
  {
    KxWaitForLockOwnerShip(v6);
  }
  v10 = *(_DWORD *)(BugCheckParameter2 + 4) - 1;
  *(_DWORD *)(BugCheckParameter2 + 4) = v10;
  if ( v10 < 0 )
  {
    v18 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v18 )
    {
      IoAddTriageDumpDataBlock(v18, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      v10 = *(_DWORD *)(BugCheckParameter2 + 4);
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, v10);
  }
  if ( !v10 && (a2 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
    return (unsigned __int8)IopCompleteUnloadOrDelete(BugCheckParameter2);
  v11 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v11, retaddr);
  }
  else
  {
    _m_prefetchw(v11);
    v12 = (__int64)*v11;
    if ( !*v11 )
    {
      if ( v11 == (volatile signed __int64 **)_InterlockedCompareExchange64(v11[1], 0LL, (signed __int64)v11) )
        goto LABEL_11;
      v12 = KxWaitForLockChainValid((__int64 *)v11);
    }
    *v11 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v12 + 8), 1uLL);
  }
LABEL_11:
  v13 = KeGetCurrentPrcb();
  v14 = v13->SchedulerAssist;
  if ( v14 )
  {
    if ( v13->NestingLevel <= 1u )
    {
      v19 = v14[6] - 1;
      v14[6] = v19;
      if ( !v19 )
        KiRemoveSystemWorkPriorityKick(v13);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v24 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v4;
}
