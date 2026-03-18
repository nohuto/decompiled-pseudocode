/*
 * XREFs of MiUpdateDriverLoadInProgress @ 0x1402D8E2C
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 * Callees:
 *     MmLockLoadedModuleListExclusive @ 0x1402D8E9C (MmLockLoadedModuleListExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateDriverLoadInProgress(__int64 a1, int a2)
{
  unsigned __int8 v4; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  unsigned __int8 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0;
  MmLockLoadedModuleListExclusive(&v11);
  if ( a2 )
    a1 = 0LL;
  qword_140C4F5E0 = a1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v4 = v11;
    if ( v11 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v4 = v11;
      v9 = ~(unsigned __int16)(-1LL << (v11 + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v4 = v11;
  }
  result = v4;
  __writecr8(v4);
  return result;
}
