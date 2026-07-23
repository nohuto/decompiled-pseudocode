/*
 * XREFs of ExpBoostIoAfterAcquire @ 0x140204490
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1403294A0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1405B4FA0 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIoQoS @ 0x1402045F8 (PsBoostThreadIoQoS.c)
 *     ExGetExtensionTable @ 0x14021C858 (ExGetExtensionTable.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     PsGetBaseIoPriorityThread @ 0x1402D0980 (PsGetBaseIoPriorityThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     PsBoostThreadIoEx @ 0x140358550 (PsBoostThreadIoEx.c)
 *     ExpFindCurrentThread @ 0x1403587A0 (ExpFindCurrentThread.c)
 *     IoBoostThreadIoPriority @ 0x140363380 (IoBoostThreadIoPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void __fastcall ExpBoostIoAfterAcquire(__int64 a1, __int64 a2, int a3)
{
  __int16 v3; // r9
  int v7; // edx
  int v8; // ebx
  __int64 CurrentThread; // rax
  __int64 v10; // rsi
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
    if ( (v3 & 4) != 0 && (int)PsGetBaseIoPriorityThread(a2, 0LL) < 2 )
      v7 = 4;
    v8 = v7 | 2;
    if ( (v3 & 2) == 0 )
      v8 = v7;
    if ( v8 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
      CurrentThread = ExpFindCurrentThread(a1, a2, (unsigned int)&LockHandle, 0, 1, a3);
      v10 = CurrentThread;
      if ( (v8 & 4) != 0 )
      {
        if ( (*(_DWORD *)(CurrentThread + 8) & 1) != 0 )
        {
          v8 &= ~4u;
        }
        else
        {
          PsBoostThreadIoEx(a2, 0LL, 0LL, 0LL);
          *(_DWORD *)(v10 + 8) |= 1u;
        }
      }
      if ( (v8 & 2) != 0 )
      {
        if ( (*(_DWORD *)(v10 + 8) & 4) != 0 )
        {
          v8 &= ~2u;
        }
        else
        {
          PsBoostThreadIoQoS(a2, 0LL);
          *(_DWORD *)(v10 + 8) |= 4u;
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
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
          }
        }
      }
    }
  }
}
