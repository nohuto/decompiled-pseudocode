/*
 * XREFs of MiWaitForFreePage @ 0x140556D5C
 * Callers:
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MiWalkPageTablesRecursively @ 0x14029DD80 (MiWalkPageTablesRecursively.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiAllocateKernelStackPages @ 0x1402B7180 (MiAllocateKernelStackPages.c)
 *     MiGetSystemPage @ 0x14031CD8C (MiGetSystemPage.c)
 *     MiMakeOutswappedPageResident @ 0x1405265F0 (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x140534A44 (MiSwitchToTransition.c)
 *     MiSplitDirectMapPage @ 0x14053CC6C (MiSplitDirectMapPage.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x140554C98 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x1405555C4 (MiHandleForkTransitionPte.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556A58 (MiCopyOnWriteCheckConditions.c)
 *     MiAllocateDriverPage @ 0x1406A9548 (MiAllocateDriverPage.c)
 *     MiAllocateTopLevelPage @ 0x1406ABFD4 (MiAllocateTopLevelPage.c)
 *     MmAllocateIndependentPagesEx @ 0x14074F63C (MmAllocateIndependentPagesEx.c)
 *     MiFillPerSessionProtos @ 0x1408D49E0 (MiFillPerSessionProtos.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     MiSufficientAvailablePages @ 0x1402488D0 (MiSufficientAvailablePages.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiObtainFreePages @ 0x1405360B4 (MiObtainFreePages.c)
 *     MiNoPagesLastChance @ 0x14054B328 (MiNoPagesLastChance.c)
 */

__int64 __fastcall MiWaitForFreePage(_QWORD *a1)
{
  KSPIN_LOCK *v2; // r13
  int v3; // edx
  unsigned __int64 v4; // r12
  struct _KEVENT *v5; // rbx
  volatile LONG Lock; // r15d
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  __int64 result; // rax
  unsigned __int64 v14; // rbx
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-69h] BYREF
  _QWORD v18[14]; // [rsp+58h] [rbp-49h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = a1 + 616;
  v3 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2;
  v4 = v3 != 0 ? 34 : 160;
  v5 = (struct _KEVENT *)((char *)a1 + (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 4968);
  KeAcquireInStackQueuedSpinLock(a1 + 616, &LockHandle);
  Lock = v5[1].Header.Lock;
  while ( !(unsigned int)MiSufficientAvailablePages((__int64)a1, v4) )
  {
    KeResetEvent(v5);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    MiObtainFreePages((__int64)a1);
    if ( a1[54] )
    {
      memset(v18, 0, 0x68uLL);
      v18[1] = a1[22];
      VslpEnterIumSecureMode(2u, 253, 0, (__int64)v18);
    }
    if ( KeWaitForSingleObject(v5, WrFreePage, 0, 0, (PLARGE_INTEGER)&MiNoPagesTimeout) == 258
      && Lock == v5[1].Header.LockNV )
    {
      MiNoPagesLastChance((__int64)a1, v4);
    }
    Lock = v5[1].Header.Lock;
    KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  v14 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v12 = ((unsigned int)result & v16[5]) == 0;
        v16[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
    }
  }
  __writecr8(v14);
  return result;
}
