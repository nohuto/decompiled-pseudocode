/*
 * XREFs of PfSnActivateTrace @ 0x1402FEDB4
 * Callers:
 *     PfSnBeginTrace @ 0x1406BBAB0 (PfSnBeginTrace.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PfSnAddProcessTrace @ 0x1402FEE74 (PfSnAddProcessTrace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PfSnActivateTrace(__int64 a1)
{
  unsigned __int64 v2; // rsi
  int v3; // ebx
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&stru_140C50200) )
  {
    *(_WORD *)(a1 + 486) |= 2u;
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C50250);
    v3 = PfSnAddProcessTrace(*(_QWORD *)(a1 + 352), a1);
    if ( v3 >= 0 )
    {
      v4 = (_QWORD *)qword_140C50248;
      v5 = (_QWORD *)(a1 + 8);
      if ( *(__int64 **)qword_140C50248 != &PfSnGlobals )
        __fastfail(3u);
      ++PfSnNumActiveTraces;
      *v5 = &PfSnGlobals;
      v3 = 0;
      *(_QWORD *)(a1 + 16) = v4;
      *v4 = v5;
      qword_140C50248 = a1 + 8;
    }
    KxReleaseSpinLock(&qword_140C50250);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return (unsigned int)v3;
}
