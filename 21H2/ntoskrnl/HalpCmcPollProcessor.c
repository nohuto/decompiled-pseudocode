/*
 * XREFs of HalpCmcPollProcessor @ 0x1403AAA5C
 * Callers:
 *     HalpCmciPollProcessor @ 0x1403AAA10 (HalpCmciPollProcessor.c)
 *     HalpCmcWorkerRoutine @ 0x140908680 (HalpCmcWorkerRoutine.c)
 * Callees:
 *     KeQueryDpcWatchdogInformation @ 0x14021ACE0 (KeQueryDpcWatchdogInformation.c)
 *     HalpMcaReadErrorPresence @ 0x1403AACB4 (HalpMcaReadErrorPresence.c)
 *     HalpGetCpuVendor @ 0x1403AAE50 (HalpGetCpuVendor.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     HalpCmcIsDpcTimeRunningLow @ 0x1405062F4 (HalpCmcIsDpcTimeRunningLow.c)
 *     HalpCmcLogPollingTimeoutEvent @ 0x14050634C (HalpCmcLogPollingTimeoutEvent.c)
 *     HalpMcaClearError @ 0x140506CA4 (HalpMcaClearError.c)
 *     HalpMcaReadError @ 0x1405071C4 (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x14050745C (HalpMcaReportError.c)
 */

__int64 __fastcall HalpCmcPollProcessor(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  unsigned int v7; // r12d
  unsigned __int8 CurrentIrql; // di
  __int64 v9; // rcx
  __int64 result; // rax
  char v11; // r14
  char v12; // r15
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v16; // r9
  int v17; // eax
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // ebp
  __int64 v22; // rsi
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  char CpuVendor; // [rsp+31h] [rbp-57h]
  int v33; // [rsp+34h] [rbp-54h] BYREF
  __int64 v34; // [rsp+38h] [rbp-50h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+40h] [rbp-48h] BYREF

  v33 = 0;
  v34 = a1;
  memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
  v6 = 0;
  v7 = 0;
  CurrentIrql = 0;
  CpuVendor = HalpGetCpuVendor();
  while ( 1 )
  {
    result = HalpMcaReadErrorPresence(v9, a3);
    if ( (int)result < 0 )
      break;
    v11 = 0;
    v12 = 0;
    if ( !a2 )
      goto LABEL_22;
    v11 = 1;
    if ( KeGetCurrentIrql() < 2u )
    {
      v12 = 1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
      }
    }
    if ( _InterlockedCompareExchange(&HalpCmcLock, 1, 0) )
    {
      if ( v12 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v14 = KeGetCurrentIrql();
            if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v16 = CurrentPrcb->SchedulerAssist;
              v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v18 = (v17 & v16[5]) == 0;
              v16[5] &= v17;
              if ( v18 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
    }
    else
    {
LABEL_22:
      result = HalpMcaReadError(1, (int)v34 + 80, (unsigned int)&v33, 0, a3);
      if ( (int)result < 0 )
      {
        if ( a2 )
        {
          if ( v11 )
            result = (unsigned int)_InterlockedExchange(&HalpCmcLock, 0);
          if ( v12 )
          {
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v27 = KeGetCurrentIrql();
                if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
                {
                  v28 = KeGetCurrentPrcb();
                  v29 = v28->SchedulerAssist;
                  v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v18 = (v30 & v29[5]) == 0;
                  v29[5] &= v30;
                  if ( v18 )
                    KiRemoveSystemWorkPriorityKick(v28);
                }
              }
            }
            result = CurrentIrql;
            __writecr8(CurrentIrql);
          }
        }
        break;
      }
      v19 = v34;
      if ( CpuVendor == 2 )
        v20 = (*(_QWORD *)(v34 + 120) >> 38) & 0x7FFFLL;
      else
        LODWORD(v20) = 1;
      *(_DWORD *)(v34 + 12) = 0;
      v21 = v6 + v20;
      v22 = v19 + 80;
      *(_DWORD *)(v19 + 20) = v33;
      HalpMcaReportError(v19, v19 + 80, a3);
      HalpMcaClearError(v22, a3);
      if ( a2 )
      {
        if ( v11 )
          _InterlockedExchange(&HalpCmcLock, 0);
        if ( v12 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v23 = KeGetCurrentIrql();
              if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
              {
                v24 = KeGetCurrentPrcb();
                v25 = v24->SchedulerAssist;
                v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v18 = (v26 & v25[5]) == 0;
                v25[5] &= v26;
                if ( v18 )
                  KiRemoveSystemWorkPriorityKick(v24);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
      }
      ++v7;
      v6 = v21;
      if ( HalpCmcPollCount != -1 )
      {
        if ( HalpCmcPollCount )
        {
          result = (unsigned int)HalpCmcPollCount;
          if ( v7 >= HalpCmcPollCount )
            break;
        }
      }
    }
    v9 = 2LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
      if ( !KeQueryDpcWatchdogInformation(&WatchdogInformation) )
      {
        if ( (unsigned __int8)HalpCmcIsDpcTimeRunningLow(&WatchdogInformation) )
        {
          result = HalpCmcLogPollingTimeoutEvent(&WatchdogInformation, v7);
          break;
        }
      }
    }
  }
  *(_DWORD *)(a4 + 164) = v6;
  if ( v6 > *(_DWORD *)(a4 + 168) )
    *(_DWORD *)(a4 + 168) = v6;
  return result;
}
