/*
 * XREFs of PopCacheDisplayOnPhaseDuration @ 0x14057385C
 * Callers:
 *     PopSetWatchdog @ 0x140275C48 (PopSetWatchdog.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopCacheDisplayOnPhaseDuration(int a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C23C58);
  if ( dword_140C23C60 )
  {
    switch ( a1 )
    {
      case 'P':
        PopDisplayOnPerformance = a2;
        break;
      case '@':
        qword_140C23C48 = a2;
        break;
      case '0':
        qword_140C23C50 = a2;
        break;
    }
  }
  KxReleaseSpinLock(&qword_140C23C58);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
