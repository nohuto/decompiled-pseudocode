/*
 * XREFs of HalpCmciHandler @ 0x140509620
 * Callers:
 *     HalpInterruptDeferredErrorService @ 0x14051F570 (HalpInterruptDeferredErrorService.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     HalpGetCpuVendor @ 0x1403AAE50 (HalpGetCpuVendor.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     HalpCmciResetStateAMD @ 0x140509880 (HalpCmciResetStateAMD.c)
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
  __int64 v7; // rbp
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v10; // r9
  int v11; // eax
  bool v12; // zf
  __int128 Src; // [rsp+30h] [rbp-38h] BYREF
  __int128 v15; // [rsp+40h] [rbp-28h]

  LOBYTE(Pcr) = HalpMcaWheaReady;
  Src = 0LL;
  v15 = 0LL;
  if ( !HalpMcaWheaReady )
    return (char)Pcr;
  Pcr = KeGetPcr();
  v1 = *(_QWORD *)&Pcr->HalReserved[6];
  if ( !v1 )
    return (char)Pcr;
  while ( 1 )
  {
    v2 = *(_QWORD *)(v1 + 172);
    if ( *(_QWORD *)(v1 + 16) )
    {
      if ( *(_QWORD *)(v1 + 24) )
        break;
    }
LABEL_25:
    v1 = *(_QWORD *)(v1 + 184);
    if ( !v1 )
      return (char)Pcr;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  ++*(_DWORD *)(v1 + 124);
  if ( PerformanceCounter.QuadPart - *(_QWORD *)(v1 + 112) >= HalpCmciThresholdTime )
  {
    *(LARGE_INTEGER *)(v1 + 112) = PerformanceCounter;
    v4 = 1;
    *(_DWORD *)(v1 + 120) = 1;
  }
  else
  {
    v4 = ++*(_DWORD *)(v1 + 120);
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
    if ( !*(_BYTE *)(v1 + 128) )
    {
      v7 = *(_QWORD *)(v1 + 24);
      if ( HalpGetCpuVendor() == 1 )
        HalpCmciResetStateAMD(v7, v2);
      KiInsertQueueDpc(v1 + 48, 0LL, 0LL, 0LL, 0);
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
    LOBYTE(Pcr) = CurrentIrql;
    __writecr8(CurrentIrql);
    goto LABEL_25;
  }
  LODWORD(Pcr) = _InterlockedIncrement(&HalpCmciRevertToPolledMode);
  if ( (_DWORD)Pcr == 1 )
  {
    *(_QWORD *)&Src = 0x1674C6857LL;
    *((_QWORD *)&Src + 1) = 0x100000020LL;
    *(_QWORD *)&v15 = 0x80000003204C4148uLL;
    *((_QWORD *)&v15 + 1) = 2LL;
    WheaLogInternalEvent(&Src);
    KeIpiGenericCall(HalpDisableCmciOnProcessor, 0LL);
    LOBYTE(Pcr) = KiInsertQueueDpc(v1 + 48, 0LL, 0LL, 0LL, 0);
  }
  return (char)Pcr;
}
