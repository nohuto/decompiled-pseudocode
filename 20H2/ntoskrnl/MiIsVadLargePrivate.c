/*
 * XREFs of MiIsVadLargePrivate @ 0x14030DCC4
 * Callers:
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MiCheckUserVirtualAddress @ 0x1402B1E10 (MiCheckUserVirtualAddress.c)
 *     MiPrefetchJumpVad @ 0x1405379CC (MiPrefetchJumpVad.c)
 *     MiRemoveVad @ 0x140553AF0 (MiRemoveVad.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140557858 (MiCloneVads.c)
 *     MiScrubProcessLargePages @ 0x140562A24 (MiScrubProcessLargePages.c)
 *     MiAllocateChildVads @ 0x1408DB2D0 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408DBD68 (MiDeletePartialCloneVads.c)
 *     MiMapChildLargePageVads @ 0x1408DC1A0 (MiMapChildLargePageVads.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x14027F1D0 (MiVadMapsLargeImage.c)
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
