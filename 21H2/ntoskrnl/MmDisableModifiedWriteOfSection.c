/*
 * XREFs of MmDisableModifiedWriteOfSection @ 0x140248110
 * Callers:
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x14028494C (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmDisableModifiedWriteOfSection(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rax
  unsigned __int8 v3; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf
  unsigned __int8 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  v1 = 1;
  v2 = MiLockSectionControlArea(a1, 1LL, &v10);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 40) )
      v1 = (*(_DWORD *)(v2 + 56) & 8) != 0;
    else
      *(_DWORD *)(v2 + 56) |= 8u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v3 = v10;
      if ( v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v3 = v10;
        v7 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v8 = (v7 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v7;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v3 = v10;
    }
    __writecr8(v3);
    LOBYTE(v2) = v1;
  }
  return v2;
}
