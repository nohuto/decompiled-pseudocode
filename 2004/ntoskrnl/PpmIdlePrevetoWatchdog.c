/*
 * XREFs of PpmIdlePrevetoWatchdog @ 0x140561640
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x1408F72E0 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     RtlGetInterruptTimePrecise @ 0x14021F2E0 (RtlGetInterruptTimePrecise.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpmIdlePrevetoWatchdog(unsigned __int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  LARGE_INTEGER InterruptTimePrecise; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r10d
  __int64 v13; // r11
  unsigned __int64 v14; // rcx
  __int64 v15; // r9
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v18; // zf
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp+10h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  result = PpmPlatformStates;
  *a2 = 0;
  *a3 = 0LL;
  if ( result )
  {
    if ( *(_DWORD *)(result + 4) )
    {
      v7 = (unsigned int)dword_140C4FE80;
      result = (unsigned int)dword_140C4FE80;
      if ( dword_140C4FE80 != -1 )
      {
        v8 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
        v10 = 0LL;
        v11 = PpmPlatformStates + 384 * v7;
        v12 = *(_DWORD *)(v11 + 108);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v11 + 112);
          while ( 1 )
          {
            v14 = (unsigned __int64)(unsigned int)v10 << 6;
            v15 = *(_QWORD *)(v14 + v13 + 32);
            if ( v15 )
            {
              if ( InterruptTimePrecise.QuadPart - v15 >= a1 )
                break;
            }
            v10 = (unsigned int)(v10 + 1);
            if ( (unsigned int)v10 >= v12 )
              goto LABEL_11;
          }
          *a2 = *(_DWORD *)(v14 + v13 + 16);
          *a3 = *(_QWORD *)(PpmIdleVetoList + 16 * (v10 + 1));
        }
LABEL_11:
        KxReleaseSpinLock(&PpmIdleVetoLock);
        result = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
              v18 = ((unsigned int)result & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= result;
              if ( v18 )
                result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v8);
      }
    }
  }
  return result;
}
