/*
 * XREFs of MiReducePteUseCount @ 0x1403F45E0
 * Callers:
 *     MiDeletePteList @ 0x140231820 (MiDeletePteList.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     MiDecommitLargePte @ 0x14053CBE0 (MiDecommitLargePte.c)
 * Callees:
 *     MiDecreaseUsedPtesCount @ 0x1402C12F4 (MiDecreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14030CA60 (MiGetUsedPtesHandle.c)
 */

_BOOL8 __fastcall MiReducePteUseCount(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v4; // r8

  v2 = a2;
  UsedPtesHandle = MiGetUsedPtesHandle(a1 << 25 >> 16, a2);
  return (unsigned int)MiDecreaseUsedPtesCount(UsedPtesHandle, v2, v4) == 0;
}
