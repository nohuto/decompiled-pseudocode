/*
 * XREFs of PopUpdatePowerButtonHoldState @ 0x140573714
 * Callers:
 *     PoSetPowerButtonHoldState @ 0x1405637A0 (PoSetPowerButtonHoldState.c)
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopQueueWorkItem @ 0x140360AC4 (PopQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopUpdatePowerButtonHoldState(char a1)
{
  KIRQL v2; // al
  int v3; // r10d
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  v3 = 0;
  v4 = v2;
  v5 = 1LL << ((dword_140C20584 + dword_140C20588) & 0x3F);
  if ( a1 )
  {
    qword_140C20590 |= v5;
    v3 = 1;
    ++dword_140C20588;
  }
  else
  {
    qword_140C20590 &= ~v5;
    ++dword_140C20584;
  }
  if ( v3 != (qword_140C206B8 & 1) )
  {
    if ( a1 )
    {
      ++HIDWORD(qword_140C206B8);
      LODWORD(qword_140C206B8) = qword_140C206B8 | 1;
    }
    else
    {
      LODWORD(qword_140C206B8) = 0;
    }
    PopQueueWorkItem((__int64)&unk_140C20690, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
