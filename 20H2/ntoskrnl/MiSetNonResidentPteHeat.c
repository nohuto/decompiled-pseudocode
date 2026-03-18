/*
 * XREFs of MiSetNonResidentPteHeat @ 0x140349540
 * Callers:
 *     MiDecrementAndInsertStandbyPages @ 0x1402AF7F0 (MiDecrementAndInsertStandbyPages.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiDeletePteList @ 0x1402C0040 (MiDeletePteList.c)
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140346EE4 (MiRewriteTrimPteAsDemandZero.c)
 *     MiTransferSoftwarePte @ 0x140347114 (MiTransferSoftwarePte.c)
 *     MiReservePageFileSpaceForPage @ 0x1403486C0 (MiReservePageFileSpaceForPage.c)
 *     MiAllocateKernelStackPages @ 0x140348E30 (MiAllocateKernelStackPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140349C1C (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmSetPfnListInfo @ 0x140372878 (MmSetPfnListInfo.c)
 *     MiMakeTransitionHeatBatch @ 0x14055DFA0 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetNonResidentPteHeat(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  unsigned __int64 result; // rax

  v2 = *a1;
  v3 = 0LL;
  if ( (*a1 & 0x400) != 0 )
  {
    if ( a2 )
      v3 = 2048LL;
    result = v3 | v2 & 0xFFFFFFFFFFFFF7FFuLL;
    *a1 = result;
  }
  else
  {
    if ( a2 )
      v3 = 8LL;
    result = v3 | v2 & 0xFFFFFFFFFFFFFFF7uLL;
    *a1 = result;
  }
  return result;
}
