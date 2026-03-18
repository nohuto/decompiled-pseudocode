/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x1402B3FC0
 * Callers:
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     MiIssueHardFault @ 0x1402B4770 (MiIssueHardFault.c)
 *     MiUnlockWsle @ 0x1402B6FC0 (MiUnlockWsle.c)
 *     MmCopyMemory @ 0x1403028D0 (MmCopyMemory.c)
 *     MiPrefetchRestOfCluster @ 0x140320F64 (MiPrefetchRestOfCluster.c)
 *     MiPrivateFixup @ 0x140344248 (MiPrivateFixup.c)
 *     MiInitializeImageProtos @ 0x14034BA9C (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x14034BFA0 (MiGetPageForHeader.c)
 *     MiSetPagesModified @ 0x14052F590 (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x1405343F4 (MiSwitchToTransition.c)
 *     NtSetInformationVirtualMemory @ 0x14063BA60 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x140655CD0 (MmPrefetchVirtualAddresses.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x1402261C0 (PsGetPagePriorityThread.c)
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
