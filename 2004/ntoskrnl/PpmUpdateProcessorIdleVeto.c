/*
 * XREFs of PpmUpdateProcessorIdleVeto @ 0x140562FF0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x14021DBD0 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x14021E120 (KeAddProcessorAffinityEx.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeGetProcessorIndexFromNumber @ 0x1402981D0 (KeGetProcessorIndexFromNumber.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopExecuteOnTargetProcessors @ 0x1402E3AE0 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PpmUpdateIdleVeto @ 0x140562B20 (PpmUpdateIdleVeto.c)
 *     PpmEventProcessorVetoRequest @ 0x140574E8C (PpmEventProcessorVetoRequest.c)
 */

__int64 __fastcall PpmUpdateProcessorIdleVeto(__int64 a1)
{
  ULONG ProcessorIndexFromNumber; // r14d
  struct _KPRCB *Prcb; // rbp
  int updated; // ebx
  KIRQL v5; // al
  _PPM_IDLE_STATES *IdleStates; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r8
  int v19; // eax
  char v20[16]; // [rsp+20h] [rbp-E8h] BYREF
  _DWORD v21[44]; // [rsp+30h] [rbp-D8h] BYREF

  v20[0] = 0;
  memset(&v21[2], 0, 0xA0uLL);
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(a1 + 4));
  Prcb = (struct _KPRCB *)KeGetPrcb(ProcessorIndexFromNumber);
  if ( ProcessorIndexFromNumber == -1 )
    return (unsigned int)-1073741811;
  v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
  IdleStates = Prcb->PowerState.IdleStates;
  v7 = v5;
  if ( !IdleStates )
  {
    updated = -1073741637;
    goto LABEL_5;
  }
  v14 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v14 >= IdleStates->ProcessorIdleCount )
  {
    updated = -1073741811;
LABEL_5:
    KxReleaseSpinLock(&PpmIdleVetoLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    return (unsigned int)updated;
  }
  updated = PpmUpdateIdleVeto(
              *(_BYTE *)(a1 + 16),
              *(_DWORD *)(a1 + 12),
              (__int64)&IdleStates->State[v14].VetoAccounting,
              v20);
  if ( updated < 0 )
    goto LABEL_5;
  LOBYTE(v15) = *(_BYTE *)(a1 + 16);
  PpmEventProcessorVetoRequest(Prcb, *(unsigned int *)(a1 + 8), *(unsigned int *)(a1 + 12), v15);
  if ( !v20[0] || Prcb == KeGetCurrentPrcb() )
    goto LABEL_5;
  KxReleaseSpinLock(&PpmIdleVetoLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
    }
  }
  __writecr8(v7);
  v21[0] = 1310721;
  memset(&v21[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v21, ProcessorIndexFromNumber);
  PopExecuteOnTargetProcessors((__int64)v21, (__int64)HalSystemVectorDispatchEntry, 0LL, 0LL);
  return (unsigned int)updated;
}
