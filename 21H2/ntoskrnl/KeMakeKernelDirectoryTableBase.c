/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x14036C428
 * Callers:
 *     KiInSwapProcesses @ 0x14021119C (KiInSwapProcesses.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MmStealTopLevelPage @ 0x14036CD34 (MmStealTopLevelPage.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x1407F17B4 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
