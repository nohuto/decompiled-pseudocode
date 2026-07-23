/*
 * XREFs of KiEnumerateNmiSxCallback @ 0x140380994
 * Callers:
 *     KiEnumerateCallback @ 0x140380930 (KiEnumerateCallback.c)
 *     KeIsNmiCallbackRegistered @ 0x140514480 (KeIsNmiCallbackRegistered.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiEnumerateNmiSxCallback(PVOID **a1, unsigned __int8 *a2, _QWORD *a3)
{
  unsigned __int8 CurrentIrql; // r10
  PVOID *v5; // rax
  PVOID *v6; // r11
  PVOID *v7; // rcx
  __int64 result; // rax
  unsigned __int64 v9; // rbx
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // r9
  int v12; // eax
  _DWORD *v13; // r8
  bool v14; // zf

  CurrentIrql = KeGetCurrentIrql();
  v5 = *a1;
  v6 = &KiNmiCallbackListHead;
  if ( *a1 == &KiNmiCallbackListHead )
    goto LABEL_9;
  if ( v5 )
    goto LABEL_6;
  if ( CurrentIrql < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
    }
  }
  *a2 = CurrentIrql;
  v5 = (PVOID *)KiNmiCallbackListHead;
  if ( KiNmiCallbackListHead )
  {
LABEL_6:
    *a3 = v5[1];
    v7 = (PVOID *)*v5;
    result = 1LL;
    if ( v7 )
      v6 = v7;
    *a1 = v6;
  }
  else
  {
LABEL_9:
    v9 = *a2;
    if ( (unsigned __int8)v9 < 2u )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v13 = CurrentPrcb->SchedulerAssist;
          v14 = (v12 & v13[5]) == 0;
          v13[5] &= v12;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v9);
    }
    return 0LL;
  }
  return result;
}
