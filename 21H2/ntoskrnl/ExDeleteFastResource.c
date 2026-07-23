/*
 * XREFs of ExDeleteFastResource @ 0x140393C70
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExDeleteFastResource(__int64 *BugCheckParameter2)
{
  __int16 v2; // cx
  unsigned __int8 CurrentIrql; // al
  KIRQL v4; // al
  __int64 **v5; // rdx
  unsigned __int64 v6; // rdi
  __int64 *v7; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v2 = *((_WORD *)BugCheckParameter2 + 13);
  if ( (v2 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( *((_DWORD *)BugCheckParameter2 + 16) )
    KeBugCheckEx(0x1C6u, 4uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  *((_WORD *)BugCheckParameter2 + 13) = v2 & 0xFFBE;
  v4 = ExAcquireSpinLockExclusive(&ExpResourceSpinLock);
  v5 = (__int64 **)BugCheckParameter2[1];
  v6 = v4;
  v7 = (__int64 *)*BugCheckParameter2;
  if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 || *v5 != BugCheckParameter2 )
    __fastfail(3u);
  *v5 = v7;
  v7[1] = (__int64)v5;
  ExReleaseSpinLockExclusiveFromDpcLevel(&ExpResourceSpinLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  *BugCheckParameter2 = 0LL;
  BugCheckParameter2[1] = 0LL;
  return result;
}
