/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x1402E4380
 * Callers:
 *     KiInSwapProcesses @ 0x14024A538 (KiInSwapProcesses.c)
 *     MiReplaceTransitionPage @ 0x14026D370 (MiReplaceTransitionPage.c)
 *     MmStealTopLevelPage @ 0x1403885D8 (MmStealTopLevelPage.c)
 *     MiSwapNumaStandbyPage @ 0x1405513D0 (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x1406D04E4 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
