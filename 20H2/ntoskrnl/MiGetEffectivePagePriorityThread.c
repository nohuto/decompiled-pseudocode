/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x1402D1080
 * Callers:
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MmCopyMemory @ 0x1402513F0 (MmCopyMemory.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiIssueHardFault @ 0x1402CFFA0 (MiIssueHardFault.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MiUnlockWsle @ 0x1402D3E4C (MiUnlockWsle.c)
 *     MiPrefetchRestOfCluster @ 0x14032F714 (MiPrefetchRestOfCluster.c)
 *     MiInitializeImageProtos @ 0x140350EE8 (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x140351198 (MiGetPageForHeader.c)
 *     MiSetPagesModified @ 0x1405335B0 (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x140538414 (MiSwitchToTransition.c)
 *     NtSetInformationVirtualMemory @ 0x14062AB80 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x1406F0920 (MmPrefetchVirtualAddresses.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x14028EE10 (PsGetPagePriorityThread.c)
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
