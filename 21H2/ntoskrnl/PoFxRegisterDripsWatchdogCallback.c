/*
 * XREFs of PoFxRegisterDripsWatchdogCallback @ 0x1403CB6C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxRegisterDripsWatchdogCallback(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int64 v9; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf

  v4 = *(_QWORD *)(BugCheckParameter2 + 48);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 88));
  if ( *(_QWORD *)(BugCheckParameter2 + 168) )
    PopFxBugCheck(0x622uLL, BugCheckParameter2, 0LL, 0LL);
  if ( a3 )
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 824), 8u);
  *(_QWORD *)(BugCheckParameter2 + 864) = a4;
  *(_QWORD *)(BugCheckParameter2 + 168) = a2;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 88));
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v13 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return result;
}
