/*
 * XREFs of MiReducePteUseCount @ 0x1403EE930
 * Callers:
 *     MiDeletePteList @ 0x14023A990 (MiDeletePteList.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiDecommitLargePte @ 0x140537710 (MiDecommitLargePte.c)
 * Callees:
 *     MiGetUsedPtesHandle @ 0x140245EC0 (MiGetUsedPtesHandle.c)
 *     MiDecreaseUsedPtesCount @ 0x14034EF54 (MiDecreaseUsedPtesCount.c)
 */

_BOOL8 __fastcall MiReducePteUseCount(__int64 a1, unsigned int a2)
{
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v4; // r8

  UsedPtesHandle = MiGetUsedPtesHandle(a1 << 25 >> 16);
  return (unsigned int)MiDecreaseUsedPtesCount(UsedPtesHandle, a2, v4) == 0;
}
