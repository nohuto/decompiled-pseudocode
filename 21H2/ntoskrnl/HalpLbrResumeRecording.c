/*
 * XREFs of HalpLbrResumeRecording @ 0x14021DAE0
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall HalpLbrResumeRecording(char a1)
{
  unsigned __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v6; // r8
  int v7; // eax
  bool v8; // zf

  result = (unsigned int)HalpLbrIsInUse;
  if ( HalpLbrIsInUse )
  {
    if ( a1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
      }
      __writemsr(0x1C8u, (unsigned int)HalpLbrSelectFlags);
      __writemsr(0x1C9u, (unsigned int)(HalpLbrStackSize - 1));
      __writemsr(0x1D9u, __readmsr(0x1D9u) | 0x801);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v4 = KeGetCurrentIrql();
          if ( v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v6 = CurrentPrcb->SchedulerAssist;
            v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v8 = (v7 & v6[5]) == 0;
            v6[5] &= v7;
            if ( v8 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
    else
    {
      result = __readmsr(0x1D9u);
      if ( (result & 1) == 0 )
      {
        result |= 1uLL;
        __writemsr(0x1D9u, result);
      }
      if ( !HalpLbrIsFreezeLegacy )
      {
        result = __readmsr(0x38Eu);
        if ( (result & 0x400000000000000LL) != 0 )
        {
          result = 0LL;
          __writemsr(0x390u, 0x400000000000000uLL);
        }
      }
    }
  }
  return result;
}
