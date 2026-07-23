/*
 * XREFs of HalpLbrConfigureProcessor @ 0x1404DD580
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall HalpLbrConfigureProcessor(ULONG_PTR Argument)
{
  unsigned int v1; // r11d
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned int v4; // r8d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v10; // r9
  int v11; // eax
  bool v12; // zf

  v1 = HalpLbrStackSize - 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  if ( Argument )
  {
    __writemsr(0x1C9u, v1);
    if ( HalpLbrStackSize )
    {
      v4 = 1728;
      do
      {
        __writemsr(v4 - 64, 0LL);
        __writemsr(v4++, 0LL);
      }
      while ( v4 - 1728 < HalpLbrStackSize );
    }
    __writemsr(0x1C8u, (unsigned int)HalpLbrSelectFlags);
    v5 = __readmsr(0x1D9u);
    v6 = ((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5 | 0x801;
  }
  else
  {
    __writemsr(0x1C8u, 0LL);
    v7 = __readmsr(0x1D9u);
    v6 = ((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7 & 0xFFFFF7FE;
  }
  __writemsr(0x1D9u, v6);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  _InterlockedDecrement(&HalpLbrSyncBarrier);
  return 0LL;
}
