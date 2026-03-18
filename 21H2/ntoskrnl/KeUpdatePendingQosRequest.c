/*
 * XREFs of KeUpdatePendingQosRequest @ 0x14045ABA8
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     KiUpdateRunTime @ 0x140307660 (KiUpdateRunTime.c)
 *     KeCheckAndApplyBamQos @ 0x14045AAC0 (KeCheckAndApplyBamQos.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14045B5B2 (KiSetVirtualHeteroClockIntervalRequest.c)
 *     KiSetClockTimer @ 0x14056CF48 (KiSetClockTimer.c)
 */

__int64 __fastcall KeUpdatePendingQosRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  char v3; // cl
  char v4; // r11
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf

  v2 = a1;
  LOBYTE(a2) = 0;
  v3 = 0;
  v4 = 0;
  if ( (*(_DWORD *)(v2 + 236) & 0x300) != 0 )
  {
    result = (unsigned int)_InterlockedIncrement(&KiPendingVirtualHeteroRequest);
    if ( (_DWORD)result != 1 )
      goto LABEL_9;
    if ( *(_BYTE *)(v2 + 33) )
    {
      v3 = 1;
      goto LABEL_9;
    }
  }
  else
  {
    result = (unsigned int)_InterlockedDecrement(&KiPendingVirtualHeteroRequest);
    if ( (_DWORD)result )
      goto LABEL_9;
    if ( *(_BYTE *)(v2 + 33) )
    {
      v3 = 1;
      v4 = 1;
      goto LABEL_9;
    }
  }
  LOBYTE(a2) = 1;
LABEL_9:
  if ( KiClockTimerPerCpuTickScheduling )
  {
    if ( v3 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
      }
      if ( v4 )
      {
        *(_BYTE *)(v2 + 37124) &= ~1u;
      }
      else if ( KiQosHysteresisTimerPeriod )
      {
        KiSetClockTimer(v2, -KiQosHysteresisTimerPeriod, 0, 6, 1, 1);
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v8 = KeGetCurrentIrql();
          if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v10 = CurrentPrcb->SchedulerAssist;
            v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v12 = (v11 & v10[5]) == 0;
            v10[5] &= v11;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  else if ( v3 )
  {
    LOBYTE(a1) = v4;
    return KiSetVirtualHeteroClockIntervalRequest(a1, a2);
  }
  else if ( (_BYTE)a2 )
  {
    if ( !qword_140C2BBF8 )
      word_140C2BBC2 = KiClockTimerOwner + 2048;
    return KiInsertQueueDpc((ULONG_PTR)&KiSetVirtualHeteroClockIntervalRequestDpc, 0LL, 0LL, 0LL, 0);
  }
  return result;
}
