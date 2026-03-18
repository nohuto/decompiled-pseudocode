/*
 * XREFs of MiIsPteInStore @ 0x140314E74
 * Callers:
 *     MiFinishHardFault @ 0x14022AA00 (MiFinishHardFault.c)
 *     MiUpdatePfnPriorityByPte @ 0x140236580 (MiUpdatePfnPriorityByPte.c)
 *     MiUpdatePfnPriority @ 0x1402501B0 (MiUpdatePfnPriority.c)
 *     MiPfPutPagesInTransition @ 0x1402611B0 (MiPfPutPagesInTransition.c)
 *     MiComputeFaultCluster @ 0x140311F14 (MiComputeFaultCluster.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 *     MiResolveProtoCombine @ 0x1403688A4 (MiResolveProtoCombine.c)
 *     MiCheckCommitReleaseFromVad @ 0x140525C3C (MiCheckCommitReleaseFromVad.c)
 *     MiMakeOutswappedPageResident @ 0x1405265F0 (MiMakeOutswappedPageResident.c)
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
