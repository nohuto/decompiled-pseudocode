/*
 * XREFs of MiIsPteInStore @ 0x1403441B4
 * Callers:
 *     MiFinishHardFault @ 0x140283A50 (MiFinishHardFault.c)
 *     MiUpdatePfnPriorityByPte @ 0x14028F5D0 (MiUpdatePfnPriorityByPte.c)
 *     MiUpdatePfnPriority @ 0x1402A91E0 (MiUpdatePfnPriority.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiComputeFaultCluster @ 0x1403409B8 (MiComputeFaultCluster.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     MiResolveProtoCombine @ 0x140367EE4 (MiResolveProtoCombine.c)
 *     MiCheckCommitReleaseFromVad @ 0x1405255EC (MiCheckCommitReleaseFromVad.c)
 *     MiMakeOutswappedPageResident @ 0x140525FA0 (MiMakeOutswappedPageResident.c)
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
