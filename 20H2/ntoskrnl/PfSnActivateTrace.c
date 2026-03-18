/*
 * XREFs of PfSnActivateTrace @ 0x140202D90
 * Callers:
 *     PfSnBeginTrace @ 0x1405D858C (PfSnBeginTrace.c)
 * Callees:
 *     PfSnAddProcessTrace @ 0x140202E50 (PfSnAddProcessTrace.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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

  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&RunRef) )
  {
    *(_WORD *)(a1 + 486) |= 2u;
    v2 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v3 = PfSnAddProcessTrace(*(_QWORD *)(a1 + 352), a1);
    if ( v3 >= 0 )
    {
      v4 = (_QWORD *)qword_140C502C8;
      v5 = (_QWORD *)(a1 + 8);
      if ( *(__int64 **)qword_140C502C8 != &PfSnGlobals )
        __fastfail(3u);
      ++PfSnNumActiveTraces;
      *v5 = &PfSnGlobals;
      v3 = 0;
      *(_QWORD *)(a1 + 16) = v4;
      *v4 = v5;
      qword_140C502C8 = a1 + 8;
    }
    KxReleaseSpinLock(&SpinLock);
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
