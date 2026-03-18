/*
 * XREFs of PopUpdateNonAttributedCpuTimeReference @ 0x140574E48
 * Callers:
 *     PpmUpdateIdleVeto @ 0x140566500 (PpmUpdateIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x14056A07C (PopFxPlatformStateAvailable.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408F284C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140574A7C (PopAccumulateNonActivatedCpuTime.c)
 */

__int64 __fastcall PopUpdateNonAttributedCpuTimeReference(char a1)
{
  unsigned __int64 v2; // rdi
  char v3; // cl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C4FF08);
  if ( a1 )
  {
    if ( ++dword_140C4FF04 == 1 )
    {
      v3 = 0;
LABEL_6:
      PopAccumulateNonActivatedCpuTime(v3, &qword_140C4FDF8, &qword_140C4FE00);
    }
  }
  else if ( !--dword_140C4FF04 )
  {
    v3 = 1;
    goto LABEL_6;
  }
  KxReleaseSpinLock(&qword_140C4FF08);
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
        v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v7 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
