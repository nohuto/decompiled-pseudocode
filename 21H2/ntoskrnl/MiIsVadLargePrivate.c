/*
 * XREFs of MiIsVadLargePrivate @ 0x14030FBE0
 * Callers:
 *     MiUserFault @ 0x14031CD90 (MiUserFault.c)
 *     MiCheckUserVirtualAddress @ 0x140353858 (MiCheckUserVirtualAddress.c)
 *     MiPrefetchJumpVad @ 0x140594ABC (MiPrefetchJumpVad.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1405B99AC (MiCloneVads.c)
 *     MiScrubProcessLargePages @ 0x1405C5930 (MiScrubProcessLargePages.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 *     MiAllocateChildVads @ 0x1409800F4 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140980B94 (MiDeletePartialCloneVads.c)
 *     MiMapChildLargePageVads @ 0x140980FA0 (MiMapChildLargePageVads.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsVadLargePrivate(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  return (v1 & 0x200000) != 0 && ((v1 & 0x800000) != 0 || (v1 & 0x180000u) >= 0x100000)
      || (v1 & 0x70) == 0x20 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0;
}
