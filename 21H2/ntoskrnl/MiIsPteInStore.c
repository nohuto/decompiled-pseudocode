/*
 * XREFs of MiIsPteInStore @ 0x140232E74
 * Callers:
 *     MiComputeFaultCluster @ 0x140232BE4 (MiComputeFaultCluster.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiUpdatePfnPriority @ 0x14027428C (MiUpdatePfnPriority.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140316E90 (MiUpdatePfnForPrefetchByPte.c)
 *     MiMakeFaultPfnActive @ 0x140339240 (MiMakeFaultPfnActive.c)
 *     MiResolveProtoCombine @ 0x14033A920 (MiResolveProtoCombine.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14038E608 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiCheckCommitReleaseFromVad @ 0x14057FA8C (MiCheckCommitReleaseFromVad.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MiIsStandbyPageCorrupted @ 0x1405BC608 (MiIsStandbyPageCorrupted.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPteInStore(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( (a2 & 4) == 0 || a2 >> 12 != *(_DWORD *)(a1 + 1172) )
    return 0LL;
  return result;
}
