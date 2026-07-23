/*
 * XREFs of MiAllocateCalibrationResultsMemory @ 0x1403B02F0
 * Callers:
 *     MiZeroPageCalibrate @ 0x1403AFF94 (MiZeroPageCalibrate.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

char __fastcall MiAllocateCalibrationResultsMemory(__int64 a1)
{
  int v1; // esi
  SIZE_T v3; // r14
  PVOID Pool; // rbp
  unsigned __int8 CurrentIrql; // di
  char result; // al
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  v1 = KeNumberProcessors_0;
  v3 = 16LL * (unsigned int)KeNumberProcessors_0;
  while ( 1 )
  {
    Pool = MiAllocatePool(64, v3, 0x20206D4Du);
    if ( !Pool )
      break;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      *((_DWORD *)CurrentPrcb->SchedulerAssist + 5) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
    }
    if ( v1 == (_DWORD)KeNumberProcessors_0 )
    {
      *(_QWORD *)(a1 + 32) = Pool;
      result = CurrentIrql;
      *(_DWORD *)(a1 + 4) = v1;
      *(_DWORD *)a1 = v1;
      return result;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v8 = KeGetCurrentIrql();
        if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
        {
          v9 = KeGetCurrentPrcb();
          SchedulerAssist = v9->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(v9);
        }
      }
    }
    __writecr8(CurrentIrql);
    ExFreePoolWithTag(Pool, 0);
  }
  *(_DWORD *)(a1 + 52) = -1073741670;
  return 17;
}
