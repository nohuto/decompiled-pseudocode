/*
 * XREFs of MmUpdateSectionIoAttribution @ 0x14028A198
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140331C70 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x140274944 (MiLockSectionControlArea.c)
 *     IoDiskIoAttributionDereference @ 0x14028A7B4 (IoDiskIoAttributionDereference.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmUpdateSectionIoAttribution(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdx
  KIRQL v6; // bl
  __int64 v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  KIRQL v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0;
  v3 = 0LL;
  result = MiLockSectionControlArea(a1, 1, &v13);
  v5 = result;
  if ( result )
  {
    if ( a2 != 8LL * *(_QWORD *)(result + 120) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 32)) <= 1 )
        __fastfail(0xEu);
      v7 = *(_QWORD *)(result + 120);
      v3 = 8 * v7;
      *(_QWORD *)(v5 + 120) = (a2 >> 3) | v7 & 0xE000000000000000uLL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v6 = v13;
      if ( v13 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v6 = v13;
        v11 = ~(unsigned __int16)(-1LL << (v13 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v6 = v13;
    }
    result = v6;
    __writecr8(v6);
    if ( v3 )
      return IoDiskIoAttributionDereference(v3);
  }
  return result;
}
