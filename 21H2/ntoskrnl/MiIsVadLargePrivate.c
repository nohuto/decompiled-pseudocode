/*
 * XREFs of MiIsVadLargePrivate @ 0x1402AD514
 * Callers:
 *     MiDeleteVad @ 0x14021BFF0 (MiDeleteVad.c)
 *     MiCheckUserVirtualAddress @ 0x14032EA00 (MiCheckUserVirtualAddress.c)
 *     MiPrefetchJumpVad @ 0x1405394CC (MiPrefetchJumpVad.c)
 *     MiRemoveVad @ 0x1405555C0 (MiRemoveVad.c)
 *     MiBuildForkPte @ 0x1405582BC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140559328 (MiCloneVads.c)
 *     MiScrubProcessLargePages @ 0x1405644F4 (MiScrubProcessLargePages.c)
 *     MiAllocateChildVads @ 0x1408D8A90 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D9528 (MiDeletePartialCloneVads.c)
 *     MiMapChildLargePageVads @ 0x1408D9960 (MiMapChildLargePageVads.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x14021CC20 (MiVadMapsLargeImage.c)
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
