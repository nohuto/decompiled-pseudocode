/*
 * XREFs of PopFxIssueDirectedPowerTransition @ 0x140566148
 * Callers:
 *     PopIssueDirectedPowerTransition @ 0x1408ED344 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     PopFxAddRefDevice @ 0x1402CA530 (PopFxAddRefDevice.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxQueueWorkOrder @ 0x14037F228 (PopFxQueueWorkOrder.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x140563F3C (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxIssueDirectedPowerTransition(ULONG_PTR BugCheckParameter2, char a2, __int64 a3)
{
  KSPIN_LOCK *v6; // rbp
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 824), 0, 0) & 0x20) == 0 )
    PopFxBugCheck(0x910uLL, 1uLL, BugCheckParameter2, 0LL);
  v6 = (KSPIN_LOCK *)(BugCheckParameter2 + 1152);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 1152));
  if ( *(_DWORD *)(BugCheckParameter2 + 1160) || (*(_DWORD *)(BugCheckParameter2 + 32) & 0x2000) != 0 )
    PopFxBugCheck(0x910uLL, 3uLL, BugCheckParameter2, 0LL);
  if ( ((*(_DWORD *)(BugCheckParameter2 + 32) & 0x1000) != 0) == a2 )
    PopFxBugCheck(0x910uLL, (a2 != 0) + 4LL, BugCheckParameter2, 0LL);
  *(_DWORD *)(BugCheckParameter2 + 1160) = 2;
  _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 32), 0x2000u);
  if ( a2 )
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 32), 0x1000u);
  else
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFEFFF);
  PopFxAddRefDevice(BugCheckParameter2);
  *(_DWORD *)(BugCheckParameter2 + 1180) &= 0xFFFFFFFC;
  *(_QWORD *)(BugCheckParameter2 + 1168) = a3;
  *(_DWORD *)(BugCheckParameter2 + 1176) = -1073741436;
  PopFxQueueWorkOrder(v8, BugCheckParameter2 + 920, BugCheckParameter2);
  KxReleaseSpinLock(v6);
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
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
