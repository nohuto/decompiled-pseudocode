/*
 * XREFs of MiReducePteUseCount @ 0x1403F45E0
 * Callers:
 *     MiDeletePteList @ 0x1402D6070 (MiDeletePteList.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiDecommitLargePte @ 0x14053CE20 (MiDecommitLargePte.c)
 * Callees:
 *     MiDecreaseUsedPtesCount @ 0x14023F794 (MiDecreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x1403177B0 (MiGetUsedPtesHandle.c)
 */

_BOOL8 __fastcall MiReducePteUseCount(__int64 a1, unsigned int a2)
{
  ULONG_PTR UsedPtesHandle; // rax

  UsedPtesHandle = MiGetUsedPtesHandle(a1 << 25 >> 16);
  return (unsigned int)MiDecreaseUsedPtesCount(UsedPtesHandle, a2) == 0;
}
