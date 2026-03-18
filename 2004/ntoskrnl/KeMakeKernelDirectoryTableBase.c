/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x1402E2234
 * Callers:
 *     KiInSwapProcesses @ 0x140280CC8 (KiInSwapProcesses.c)
 *     MiReplaceTransitionPage @ 0x14031BEAC (MiReplaceTransitionPage.c)
 *     MmStealTopLevelPage @ 0x140385CD8 (MmStealTopLevelPage.c)
 *     MiSwapNumaStandbyPage @ 0x14054BF30 (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x1406ABD7C (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
