/*
 * XREFs of MiSystemImageHasPrivateFixups @ 0x14033B124
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiSystemImageHasPrivateFixups(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  int SystemRegionType; // eax
  unsigned __int64 v7; // rdi
  KIRQL v8; // al
  __int64 *v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v17; // edx
  bool v18; // zf

  *a3 = 0;
  *a2 = 0LL;
  if ( (__int64 *)qword_140C4CAC0 == &qword_140C4CAC0 )
    return 0LL;
  SystemRegionType = MiGetSystemRegionType(a1);
  if ( SystemRegionType != 12 && SystemRegionType != 1 )
    return 0LL;
  v7 = 0LL;
  v8 = ExAcquireSpinLockShared(&dword_140C4CAE4);
  v9 = (__int64 *)qword_140C4CAC0;
  v10 = v8;
  while ( v9 != &qword_140C4CAC0 )
  {
    v11 = v9[2];
    if ( a1 >= v11 && a1 <= v9[3] )
    {
      v12 = (a1 - v11) >> 12;
      if ( _bittest(*(const signed __int32 **)(v9[5] + 8), v12) )
      {
        v7 = v11 - v9[4];
        *a2 = v9[6];
        *a3 = v12;
      }
      break;
    }
    v9 = (__int64 *)*v9;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4CAE4);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  return v7;
}
