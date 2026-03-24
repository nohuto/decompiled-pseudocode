/*
 * XREFs of MiIsPteInStore @ 0x14028BE40
 * Callers:
 *     MiFinishHardFault @ 0x140239890 (MiFinishHardFault.c)
 *     MiUpdatePfnPriority @ 0x140270DA4 (MiUpdatePfnPriority.c)
 *     MiResolvePageFileFault @ 0x14028AF68 (MiResolvePageFileFault.c)
 *     MiComputeFaultCluster @ 0x14028DF24 (MiComputeFaultCluster.c)
 *     MiPfPutPagesInTransition @ 0x1402FB620 (MiPfPutPagesInTransition.c)
 *     MiUpdatePfnPriorityByPte @ 0x14032BF10 (MiUpdatePfnPriorityByPte.c)
 *     MiResolveProtoCombine @ 0x14036AB34 (MiResolveProtoCombine.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052B10C (MiCheckCommitReleaseFromVad.c)
 *     MiMakeOutswappedPageResident @ 0x14052BAC0 (MiMakeOutswappedPageResident.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPteInStore(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( (a2 & 4) == 0 || a2 >> 12 != *(_DWORD *)(a1 + 1156) )
    return 0LL;
  return result;
}
