/*
 * XREFs of PoFxSetDeviceIdleTimeout @ 0x1403D9370
 * Callers:
 *     DifPoFxSetDeviceIdleTimeoutWrapper @ 0x140619D70 (DifPoFxSetDeviceIdleTimeoutWrapper.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1403D93F4 (PopFxUpdateDeviceIdleTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PoFxSetDeviceIdleTimeout(__int64 a1, unsigned __int64 a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v5; // al
  __int64 v6; // r8
  unsigned __int64 v7; // rbp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v2 = (KSPIN_LOCK *)(a1 + 360);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 360));
  v6 = 0x3FFFFFFFFFFFFFFFLL;
  v7 = v5;
  if ( a2 <= 0x3FFFFFFFFFFFFFFFLL )
    v6 = a2;
  *(_QWORD *)(a1 + 496) = v6;
  PopFxUpdateDeviceIdleTimer(a1);
  KxReleaseSpinLock(v2);
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
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
