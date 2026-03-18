/*
 * XREFs of MiReducePteUseCount @ 0x1403F2D98
 * Callers:
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiDeletePteList @ 0x1402C0040 (MiDeletePteList.c)
 *     MiDecommitLargePte @ 0x14053B0E0 (MiDecommitLargePte.c)
 * Callees:
 *     MiGetUsedPtesHandle @ 0x1402CC840 (MiGetUsedPtesHandle.c)
 *     MiDecreaseUsedPtesCount @ 0x14031FD54 (MiDecreaseUsedPtesCount.c)
 */

_BOOL8 __fastcall MiReducePteUseCount(__int64 a1, unsigned int a2)
{
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v4; // r8

  UsedPtesHandle = MiGetUsedPtesHandle(a1 << 25 >> 16);
  return (unsigned int)MiDecreaseUsedPtesCount(UsedPtesHandle, a2, v4) == 0;
}
