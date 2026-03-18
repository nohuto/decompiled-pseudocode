/*
 * XREFs of MmOnlySystemCacheViewsPresent @ 0x140320648
 * Callers:
 *     CcCoherencyFlushAndPurgeCache @ 0x14031E5A0 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockSectionControlArea @ 0x1402C280C (MiLockSectionControlArea.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmOnlySystemCacheViewsPresent(_QWORD *a1)
{
  __int64 v1; // rax
  bool v2; // di
  KIRQL v3; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  KIRQL v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  v1 = MiLockSectionControlArea(a1, 1, &v10);
  if ( !v1 )
    return 1;
  v2 = *(_QWORD *)(v1 + 40) == *(unsigned int *)(v1 + 88);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v3 = v10;
    if ( v10 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v3 = v10;
      v8 = ~(unsigned __int16)(-1LL << (v10 + 1));
      v9 = (v8 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v3 = v10;
  }
  __writecr8(v3);
  return v2;
}
