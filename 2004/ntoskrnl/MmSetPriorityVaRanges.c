/*
 * XREFs of MmSetPriorityVaRanges @ 0x1408C4F5C
 * Callers:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140594134 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 * Callees:
 *     MiProcessVaRangesInfoClass @ 0x140700488 (MiProcessVaRangesInfoClass.c)
 */

__int64 __fastcall MmSetPriorityVaRanges(unsigned __int64 a1, __int128 *a2, unsigned int a3)
{
  return MiProcessVaRangesInfoClass(a1, a2, 1, a3);
}
