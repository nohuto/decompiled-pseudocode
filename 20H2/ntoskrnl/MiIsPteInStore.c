/*
 * XREFs of MiIsPteInStore @ 0x14023AE70
 * Callers:
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiUpdatePfnPriorityByPte @ 0x1402AF320 (MiUpdatePfnPriorityByPte.c)
 *     MiFinishHardFault @ 0x1402C80B0 (MiFinishHardFault.c)
 *     MiUpdatePfnPriority @ 0x1402D3D44 (MiUpdatePfnPriority.c)
 *     MiComputeFaultCluster @ 0x1403177D4 (MiComputeFaultCluster.c)
 *     MiResolveProtoCombine @ 0x14036A884 (MiResolveProtoCombine.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052960C (MiCheckCommitReleaseFromVad.c)
 *     MiMakeOutswappedPageResident @ 0x140529FC0 (MiMakeOutswappedPageResident.c)
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
