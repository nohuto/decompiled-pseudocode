/*
 * XREFs of MiReducePteUseCount @ 0x14023210C
 * Callers:
 *     MiDeletePteList @ 0x1402C3BA0 (MiDeletePteList.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     MiDecommitLargePte @ 0x140597940 (MiDecommitLargePte.c)
 * Callees:
 *     MiDecreaseUsedPtesCount @ 0x140232154 (MiDecreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x1402D03D0 (MiGetUsedPtesHandle.c)
 */

_BOOL8 __fastcall MiReducePteUseCount(__int64 a1, unsigned int a2)
{
  ULONG_PTR UsedPtesHandle; // rax

  UsedPtesHandle = MiGetUsedPtesHandle(a1 << 25 >> 16);
  return (unsigned int)MiDecreaseUsedPtesCount(UsedPtesHandle, a2) == 0;
}
