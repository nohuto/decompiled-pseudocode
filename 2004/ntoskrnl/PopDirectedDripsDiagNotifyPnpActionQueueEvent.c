/*
 * XREFs of PopDirectedDripsDiagNotifyPnpActionQueueEvent @ 0x140378350
 * Callers:
 *     PopDirectedDripsNotifyPnpActionQueueEvent @ 0x1403782B4 (PopDirectedDripsNotifyPnpActionQueueEvent.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopDirectedDripsDiagNotifyPnpActionQueueEvent(int a1, unsigned int a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // r9
  int v6; // ebx
  int v7; // ebx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v3 = a2;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C1E930);
  v5 = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    v6 = a1 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          if ( byte_140C1E9A8 )
          {
            *(&PopDirectedDripsDiagSessionContext + v3 + 25) = (char *)*(&PopDirectedDripsDiagSessionContext + v3 + 25)
                                                             + MEMORY[0xFFFFF78000000008]
                                                             - qword_140C1E9C0;
            qword_140C1E9C0 = 0LL;
          }
          dword_140C1E93C = 26;
        }
      }
      else
      {
        dword_140C1E93C = v3;
        if ( byte_140C1E9A8 )
          qword_140C1E9C0 = MEMORY[0xFFFFF78000000008];
      }
    }
    else
    {
      if ( !--dword_140C1E938 && byte_140C1E9A8 )
      {
        qword_140C1E9B0 += MEMORY[0xFFFFF78000000008] - qword_140C1E9B8;
        qword_140C1E9B8 = 0LL;
      }
      --*((_DWORD *)&PopDirectedDripsDiagSessionContext + v3 + 16);
    }
  }
  else
  {
    ++dword_140C1E938;
    ++*((_DWORD *)&PopDirectedDripsDiagSessionContext + v3 + 16);
    if ( byte_140C1E9A8 )
    {
      ++*((_DWORD *)&PopDirectedDripsDiagSessionContext + v3 + 102);
      if ( dword_140C1E938 == 1 )
        qword_140C1E9B8 = v5;
    }
  }
  KxReleaseSpinLock(&qword_140C1E930);
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
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
