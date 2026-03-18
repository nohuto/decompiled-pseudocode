/*
 * XREFs of MiReducePteUseCount @ 0x1403ED870
 * Callers:
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiDeletePteList @ 0x1402939C0 (MiDeletePteList.c)
 *     MiDecommitLargePte @ 0x1405370C0 (MiDecommitLargePte.c)
 * Callees:
 *     MiGetUsedPtesHandle @ 0x14029EEF0 (MiGetUsedPtesHandle.c)
 *     MiDecreaseUsedPtesCount @ 0x140311760 (MiDecreaseUsedPtesCount.c)
 */

_BOOL8 __fastcall MiReducePteUseCount(__int64 a1, unsigned int a2)
{
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v4; // r8

  UsedPtesHandle = MiGetUsedPtesHandle(a1 << 25 >> 16);
  return (unsigned int)MiDecreaseUsedPtesCount(UsedPtesHandle, a2, v4) == 0;
}
