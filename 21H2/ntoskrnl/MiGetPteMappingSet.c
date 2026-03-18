/*
 * XREFs of MiGetPteMappingSet @ 0x1402E8000
 * Callers:
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiSlowRotateCopy @ 0x1405952D8 (MiSlowRotateCopy.c)
 *     MiCopyMemoryPagefileData @ 0x140599780 (MiCopyMemoryPagefileData.c)
 *     MiFillPageWithImageExtentContents @ 0x14059E8F0 (MiFillPageWithImageExtentContents.c)
 * Callees:
 *     MiCreatePteCopyList @ 0x14024B428 (MiCreatePteCopyList.c)
 *     MiAllocateHyperSpace @ 0x1402E80DC (MiAllocateHyperSpace.c)
 */

__int64 __fastcall MiGetPteMappingSet(int a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r10
  unsigned __int64 HyperSpace; // rax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9

  if ( !a1 || KeGetCurrentIrql() >= 2u || (result = MiCreatePteCopyList(a2, 2 * (int)a2, a3), !*(_DWORD *)(a3 + 4)) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    *(_BYTE *)(a3 + 8) = CurrentIrql;
    HyperSpace = MiAllocateHyperSpace(a2);
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = a2;
    result = ((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_BYTE *)(a3 + 9) = 1;
    *(_QWORD *)(a3 + 16) = result;
  }
  return result;
}
