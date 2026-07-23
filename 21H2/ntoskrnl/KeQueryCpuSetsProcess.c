/*
 * XREFs of KeQueryCpuSetsProcess @ 0x14051C894
 * Callers:
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140327620 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiGetProcessCpuSetMaskPointer @ 0x1403C6510 (KiGetProcessCpuSetMaskPointer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryCpuSetsProcess(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  unsigned int v6; // ebp
  __int64 ProcessCpuSetMaskPointer; // r12
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  unsigned int v10; // ebx
  __int64 v11; // r12
  __int64 v12; // rdx
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  unsigned int v19; // [rsp+60h] [rbp+18h] BYREF

  v19 = 0;
  v6 = 20;
  ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, a4, &v19);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v10 = v19;
  if ( v19 > 0x14 || (v6 = v19) != 0 )
  {
    v11 = ProcessCpuSetMaskPointer - (_QWORD)a2;
    v12 = v6;
    do
    {
      *a2 = *(_QWORD *)((char *)a2 + v11);
      ++a2;
      --v12;
    }
    while ( v12 );
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        v10 = v19;
      }
    }
  }
  __writecr8(CurrentIrql);
  return v10;
}
