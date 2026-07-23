/*
 * XREFs of HalpVpptStop @ 0x1404C0DD0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404C1094 (HalpVpptUpdatePhysicalTimer.c)
 */

__int64 __fastcall HalpVpptStop(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  bool v4; // dl
  __int64 InternalData; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  byte_140C4A738 = HalpAcquireHighLevelLock(&qword_140C4A730);
  if ( *(_BYTE *)(a1 + 24) )
  {
    v2 = *(_QWORD **)a1;
    v3 = *(_QWORD **)(a1 + 8);
    v4 = *(_QWORD *)&HalpVpptQueue == a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v3 != a1 )
      __fastfail(3u);
    *v3 = v2;
    v2[1] = v3;
    if ( v3 == v2 )
    {
      InternalData = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
      (*(void (__fastcall **)(__int64))(v6 + 136))(InternalData);
    }
    else if ( v4 )
    {
      HalpVpptUpdatePhysicalTimer();
    }
  }
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  v7 = (unsigned __int8)byte_140C4A738;
  KxReleaseSpinLock(&qword_140C4A730);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
