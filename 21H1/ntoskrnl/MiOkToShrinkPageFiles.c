/*
 * XREFs of MiOkToShrinkPageFiles @ 0x1402D4D3C
 * Callers:
 *     MiContractPagingFiles @ 0x1402D4CA0 (MiContractPagingFiles.c)
 *     MiAttemptPageFileReduction @ 0x14053CDE8 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileReductionApc @ 0x14053CFB0 (MiAttemptPageFileReductionApc.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiOkToShrinkPageFiles(unsigned __int64 a1, unsigned __int64 a2)
{
  return a1 + 0x8000 < (((a2 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL)
      && a1 + 0x8000 > a1;
}
