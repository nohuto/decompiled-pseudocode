/*
 * XREFs of HalpCmcPollProcessor @ 0x1403A0C60
 * Callers:
 *     HalpCmciPollProcessor @ 0x1403A0BFC (HalpCmciPollProcessor.c)
 *     HalpCmcWorkerRoutine @ 0x1408645A0 (HalpCmcWorkerRoutine.c)
 * Callees:
 *     KeQueryDpcWatchdogInformation @ 0x140212180 (KeQueryDpcWatchdogInformation.c)
 *     HalpMcaReadErrorPresence @ 0x1403A0EE8 (HalpMcaReadErrorPresence.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpCmcIsDpcTimeRunningLow @ 0x1404B9C14 (HalpCmcIsDpcTimeRunningLow.c)
 *     HalpCmcLogPollingTimeoutEvent @ 0x1404B9C6C (HalpCmcLogPollingTimeoutEvent.c)
 *     HalpMcaClearError @ 0x1404BA528 (HalpMcaClearError.c)
 *     HalpMcaReadError @ 0x1404BAA50 (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x1404BACD0 (HalpMcaReportError.c)
 */

__int64 __fastcall HalpCmcPollProcessor(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rcx
  unsigned int v6; // r15d
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  char v11; // si
  char v12; // bp
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v16; // r9
  int v17; // eax
  bool v18; // zf
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  int v31; // [rsp+34h] [rbp-54h] BYREF
  __int64 v32; // [rsp+38h] [rbp-50h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+40h] [rbp-48h] BYREF

  v31 = 0;
  v32 = a1;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  CurrentIrql = 0;
  memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
  while ( 1 )
  {
    result = HalpMcaReadErrorPresence(v5, a3);
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
      result = HalpMcaReadError(1, (int)v32 + 80, (unsigned int)&v31, 0, a3);
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
                v26 = KeGetCurrentIrql();
                if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
                {
                  v27 = KeGetCurrentPrcb();
                  v28 = v27->SchedulerAssist;
                  v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v18 = (v29 & v28[5]) == 0;
                  v28[5] &= v29;
                  if ( v18 )
                    KiRemoveSystemWorkPriorityKick(v27);
                }
              }
            }
            result = CurrentIrql;
            __writecr8(CurrentIrql);
          }
        }
        break;
      }
      v19 = v32;
      v20 = *(_QWORD *)(v32 + 120);
      v21 = v32 + 80;
      *(_DWORD *)(v32 + 12) = 0;
      v4 += (v20 >> 38) & 0x7FFF;
      *(_DWORD *)(v19 + 20) = v31;
      HalpMcaReportError(v19, v21, a3);
      HalpMcaClearError(v32 + 80, a3);
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
              v22 = KeGetCurrentIrql();
              if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
              {
                v23 = KeGetCurrentPrcb();
                v24 = v23->SchedulerAssist;
                v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v18 = (v25 & v24[5]) == 0;
                v24[5] &= v25;
                if ( v18 )
                  KiRemoveSystemWorkPriorityKick(v23);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
      }
      ++v6;
      if ( HalpCmcPollCount != -1 )
      {
        if ( HalpCmcPollCount )
        {
          result = (unsigned int)HalpCmcPollCount;
          if ( v6 >= HalpCmcPollCount )
            break;
        }
      }
    }
    v5 = 2LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
      if ( !KeQueryDpcWatchdogInformation(&WatchdogInformation) )
      {
        if ( (unsigned __int8)HalpCmcIsDpcTimeRunningLow(&WatchdogInformation) )
        {
          result = HalpCmcLogPollingTimeoutEvent(&WatchdogInformation, v6);
          break;
        }
      }
    }
  }
  *(_DWORD *)(a4 + 156) = v4;
  if ( v4 > *(_DWORD *)(a4 + 160) )
    *(_DWORD *)(a4 + 160) = v4;
  return result;
}
