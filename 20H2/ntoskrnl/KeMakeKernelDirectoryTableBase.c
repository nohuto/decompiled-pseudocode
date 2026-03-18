/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x140335260
 * Callers:
 *     KiInSwapProcesses @ 0x14030A250 (KiInSwapProcesses.c)
 *     MiReplaceTransitionPage @ 0x140351C54 (MiReplaceTransitionPage.c)
 *     MmStealTopLevelPage @ 0x140387E78 (MmStealTopLevelPage.c)
 *     MiSwapNumaStandbyPage @ 0x14054F900 (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x1406ED8E8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
