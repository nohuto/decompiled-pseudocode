/*
 * XREFs of PfSnTraceGetLogEntry @ 0x14025D4A0
 * Callers:
 *     PfSnLogPageFaultCommon @ 0x14025D2FC (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLogSequenceNumber @ 0x14025D424 (PfSnCheckLogSequenceNumber.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     PfSnTraceTimerRoutine @ 0x14034E2B0 (PfSnTraceTimerRoutine.c)
 *     PfSnLogHelper @ 0x1406B7F6C (PfSnLogHelper.c)
 *     PfSnLogIdentifier @ 0x140706EA0 (PfSnLogIdentifier.c)
 *     PfSnLogStreamDelete @ 0x14070E874 (PfSnLogStreamDelete.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PfSnTraceBufferAllocate @ 0x1402FEEE4 (PfSnTraceBufferAllocate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnTraceGetLogEntry(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // ebp
  _QWORD *v10; // r15
  unsigned __int64 v11; // r14
  _QWORD *v12; // rcx
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax

  if ( (signed __int32)(a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), a2)) > *(_DWORD *)(a1 + 340) )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), -a2);
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 400), 3, 0) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 368), DelayedWorkQueue);
    return (unsigned int)-1073741431;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 96);
    v7 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), a2);
    v8 = 0;
    while ( v7 > 0 )
    {
      if ( v7 <= *(_DWORD *)(v6 + 20) )
      {
        *a3 = v6 + 16LL * (int)(v7 - a2) + 24;
        return v8;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), -a2);
      v10 = (_QWORD *)PfSnTraceBufferAllocate();
      if ( !v10 )
      {
        v8 = -1073741670;
        goto LABEL_33;
      }
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
      if ( *(_QWORD *)(a1 + 96) == v6 )
      {
        v12 = *(_QWORD **)(a1 + 112);
        if ( *v12 != a1 + 104 )
          __fastfail(3u);
        v10[1] = v12;
        *v10 = a1 + 104;
        *v12 = v10;
        *(_QWORD *)(a1 + 112) = v10;
        ++*(_DWORD *)(a1 + 120);
        *(_QWORD *)(a1 + 96) = v10;
        KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 128));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v17 = (v21 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v21;
              if ( v17 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
      }
      else
      {
        KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 128));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v13 = KeGetCurrentIrql();
            if ( v13 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v13 >= 2u )
            {
              v14 = KeGetCurrentPrcb();
              v15 = v14->SchedulerAssist;
              v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v17 = (v16 & v15[5]) == 0;
              v15[5] &= v16;
              if ( v17 )
                KiRemoveSystemWorkPriorityKick(v14);
            }
          }
        }
        __writecr8(v11);
        ExFreePoolWithTag(v10, 0);
      }
      v6 = *(_QWORD *)(a1 + 96);
      v7 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), a2);
    }
    v8 = -1073741675;
LABEL_33:
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), -a2);
  }
  return v8;
}
