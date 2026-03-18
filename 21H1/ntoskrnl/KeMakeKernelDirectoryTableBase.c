/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x140328594
 * Callers:
 *     KiInSwapProcesses @ 0x1402445C8 (KiInSwapProcesses.c)
 *     MiReplaceTransitionPage @ 0x14034B1EC (MiReplaceTransitionPage.c)
 *     MmStealTopLevelPage @ 0x140384D68 (MmStealTopLevelPage.c)
 *     MiSwapNumaStandbyPage @ 0x14054B8E0 (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x1406F0E98 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
