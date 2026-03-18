/*
 * XREFs of PpmEndHighPerfRequest @ 0x1403A3F74
 * Callers:
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 *     PoClearBroadcast @ 0x140765200 (PoClearBroadcast.c)
 *     PopUserShutdownCancelled @ 0x140766EA4 (PopUserShutdownCancelled.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407C1E10 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x1408EC4F8 (PdcPoPerfOverride.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     PoClearPowerRequestInternal @ 0x140275FBC (PoClearPowerRequestInternal.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpmEndHighPerfRequest(int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&PpmHighPerfRequestLock);
  if ( !PpmHighPerfDuration[v1] || PpmHighPerfDeferredEndDisabled )
  {
    PoClearPowerRequestInternal(PpmHighPerfPowerRequest, 4u);
  }
  else
  {
    ++PpmHighPerfDeferredEndCount;
    v3 = (unsigned int)(10000 * PpmHighPerfDuration[v1]);
    v4 = PpmHighPerfDeferredEndTime;
    if ( PpmHighPerfDeferredEndTime <= (unsigned __int64)(v3 + MEMORY[0xFFFFF78000000008]) )
    {
      v4 = v3 + MEMORY[0xFFFFF78000000008];
      PpmHighPerfDeferredEndTime = v3 + MEMORY[0xFFFFF78000000008];
    }
    KiSetTimerEx((__int64)&PpmHighPerfEndTimer, MEMORY[0xFFFFF78000000008] - v4, 0, 0, (__int64)&PpmHighPerfEndDpc);
  }
  KxReleaseSpinLock(&PpmHighPerfRequestLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
