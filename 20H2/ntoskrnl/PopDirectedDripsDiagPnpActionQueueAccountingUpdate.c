/*
 * XREFs of PopDirectedDripsDiagPnpActionQueueAccountingUpdate @ 0x14057ADFC
 * Callers:
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1408E5994 (PopDirectedDripsHandleResiliencyNotification.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x14057AEA0 (PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe.c)
 */

__int64 __fastcall PopDirectedDripsDiagPnpActionQueueAccountingUpdate(__int64 a1, char a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf

  v5 = KeAcquireSpinLockRaiseToDpc(&qword_140C1E8B0);
  if ( byte_140C1E928 != a2 )
  {
    LOBYTE(v3) = a2;
    PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(v4, v3);
  }
  KxReleaseSpinLock(&qword_140C1E8B0);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
