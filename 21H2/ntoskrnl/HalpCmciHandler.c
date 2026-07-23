/*
 * XREFs of HalpCmciHandler @ 0x1404BCCE8
 * Callers:
 *     HalpInterruptDeferredErrorService @ 0x1404D2850 (HalpInterruptDeferredErrorService.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     KeIpiGenericCall @ 0x1403A4C70 (KeIpiGenericCall.c)
 *     WheaLogInternalEvent @ 0x1403BAEC0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpCmciResetState @ 0x1404BCF10 (HalpCmciResetState.c)
 */

char HalpCmciHandler()
{
  KPCR *Pcr; // rax
  __int64 v1; // rdi
  __int64 v2; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v4; // eax
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v9; // r9
  int v10; // eax
  bool v11; // zf
  __int128 Src; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h]

  LOBYTE(Pcr) = HalpMcaWheaReady;
  Src = 0LL;
  v14 = 0LL;
  if ( !HalpMcaWheaReady )
    return (char)Pcr;
  Pcr = KeGetPcr();
  v1 = *(_QWORD *)&Pcr->HalReserved[6];
  if ( !v1 )
    return (char)Pcr;
  while ( 1 )
  {
    v2 = *(_QWORD *)(v1 + 164);
    if ( *(_QWORD *)(v1 + 16) )
    {
      if ( *(_QWORD *)(v1 + 24) )
        break;
    }
LABEL_23:
    v1 = *(_QWORD *)(v1 + 176);
    if ( !v1 )
      return (char)Pcr;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  ++*(_DWORD *)(v1 + 116);
  if ( PerformanceCounter.QuadPart - *(_QWORD *)(v1 + 104) >= HalpCmciThresholdTime )
  {
    *(LARGE_INTEGER *)(v1 + 104) = PerformanceCounter;
    v4 = 1;
    *(_DWORD *)(v1 + 112) = 1;
  }
  else
  {
    v4 = ++*(_DWORD *)(v1 + 112);
  }
  if ( v4 <= HalpCmciThresholdCount )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xEuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x7FFC;
    }
    if ( !*(_BYTE *)(v1 + 120) )
    {
      HalpCmciResetState(*(_QWORD *)(v1 + 24), v2);
      KeInsertQueueDpc((PRKDPC)(v1 + 40), 0LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v7 = KeGetCurrentIrql();
        if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v11 = (v10 & v9[5]) == 0;
          v9[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    LOBYTE(Pcr) = CurrentIrql;
    __writecr8(CurrentIrql);
    goto LABEL_23;
  }
  LODWORD(Pcr) = _InterlockedIncrement(&HalpCmciRevertToPolledMode);
  if ( (_DWORD)Pcr == 1 )
  {
    *(_QWORD *)&Src = 0x1674C6857LL;
    *((_QWORD *)&Src + 1) = 0x100000020LL;
    *(_QWORD *)&v14 = 0x80000003204C4148uLL;
    *((_QWORD *)&v14 + 1) = 2LL;
    WheaLogInternalEvent(&Src);
    KeIpiGenericCall(HalpDisableCmciOnProcessor, 0LL);
    LOBYTE(Pcr) = KeInsertQueueDpc((PRKDPC)(v1 + 40), 0LL, 0LL);
  }
  return (char)Pcr;
}
