/*
 * XREFs of PfSnTraceGetLogEntry @ 0x1402D2E80
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     PfSnLogPageFaultCommon @ 0x1402D2898 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLogSequenceNumber @ 0x1402D29C0 (PfSnCheckLogSequenceNumber.c)
 *     PfSnTraceTimerRoutine @ 0x14031F010 (PfSnTraceTimerRoutine.c)
 *     PfSnLogHelper @ 0x1406820DC (PfSnLogHelper.c)
 *     PfSnLogStreamDelete @ 0x1406BCB1C (PfSnLogStreamDelete.c)
 *     PfSnLogIdentifier @ 0x1406D9A00 (PfSnLogIdentifier.c)
 * Callees:
 *     PfSnTraceBufferAllocate @ 0x140202EC0 (PfSnTraceBufferAllocate.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
      v10 = PfSnTraceBufferAllocate();
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
