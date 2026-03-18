/*
 * XREFs of MiIsVadLargePrivate @ 0x14033B264
 * Callers:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiCheckUserVirtualAddress @ 0x140259610 (MiCheckUserVirtualAddress.c)
 *     MiPrefetchJumpVad @ 0x140533FFC (MiPrefetchJumpVad.c)
 *     MiRemoveVad @ 0x140550120 (MiRemoveVad.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140553E88 (MiCloneVads.c)
 *     MiScrubProcessLargePages @ 0x14055F054 (MiScrubProcessLargePages.c)
 *     MiAllocateChildVads @ 0x1408D5490 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D5F28 (MiDeletePartialCloneVads.c)
 *     MiMapChildLargePageVads @ 0x1408D6360 (MiMapChildLargePageVads.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x140213440 (MiVadMapsLargeImage.c)
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
