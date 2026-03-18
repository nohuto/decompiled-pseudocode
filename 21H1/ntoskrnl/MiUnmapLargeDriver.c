/*
 * XREFs of MiUnmapLargeDriver @ 0x1408D5DF4
 * Callers:
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D5A80 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPdeAddress @ 0x1402AC8AC (MiGetPdeAddress.c)
 *     MiFreeContiguousPages @ 0x1402FA128 (MiFreeContiguousPages.c)
 *     MiUnmapLargePages @ 0x140391E04 (MiUnmapLargePages.c)
 *     MiReleasePrivilegedPtes @ 0x14075F128 (MiReleasePrivilegedPtes.c)
 */

__int64 __fastcall MiUnmapLargeDriver(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // r8

  PdeAddress = MiGetPdeAddress(a1);
  v5 = MI_READ_PTE_LOCK_FREE(PdeAddress);
  v6 = ((unsigned int)dword_140C4CB8C + 511LL + a2) & 0xFFFFFFFFFFFFFE00uLL;
  MiGetPteAddress(a1);
  MiReleasePrivilegedPtes();
  MiUnmapLargePages(a1, v6 << 12, 12);
  return MiFreeContiguousPages((v5 >> 12) & 0xFFFFFFFFFLL, v6, v7);
}
