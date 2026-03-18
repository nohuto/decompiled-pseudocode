/*
 * XREFs of MiGetPteMappingPair @ 0x14055DB0C
 * Callers:
 *     MiSlowRotateCopy @ 0x1405341DC (MiSlowRotateCopy.c)
 * Callees:
 *     MiCreatePteCopyList @ 0x1402244A8 (MiCreatePteCopyList.c)
 *     MiAllocateHyperSpace @ 0x1402FF124 (MiAllocateHyperSpace.c)
 */

__int64 __fastcall MiGetPteMappingPair(int a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 HyperSpace; // rax

  if ( a1 != 1 || (result = MiCreatePteCopyList(2uLL, 2uLL, a2), !*(_DWORD *)(a2 + 4)) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    *(_BYTE *)(a2 + 8) = CurrentIrql;
    HyperSpace = MiAllocateHyperSpace(2uLL);
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 2;
    result = ((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_BYTE *)(a2 + 9) = 1;
    *(_QWORD *)(a2 + 16) = result;
  }
  return result;
}
