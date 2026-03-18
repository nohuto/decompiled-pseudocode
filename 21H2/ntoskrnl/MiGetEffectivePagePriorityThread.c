/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x1402E670C
 * Callers:
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiPrefetchRestOfCluster @ 0x14025868C (MiPrefetchRestOfCluster.c)
 *     MmCopyMemory @ 0x14026BBB0 (MmCopyMemory.c)
 *     MiIssueHardFault @ 0x14027A1F0 (MiIssueHardFault.c)
 *     MiInitializeImageProtos @ 0x1402E4474 (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x1402E57FC (MiGetPageForHeader.c)
 *     MiUnlockWsle @ 0x1402E599C (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiSetPagesModified @ 0x14058D310 (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 *     MmPrefetchVirtualAddresses @ 0x1406EBFB0 (MmPrefetchVirtualAddresses.c)
 *     NtSetInformationVirtualMemory @ 0x140753430 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x14033D720 (PsGetPagePriorityThread.c)
 */

__int64 __fastcall MiGetEffectivePagePriorityThread(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 1384);
  if ( (v1 & 0x100) != 0 )
    return (v1 >> 9) & 7;
  else
    return PsGetPagePriorityThread(a1);
}
