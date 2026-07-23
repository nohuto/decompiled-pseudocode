/*
 * XREFs of IopDecrementDeviceObjectRef @ 0x14035E8E0
 * Callers:
 *     IopCheckVpbMounted @ 0x14035E670 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x14039566C (IopDecrementDeviceObjectHandleCount.c)
 *     IopMountVolume @ 0x1405DB490 (IopMountVolume.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406C9360 (IoCreateStreamFileObjectEx2.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     IopDeleteFile @ 0x14071AB40 (IopDeleteFile.c)
 *     IopLoadFileSystemDriver @ 0x14077D394 (IopLoadFileSystemDriver.c)
 *     IopShutdownBaseFileSystems @ 0x1409AC064 (IopShutdownBaseFileSystems.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     IopCompleteUnloadOrDelete @ 0x1402A6030 (IopCompleteUnloadOrDelete.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRef(ULONG_PTR BugCheckParameter2, char a2, unsigned __int8 a3)
{
  unsigned __int8 v6; // bp
  KIRQL CurrentIrql; // r14
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
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  bool v27; // zf
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
      v20 = v11[6];
      v11[6] = v20 + 1;
      if ( v20 == -1 )
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
    v21 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v21 )
    {
      IoAddTriageDumpDataBlock(v21, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      v13 = *(_DWORD *)(BugCheckParameter2 + 4);
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, v13);
  }
  if ( !v13 && (a2 || (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL) & 7) != 0) )
    return (unsigned __int8)IopCompleteUnloadOrDelete(BugCheckParameter2, a3, CurrentIrql);
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
      v15 = KxWaitForLockChainValid((__int64 *)v14);
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
      v22 = v17[6] - 1;
      v17[6] = v22;
      if ( !v22 )
        KiRemoveSystemWorkPriorityKick(v16);
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
  return v6;
}
