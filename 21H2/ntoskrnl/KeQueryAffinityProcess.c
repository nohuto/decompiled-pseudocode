/*
 * XREFs of KeQueryAffinityProcess @ 0x14027DDB0
 * Callers:
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140327620 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryAffinityProcess(__int64 a1, _OWORD *a2, _DWORD *a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // bl
  _OWORD *v9; // r14
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  *a2 = *(_OWORD *)(a1 + 80);
  a2[1] = *(_OWORD *)(a1 + 96);
  a2[2] = *(_OWORD *)(a1 + 112);
  a2[3] = *(_OWORD *)(a1 + 128);
  a2[4] = *(_OWORD *)(a1 + 144);
  a2[5] = *(_OWORD *)(a1 + 160);
  a2[6] = *(_OWORD *)(a1 + 176);
  v9 = a2 + 8;
  *(v9 - 1) = *(_OWORD *)(a1 + 192);
  *v9 = *(_OWORD *)(a1 + 208);
  v9[1] = *(_OWORD *)(a1 + 224);
  *((_QWORD *)v9 + 4) = *(_QWORD *)(a1 + 240);
  if ( a3 )
    *a3 = *(_DWORD *)(a1 + 636);
  if ( a4 )
  {
    *(_OWORD *)a4 = *(_OWORD *)(a1 + 772);
    *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 788);
    *(_QWORD *)(a4 + 32) = *(_QWORD *)(a1 + 804);
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
