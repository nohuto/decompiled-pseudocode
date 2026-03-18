/*
 * XREFs of HalpInsertSecondarySignalList @ 0x14051D4F4
 * Callers:
 *     HalpReleaseSecondaryIcEntryShared @ 0x1404593D2 (HalpReleaseSecondaryIcEntryShared.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140252344 (HalpAcquireHighLevelLock.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpInsertSecondarySignalList(__int64 a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  bool v5; // zf
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v2 = HalpAcquireHighLevelLock(&SecondarySignalListLock);
  v3 = (_QWORD *)qword_140C4B0E8;
  v4 = (_QWORD *)(a1 + 144);
  if ( *(__int64 **)qword_140C4B0E8 != &SecondarySignalList )
    __fastfail(3u);
  v5 = SecondarySignalDpcRunning == 0;
  *v4 = &SecondarySignalList;
  v4[1] = v3;
  *v3 = v4;
  qword_140C4B0E8 = (__int64)v4;
  if ( v5 )
  {
    SecondarySignalDpcRunning = 1;
    KiInsertQueueDpc((ULONG_PTR)&SecondarySignalDpc, 0LL, 0LL, 0LL, 0);
  }
  KxReleaseSpinLock(&SecondarySignalListLock);
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
        v5 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v5 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
