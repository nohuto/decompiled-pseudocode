/*
 * XREFs of MiSystemImageHasPrivateFixups @ 0x140279474
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiOffsetToProtos @ 0x140286F90 (MiOffsetToProtos.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiSystemImageHasPrivateFixups(unsigned __int64 a1, _QWORD *a2, _DWORD *a3, __int64 a4)
{
  int SystemRegionType; // eax
  unsigned __int64 v8; // rdi
  KIRQL v9; // al
  __int64 *v10; // r9
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rbx
  __int64 v15; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v19; // edx
  bool v20; // zf
  __int64 v21; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0;
  *a2 = 0LL;
  if ( (__int64 *)qword_140C4F480 == &qword_140C4F480 )
    return 0LL;
  SystemRegionType = MiGetSystemRegionType(a1, a2, a3, a4);
  if ( SystemRegionType != 12 && SystemRegionType != 1 )
    return 0LL;
  v8 = 0LL;
  v9 = ExAcquireSpinLockShared(&dword_140C4F4A4);
  v10 = (__int64 *)qword_140C4F480;
  v11 = v9;
  while ( v10 != &qword_140C4F480 )
  {
    v12 = v10[2];
    if ( a1 >= v12 && a1 <= v10[3] )
    {
      v13 = (a1 - v12) >> 12;
      if ( _bittest(*(const signed __int32 **)(v10[5] + 8), v13) )
      {
        v21 = 0LL;
        v8 = v12 - v10[4];
        v15 = v10[6];
        *a3 = v13;
        *a2 = MiOffsetToProtos(v15, (unsigned __int64)(unsigned int)v13 << 12, &v21);
      }
      break;
    }
    v10 = (__int64 *)*v10;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4F4A4);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v20 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  return v8;
}
