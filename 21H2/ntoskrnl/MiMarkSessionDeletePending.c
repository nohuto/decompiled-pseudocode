/*
 * XREFs of MiMarkSessionDeletePending @ 0x140389F00
 * Callers:
 *     MiDereferenceSessionFinal @ 0x1407784E0 (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall MiMarkSessionDeletePending(__int64 a1)
{
  LONG result; // eax
  unsigned __int64 v3; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v8; // eax
  bool v9; // zf
  struct _KPRCB *v10; // r10
  _DWORD *v11; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  *(_DWORD *)(a1 + 4) |= 2u;
  if ( *(_DWORD *)(a1 + 100) )
  {
    *(_DWORD *)(a1 + 108) = 0;
    *(_QWORD *)(a1 + 120) = a1 + 112;
    *(_QWORD *)(a1 + 112) = a1 + 112;
    *(_WORD *)(a1 + 104) = 263;
    *(_BYTE *)(a1 + 106) = 6;
    if ( !dword_140C4DE48 )
      KeResetEvent(&stru_140C4DE30);
    ++dword_140C4DE48;
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
          v8 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    result = KeWaitForGate(a1 + 104, 0x12u);
    if ( !--dword_140C4DE48 )
      return KeSetEvent(&stru_140C4DE30, 0, 0);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = KiIrqlFlags;
    v3 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v10 = KeGetCurrentPrcb();
          v11 = v10->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (result & v11[5]) == 0;
          v11[5] &= result;
          if ( v9 )
            result = KiRemoveSystemWorkPriorityKick(v10);
        }
      }
    }
    __writecr8(v3);
  }
  return result;
}
