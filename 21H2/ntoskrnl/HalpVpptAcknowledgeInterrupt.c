/*
 * XREFs of HalpVpptAcknowledgeInterrupt @ 0x1404C0710
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     RtlGetInterruptTimePrecise @ 0x14022A7B0 (RtlGetInterruptTimePrecise.c)
 *     HalpTimerGetInternalData @ 0x14022AA30 (HalpTimerGetInternalData.c)
 *     HalpAcquireHighLevelLock @ 0x140378F20 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404C0E54 (HalpVpptUpdatePhysicalTimer.c)
 */

__int64 __fastcall HalpVpptAcknowledgeInterrupt(__int64 a1)
{
  __int64 InternalData; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 InterruptTimePrecise; // rax
  unsigned __int64 v6; // rcx
  int *v7; // rdx
  int *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf
  LARGE_INTEGER v17; // [rsp+30h] [rbp+8h] BYREF

  byte_140C4A6F8 = HalpAcquireHighLevelLock(&qword_140C4A6F0);
  InternalData = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
  (*(void (__fastcall **)(__int64))(v3 + 120))(InternalData);
  if ( !(unsigned __int8)((__int64 (*)(void))HalpVpptSkipApi)() )
  {
    if ( *(_QWORD *)&HalpVpptQueue != a1 )
      goto LABEL_15;
    v4 = **(_QWORD **)&HalpVpptQueue;
    if ( *(int **)(*(_QWORD *)&HalpVpptQueue + 8LL) == &HalpVpptQueue
      && *(_QWORD *)(v4 + 8) == *(_QWORD *)&HalpVpptQueue )
    {
      *(_QWORD *)&HalpVpptQueue = **(_QWORD **)&HalpVpptQueue;
      *(_QWORD *)(v4 + 8) = &HalpVpptQueue;
      if ( !*(_QWORD *)(a1 + 40) )
      {
        *(_BYTE *)(a1 + 24) = 0;
LABEL_15:
        if ( *(int **)&HalpVpptQueue == &HalpVpptQueue )
        {
          v10 = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
          (*(void (__fastcall **)(__int64))(v11 + 136))(v10);
        }
        else
        {
          HalpVpptUpdatePhysicalTimer();
        }
        goto LABEL_20;
      }
      v17.QuadPart = 0LL;
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v17);
      v6 = *(_QWORD *)(a1 + 32);
      if ( v6 <= InterruptTimePrecise )
      {
        do
          v6 += *(_QWORD *)(a1 + 40);
        while ( v6 <= InterruptTimePrecise );
        *(_QWORD *)(a1 + 32) = v6;
      }
      v7 = *(int **)&HalpVpptQueue;
      v8 = &HalpVpptQueue;
      while ( v7 != &HalpVpptQueue && v6 >= *((_QWORD *)v7 + 4) )
      {
        v8 = v7;
        v7 = *(int **)v7;
      }
      v9 = *(_QWORD *)v8;
      if ( *(int **)(*(_QWORD *)v8 + 8LL) == v8 )
      {
        *(_QWORD *)a1 = v9;
        *(_QWORD *)(a1 + 8) = v8;
        *(_QWORD *)(v9 + 8) = a1;
        *(_QWORD *)v8 = a1;
        goto LABEL_15;
      }
    }
    __fastfail(3u);
  }
LABEL_20:
  v12 = (unsigned __int8)byte_140C4A6F8;
  KxReleaseSpinLock(&qword_140C4A6F0);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v12 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v16 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v12);
  return result;
}
