/*
 * XREFs of MiOkToShrinkPageFiles @ 0x140296CDC
 * Callers:
 *     MiContractPagingFiles @ 0x140296C40 (MiContractPagingFiles.c)
 *     MiAttemptPageFileReduction @ 0x140542908 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileReductionApc @ 0x140542AD0 (MiAttemptPageFileReductionApc.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiOkToShrinkPageFiles(unsigned __int64 a1, unsigned __int64 a2)
{
  return a1 + 0x8000 < (((a2 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL)
      && a1 + 0x8000 > a1;
}
