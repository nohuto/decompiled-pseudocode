/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x140270E84
 * Callers:
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     MiInitializeImageProtos @ 0x14026DF7C (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x14026E62C (MiGetPageForHeader.c)
 *     MiUnlockWsle @ 0x14026FC1C (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x140270060 (NtLockVirtualMemory.c)
 *     MiPrivateFixup @ 0x14028CA28 (MiPrivateFixup.c)
 *     MmCopyMemory @ 0x1402B48E0 (MmCopyMemory.c)
 *     MiPrefetchRestOfCluster @ 0x1402D1764 (MiPrefetchRestOfCluster.c)
 *     MiIssueHardFault @ 0x14030E9B0 (MiIssueHardFault.c)
 *     MiSetPagesModified @ 0x1405350B0 (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x140539F14 (MiSwitchToTransition.c)
 *     NtSetInformationVirtualMemory @ 0x14070F280 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x140710860 (MmPrefetchVirtualAddresses.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x1402427D0 (PsGetPagePriorityThread.c)
 */

__int64 __fastcall MiGetEffectivePagePriorityThread(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 1304);
  if ( (v1 & 0x100) != 0 )
    return (v1 >> 9) & 7;
  else
    return PsGetPagePriorityThread(a1);
}
