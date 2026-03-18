/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x14025AF90
 * Callers:
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     MiIssueHardFault @ 0x14025B740 (MiIssueHardFault.c)
 *     MiUnlockWsle @ 0x14025DF90 (MiUnlockWsle.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiInitializeImageProtos @ 0x14031C75C (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x14031CC60 (MiGetPageForHeader.c)
 *     MmCopyMemory @ 0x14033F6D0 (MmCopyMemory.c)
 *     MiPrefetchRestOfCluster @ 0x14035EA24 (MiPrefetchRestOfCluster.c)
 *     MiSetPagesModified @ 0x14052FBE0 (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x140534A44 (MiSwitchToTransition.c)
 *     NtSetInformationVirtualMemory @ 0x140606910 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x1406D0330 (MmPrefetchVirtualAddresses.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x1402B8E40 (PsGetPagePriorityThread.c)
 */

__int64 __fastcall MiGetEffectivePagePriorityThread(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 1304);
  if ( (v1 & 0x100) != 0 )
    return (v1 >> 9) & 7;
  else
    return PsGetPagePriorityThread();
}
