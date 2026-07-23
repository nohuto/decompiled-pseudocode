/*
 * XREFs of MiUnmapLargeDriver @ 0x1408DA8A4
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA530 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x140217D28 (MiFreeContiguousPages.c)
 *     MiGetPdeAddress @ 0x14025BEDC (MiGetPdeAddress.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapLargePages @ 0x140395434 (MiUnmapLargePages.c)
 *     MiReleasePrivilegedPtes @ 0x140773C08 (MiReleasePrivilegedPtes.c)
 */

__int64 __fastcall MiUnmapLargeDriver(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi

  PdeAddress = MiGetPdeAddress(a1);
  v5 = MI_READ_PTE_LOCK_FREE(PdeAddress);
  v6 = ((unsigned int)dword_140C4CC8C + 511LL + a2) & 0xFFFFFFFFFFFFFE00uLL;
  MiGetPteAddress(a1);
  MiReleasePrivilegedPtes();
  MiUnmapLargePages(a1, v6 << 12, 12);
  return MiFreeContiguousPages((v5 >> 12) & 0xFFFFFFFFFLL, v6);
}
