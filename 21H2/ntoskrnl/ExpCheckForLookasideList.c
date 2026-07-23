/*
 * XREFs of ExpCheckForLookasideList @ 0x1405B6CE4
 * Callers:
 *     ExpCheckForLookaside @ 0x1405B6C78 (ExpCheckForLookaside.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpCheckForLookasideList(_QWORD *a1, __int64 a2, _QWORD **a3, KSPIN_LOCK *a4)
{
  unsigned __int64 v5; // r12
  int v8; // r15d
  KIRQL v9; // al
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf

  v5 = (unsigned __int64)a1 + a2;
  v8 = a2;
  v9 = KeAcquireSpinLockRaiseToDpc(a4);
  v10 = *a3;
  v11 = v9;
  while ( v10 != a3 )
  {
    if ( v10 - 8 >= a1 && (unsigned __int64)(v10 - 8) < v5 )
    {
      DbgPrintEx(
        0,
        0,
        "EX: ExFreePool( %p, %Ix ) contains a lookaside structure that has not been deleted first\n",
        a1,
        v8);
      __debugbreak();
    }
    v10 = (_QWORD *)*v10;
  }
  KxReleaseSpinLock(a4);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  return result;
}
