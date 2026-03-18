/*
 * XREFs of ExpBoostIoAfterAcquire @ 0x140279C0C
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14022CBA0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1405AF810 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIoEx @ 0x14020A940 (PsBoostThreadIoEx.c)
 *     PsGetBaseIoPriorityThread @ 0x140222220 (PsGetBaseIoPriorityThread.c)
 *     ExpFindCurrentThread @ 0x14022A0A0 (ExpFindCurrentThread.c)
 *     PsBoostThreadIoQoS @ 0x140279D74 (PsBoostThreadIoQoS.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     IoBoostThreadIoPriority @ 0x1402D668C (IoBoostThreadIoPriority.c)
 *     ExGetExtensionTable @ 0x14032FE68 (ExGetExtensionTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

void __fastcall ExpBoostIoAfterAcquire(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 v3; // r9
  int v7; // edx
  int v8; // ebx
  _QWORD *CurrentThread; // rax
  _QWORD *v10; // rsi
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  __int64 ExtensionTable; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_WORD *)(a1 + 26);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (v3 & 8) == 0 )
  {
    v7 = 0;
    if ( (v3 & 4) != 0 && (int)PsGetBaseIoPriorityThread(a2) < 2 )
      v7 = 4;
    v8 = v7 | 2;
    if ( (v3 & 2) == 0 )
      v8 = v7;
    if ( v8 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
      CurrentThread = ExpFindCurrentThread(a1, a2, (__int64)&LockHandle, 0, 1, a3);
      v10 = CurrentThread;
      if ( (v8 & 4) != 0 )
      {
        if ( (CurrentThread[1] & 1) != 0 )
        {
          v8 &= ~4u;
        }
        else
        {
          PsBoostThreadIoEx(a2, 0, 0, 0LL);
          *((_DWORD *)v10 + 2) |= 1u;
        }
      }
      if ( (v8 & 2) != 0 )
      {
        if ( (v10[1] & 4) != 0 )
        {
          v8 &= ~2u;
        }
        else
        {
          PsBoostThreadIoQoS(a2, 0LL);
          *((_DWORD *)v10 + 2) |= 4u;
        }
      }
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
            v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v16 = (v15 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v15;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( v8 )
      {
        if ( (v8 & 4) != 0 )
          IoBoostThreadIoPriority(a2, 2LL);
        if ( (v8 & 2) != 0 && *(_DWORD *)(a2 + 1368) )
        {
          ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
          if ( ExtensionTable )
          {
            (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(a2);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
          }
        }
      }
    }
  }
}
