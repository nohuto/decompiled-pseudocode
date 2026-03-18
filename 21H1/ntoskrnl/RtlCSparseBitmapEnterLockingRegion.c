/*
 * XREFs of RtlCSparseBitmapEnterLockingRegion @ 0x1403619D8
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x1403607AC (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpCSparseBitmapPageCommit @ 0x140361800 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlCSparseBitmapEnterLockingRegion(_QWORD *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // r11
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *SchedulerAssist; // r9

  *a1 = 0LL;
  a1[1] = a2;
  if ( *(_BYTE *)(a2 + 48) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    *(_BYTE *)a1 = CurrentIrql;
  }
  else
  {
    *(_BYTE *)a1 = -1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  return a1;
}
