/*
 * XREFs of MmUnlockLoadedModuleListShared @ 0x1402DC05C
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x140297AE0 (RtlpxLookupFunctionTable.c)
 *     MmIsSessionExecutionValid @ 0x1402DBFAC (MmIsSessionExecutionValid.c)
 *     RtlPcToFileName @ 0x1403D6E30 (RtlPcToFileName.c)
 *     MiIsAddressInDriverView @ 0x140595F4C (MiIsAddressInDriverView.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MmUnlockLoadedModuleListShared(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v4; // eax
  bool v5; // zf

  v1 = a1;
  ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( (unsigned __int8)v1 < 0xFu )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v4 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
      v5 = (v4 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v4;
      if ( v5 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v1);
  }
}
