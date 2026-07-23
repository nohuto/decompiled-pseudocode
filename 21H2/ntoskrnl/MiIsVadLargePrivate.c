/*
 * XREFs of MiIsVadLargePrivate @ 0x14022B870
 * Callers:
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiCheckUserVirtualAddress @ 0x140339750 (MiCheckUserVirtualAddress.c)
 *     MiPrefetchJumpVad @ 0x14053970C (MiPrefetchJumpVad.c)
 *     MiRemoveVad @ 0x140555800 (MiRemoveVad.c)
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140559568 (MiCloneVads.c)
 *     MiScrubProcessLargePages @ 0x140564734 (MiScrubProcessLargePages.c)
 *     MiAllocateChildVads @ 0x1408D8BF0 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D9688 (MiDeletePartialCloneVads.c)
 *     MiMapChildLargePageVads @ 0x1408D9AC0 (MiMapChildLargePageVads.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x1402C1520 (MiVadMapsLargeImage.c)
 */

__int64 __fastcall MiIsVadLargePrivate(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x100000) != 0 && ((v1 & 0x400000) != 0 || (v1 & 0xC0000u) >= 0x80000) )
    return 1LL;
  result = MiVadMapsLargeImage();
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
