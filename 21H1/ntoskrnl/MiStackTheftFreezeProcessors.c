/*
 * XREFs of MiStackTheftFreezeProcessors @ 0x14053080C
 * Callers:
 *     MiJumpStackTarget @ 0x140530530 (MiJumpStackTarget.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403A1600 (KeIpiGenericCall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiStackTheftFreezeProcessors(ULONG_PTR Context, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  ULONG ActiveProcessorCount; // eax
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  __int64 result; // rax

  v5 = 48LL * *(_QWORD *)(Context + 8) - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v5, a2, a3, a4);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  *(_DWORD *)(Context + 76) = ActiveProcessorCount;
  *(_DWORD *)(Context + 72) = ActiveProcessorCount;
  KeIpiGenericCall(MiStackTheftIsr, Context);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
