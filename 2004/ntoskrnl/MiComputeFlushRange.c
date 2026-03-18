/*
 * XREFs of MiComputeFlushRange @ 0x1402C2758
 * Callers:
 *     MmFlushSection @ 0x1402C25C4 (MmFlushSection.c)
 *     MmTrimSection @ 0x14031E698 (MmTrimSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiComputeDataFlushRange @ 0x140248960 (MiComputeDataFlushRange.c)
 *     MiLockSectionControlArea @ 0x1402C280C (MiLockSectionControlArea.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x140330084 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiComputeFlushRange(__int64 a1, _QWORD *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // r11
  unsigned __int8 v11; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17[24]; // [rsp+30h] [rbp-18h] BYREF

  v17[0] = 0;
  v8 = MiLockSectionControlArea(a1, 1LL, v17);
  v9 = v8;
  if ( v8 )
  {
    if ( (!a4 || (unsigned int)MiDoesControlAreaHaveUserWritableReferences(v8))
      && (*(_DWORD *)(v9 + 56) & 3) == 0
      && *(_QWORD *)(v9 + 32) )
    {
      return MiComputeDataFlushRange(v9, v17[0], a2, a3, 0, a5);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v11 = v17[0];
      if ( v17[0] <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = v17[0];
        v15 = ~(unsigned __int16)(-1LL << (v17[0] + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v11 = v17[0];
    }
    __writecr8(v11);
  }
  return 0LL;
}
