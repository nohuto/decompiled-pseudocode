/*
 * XREFs of MiIsVadLargePrivate @ 0x1402FE744
 * Callers:
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiCheckUserVirtualAddress @ 0x1402B2640 (MiCheckUserVirtualAddress.c)
 *     MiPrefetchJumpVad @ 0x1405339AC (MiPrefetchJumpVad.c)
 *     MiRemoveVad @ 0x14054FAD0 (MiRemoveVad.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140553838 (MiCloneVads.c)
 *     MiScrubProcessLargePages @ 0x14055EA04 (MiScrubProcessLargePages.c)
 *     MiAllocateChildVads @ 0x1408D4140 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D4BD8 (MiDeletePartialCloneVads.c)
 *     MiMapChildLargePageVads @ 0x1408D5010 (MiMapChildLargePageVads.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x14026C490 (MiVadMapsLargeImage.c)
 */

_BOOL8 __fastcall MiIsVadLargePrivate(__int64 a1)
{
  int v1; // eax
  _BOOL8 result; // rax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x100000) != 0 && ((v1 & 0x400000) != 0 || (v1 & 0xC0000u) >= 0x80000) )
    return 1LL;
  result = MiVadMapsLargeImage(a1);
  if ( result )
    return 1LL;
  return result;
}
