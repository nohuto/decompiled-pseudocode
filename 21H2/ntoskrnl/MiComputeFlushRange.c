/*
 * XREFs of MiComputeFlushRange @ 0x140274890
 * Callers:
 *     MmFlushSection @ 0x1402746FC (MmFlushSection.c)
 *     MmTrimSection @ 0x1402EF648 (MmTrimSection.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x140274944 (MiLockSectionControlArea.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x14029F9C4 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     MiComputeDataFlushRange @ 0x1403152C0 (MiComputeDataFlushRange.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiComputeFlushRange(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // r11
  unsigned __int8 v12; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v16; // eax
  bool v17; // zf
  char v18[24]; // [rsp+30h] [rbp-18h] BYREF

  v18[0] = 0;
  v8 = MiLockSectionControlArea(a1, 1LL, v18);
  v10 = v8;
  if ( v8 )
  {
    if ( (!a4 || (unsigned int)MiDoesControlAreaHaveUserWritableReferences(v8))
      && (*(_DWORD *)(v10 + 56) & 3) == 0
      && *(_QWORD *)(v10 + 32) )
    {
      LOBYTE(v9) = v18[0];
      return MiComputeDataFlushRange(v10, v9, a2, a3, 0, a5);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v12 = v18[0];
      if ( v18[0] <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = v18[0];
        v16 = ~(unsigned __int16)(-1LL << (v18[0] + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v12 = v18[0];
    }
    __writecr8(v12);
  }
  return 0LL;
}
